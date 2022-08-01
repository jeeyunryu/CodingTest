//평균은 넘겠지
#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int n = 0; //테스트 케이스 
    int students = 0; //한 케이스 당 학생 수
    int total = 0; //한 케이스 당 학생들 점수 총합
    int cnt = 0; // 평균을 넘는 학생들 명수 누적
    double per = 0; //평균을 넘는 학생들의 비율
    double avg = 0; //학생들 점수 평균

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> students;
        int* arr = (int*)malloc(sizeof(int) * students);
       
        total = 0;
        avg = 0;
        cnt = 0;
        for(int j = 0; j < students; j++){
            cin >> arr[j];
            total += arr[j];
        }
        
        avg = (double)total / students; // 점수 평균 내기
       
        for(int j = 0; j < students; j++){
            if(arr[j] > avg) cnt++;
        }

        per = 100 * ((double)cnt / students);
        cout << fixed << setprecision(3) << per << "%" << endl;
    }
    return 0;
}