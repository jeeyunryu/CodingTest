// 물통
#include <iostream> 
#include <vector> //벡터 사용
#include <algorithm> // 정렬
#include <queue> // 큐 사용을 위함

using namespace std;

vector <int> Pour(int A, int B, int C){
    
    queue<pair<pair<int, int>, int> > my_queue; // 물통에 들어있는 물의 양
    vector<int> water_in_c; // 벡터 A가 0일 때 C 물통에 담겨있는 물의 양을 저장한 벡터로 .. 
    int a = 0, b = 0, c = 0; //A, B, C 물통에 들어있는 물의 양
    bool arr[201][201][201] = {{{false}}};

    my_queue.push(make_pair(make_pair(0, 0), C)); //초기화 a: 0, b: 0, c: C
    
    while(!my_queue.empty()){ // 큐가 빌 때까지 반복 -> While문으로 작성
       
        a = my_queue.front().first.first;
        b = my_queue.front().first.second; 
        c = my_queue.front().second;    
        
        my_queue.pop(); // 큐에서 꺼내옴
        
        if(arr[a][b][c]) continue; // 이미 큐에 있는 값이라면 continue
        
        arr[a][b][c] = true;  // 아니라면 큐에 추가했음을 표시

        if(a == 0){
            water_in_c.push_back(c);
        }
    
        // A에서 B로 붓기
        if(a + b > B) my_queue.push(make_pair(make_pair(a + b - B, B), c)); // a + b > B (A에서 B로 붓고 A 물통에 물이 남는 경우)
        else my_queue.push(make_pair(make_pair(0, a + b), c)); // a + b < B (A에서 B로 붓고 A 물통에 물이 남지 않는 경우)
        
        // A에서 C로 붓기
        if(a + c > C) my_queue.push(make_pair(make_pair(a + c - C, b), C)); // a + b > C (A에서 C로 붓고 A 물통에 물이 남는 경우)
        else my_queue.push(make_pair(make_pair(0, b), a + c)); // a + b < C (A에서 C로 붓고 A 물통에 물이 남지 않는 경우)
        
        // B에서  A로 붓기[
        if(a + b > A) my_queue.push(make_pair(make_pair(A, a + b -  A), c));
        else my_queue.push(make_pair(make_pair(a + b, 0), c));
        
        // B에서 C로 붓기
        if(b + c > C) my_queue.push(make_pair(make_pair(a, b + c - C), C));
        else my_queue.push(make_pair(make_pair(a, 0), b + c));
        
        // C에서 A로 붓기
        if(a + c > A) my_queue.push(make_pair(make_pair(A, b), a + c - A));
        else my_queue.push(make_pair(make_pair(a + c, b), 0));
        
        // C에서 B로 붓기
        if(b + c > B) my_queue.push(make_pair(make_pair(a, B), b + c - B));
        else my_queue.push(make_pair(make_pair(a, b + c), 0));
    }

    return water_in_c; //while문 빠져나간다면 배열 반환하기

}

int main(){
    int A, B, C;
    vector <int> vec;
    cin >> A >> B >> C;
    vec = Pour(A, B, C);
    sort(vec.begin(), vec.end());
    for(int i = 0; i < vec.size(); i++){
        cout << vec.at(i) << endl;
    }
    return 0;
}