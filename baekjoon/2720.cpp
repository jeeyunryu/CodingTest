//세탁소 사장 동혁
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int noTestCase = 0; // (0, 100] : 테스트케이스 개수 
    int quarters = 0, dimes = 0, nickels = 0, pennies = 0;

    cin >> noTestCase; //테스트케이스 입력 받음
    
    //int chng[noTestCase]; // 테스트케이스로 받아온 잔액 
    //int *chng = new int[noTestCase];
    //int *chng = (int*)malloc(noTestCase  * sizeof(int));
    vector<int> chng(noTestCase);

    for(int i = 0; i < noTestCase; i++){
        cin >> chng.at(i); //잔액을 1씩 받아옴
    }

    for (int i = 0; i < noTestCase; i++)
    {   
    
        if ((quarters = chng.at(i) / 25) != 0)
        {
            chng.at(i) = chng.at(i) % 25; //쿼터의 개수
        }
        if ((dimes = chng.at(i) / 10) != 0)
        {
            chng.at(i) = chng.at(i) % 10; //다임의 개수
        }
        if ((nickels = chng.at(i) / 5) != 0)
        {
            chng.at(i) = chng.at(i) % 5; //니켈의 개수
        }
        pennies = chng.at(i); //페니의 개수
        cout << quarters << " " << dimes << " " << nickels << " " << pennies << endl;
    }
    //delete[] chng;
    //free(chng);
    return 0;
}
