#include <iostream>
using namespace std;

int main()
{
    int noTestCase = 0; // (0, 100]
 
    int quarters = 0, dimes = 0, nickels = 0, pennies = 0;

    cin >> noTestCase;

    //int *chng = new int(noTestCase);
    int chng[noTestCase];

    for(int i = 0; i < noTestCase; i++){
        cin >> chng[i];
    }
    //cin >> chng[0] >> chng[1] >> chng[2];

    for (int i = 0; i < noTestCase; i++)
    {   
      
        if ((quarters = chng[i] / 25) != 0)
        {
            chng[i] = chng[i] % 25;
        }
        if ((dimes = chng[i] / 10) != 0)
        {
            chng[i] = chng[i] % 10;
        }
        if ((nickels = chng[i] / 5) != 0)
        {
            chng[i] = chng[i] % 5;
        }
        pennies = chng[i];
        cout << quarters << " " << dimes << " " << nickels << " " << pennies << endl;
    }
  
    return 0;
}