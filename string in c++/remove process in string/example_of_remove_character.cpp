#include<iostream>
using namespace std;

int main()
{
    cout<<"**** word ****"<<endl<<endl;

    cout<<"**** Remove first character****"<<endl;
    string car = "FFerrarii";

    cout<<"car = \" "<<car<<" \" "<<endl;
    cout<<"car.erase(0,1): "<<car.erase(0,1)<<endl;
    cout<<"car.substr(2): "<<car.substr(2)<<endl; //it store in a new string without modify old string car
    cout<<"car: "<<car<<endl<<endl;


    /* substr() as same as
        string car = "FFerrarii";
        string car2 = car.substr(2);
        cout<<"new car2: "<<car2;  //errarii
        cout<<"old car: "<<car;  //FFerrarii
    */

    cout<<"**** Remove a specific character ****"<<endl;
    car.erase( remove(car.begin(), car.end(), 'r'), car.end() );
    cout<<"remove \'r\' character from string car: "<<car<<endl<<endl;


    cout<<"**** Take only first character****"<<endl;
    cout<<"car.erase(n = 1): "<<car.erase(1)<<endl<<endl;


    cout<<"**** Take only first nth character****"<<endl;
    car = "FFerrarii";
    cout<<"car: "<<car<<endl;
    cout<<"Take first 3 character ->car.erase(n = 3): "<<car.erase(3)<<endl<<endl;


    //output:
    //    **** word ****
    //
    //    **** Remove first character****
    //    car = " FFerrarii "
    //    car.erase(0,1): Ferrarii
    //    car.substr(2): rrarii
    //    car: Ferrarii
    //
    //    **** Remove a specific character ****
    //    remove 'r' character from string car: Feaii
    //
    //    **** Take only first character****
    //    car.erase(n = 1): F
    //
    //    **** Take only first nth character****
    //    car: FFerrarii
    //    Take first 3 character ->car.erase(n = 3): FFe
}
