#include <iostream>
using namespace std;

int main() {
    int n1 , n2 , n3;

    
	cout <<endl << "Enter Number 1: ";
    cin >> n1;
    cout<< "Enter Number 2: ";
    cin >> n2;
    cout<< "Enter Number 3: ";
    cin >> n3;


    if(n1 >= n2 && n1 >= n3)
        cout <<endl<< "Largest number among three numbers: " << n1<<endl;

    if(n2 >= n1 && n2 >= n3)
        cout <<endl<< "Largest number among three numbers: " << n2<<endl;

    if(n3 >= n1 && n3 >= n2)

        cout <<endl<< "Largest number among three numbers: " << n3<<endl;
        
        cout<<endl<< "by: Kirvey C Balansag ";

    return 0;
}
