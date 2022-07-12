#include <iostream>
using namespace std;

int main()
{
    int noTestCase = 0; // (0, 100] //테스트케이스 개수 
 
    int quarters = 0, dimes = 0, nickels = 0, pennies = 0;

    cin >> noTestCase; //테스트케이스 입력 받음

    //int *chng = new int(noTestCase);
    int chng[noTestCase]; // 테스트케이스로 받아온 잔액 

    for(int i = 0; i < noTestCase; i++){
        cin >> chng[i]; //잔액을 1씩 받아옴
    }
    //cin >> chng[0] >> chng[1] >> chng[2];

    for (int i = 0; i < noTestCase; i++)
    {   
      
        if ((quarters = chng[i] / 25) != 0)
        {
            chng[i] = chng[i] % 25; //쿼터의 개수
        }
        if ((dimes = chng[i] / 10) != 0)
        {
            chng[i] = chng[i] % 10; //다임의 개수
        }
        if ((nickels = chng[i] / 5) != 0)
        {
            chng[i] = chng[i] % 5; //니켈의 개수
        }
        pennies = chng[i]; //페니의 개수
        cout << quarters << " " << dimes << " " << nickels << " " << pennies << endl;
    }

    //delete [] chng;
    return 0;
}
