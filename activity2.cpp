#include <iostream>
using namespace std;

int main(){

    int num , b , p, buko = 10 , sb = 20 , ps = 30 , ai = 32;
    
		cout<< "WELCOME TO KIRVEY'S SNACK HOUSE"<< endl;
        cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
        cout << "     --Here is our menu--    " << endl<<endl;
        cout << "________________________________"<<endl <<endl;
        cout << "     [1]Buko Juice = P10" << endl ;
        cout << "     [2]Special Binangkal = P20"<< endl;
        cout << "     [3]Pork Shopao = P30          "<< endl;
        cout << "     [4]Ampalaya icecream=P32"<< endl;
        cout << "                             "<<endl;
        cout << "________________________________"<<endl;

        cout <<"Enter Number: ";
        cin >> num;

            if(num==1){
                cout << "Buko Juice = P10"<<endl;
            }
            else if(num==2){
                cout << "Special Binangkal = P20"<<endl;
            }
             else if(num==3){
                cout << "Shopao = P30 "<<endl;
            }
            else if (num==4){
                cout << "Ampalya icecream= P32"<<endl;
            }
        cout <<"Your payment: ";
        cin >> b;



            if( num == 1){
                p  = b - buko;
                if(b < buko){
                cout << endl<< "Transaction Error"<< endl;
                }
                else
                cout << "change:"<<p <<endl<<endl;
                 cout << "Enjoy!!"<<endl;
            }
            if( num == 2){
                p  = b - sb ;
                if(b < sb ){
                cout << endl<< "Transaction Error"<< endl;
                }
                else
                cout << "change: " << p <<endl<<endl;
                 cout << "Enjoy!!"<<endl;
                
            }if( num == 3){
                p  = b -ps;
                if(b < ps){
                cout << endl<< "Transaction Error" << endl;
                }
                else
                cout << "change: " << p <<endl<<endl;
                cout << "Enjoy!!"<<endl;
                 
            }if( num == 4){
                p = b - ai;
                if(b < ai){
                cout << endl<< "Transaction Error" << endl;
                }
                else
                cout << "change: " << p <<endl<<endl;
                 cout << "Enjoy!!"<<endl;
            }
    return 0;
}
