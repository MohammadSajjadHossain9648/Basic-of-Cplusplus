#include<iostream>
using namespace std;

int main()
{
    cout<<"*** Welcome to pizza world ***"<<endl<<endl;

    while(1)
    {
        cout<<"which pizza do you want?"<<endl;
        cout<<"1. Neapolitan Pizza"<<endl;
        cout<<"2. Chicago Pizza"<<endl;
        cout<<"3. New York-Style Pizza"<<endl;

        cout<<"4. want to exit"<<endl<<endl;

        int pizza_num;
        cout<<"pizza number: ";
        cin>>pizza_num;

        if(pizza_num == 4)
        {
            exit(10);  //exit(0) same as return 0. can use break;
        }
        cout<<endl;

        int quantity;
        cout<<"how many quantity do you want?"<<endl;
        cin>>quantity;
        cout<<endl;

        cout<<"which size do you prefer?"<<endl;
        cout<<"1. 5\" "<<endl;
        cout<<"2. 7\" "<<endl;
        int size;
        cout<<"prefer size: "<<endl;
        cin>>size;
        cout<<endl;


        switch(pizza_num)
        {
        case 1:
            switch(size)
            {
            case 1:
                cout<<"Pizza Margherita: Features tomatoes, sliced mozzarella, basil, and extra virgin olive oil."<<endl<<endl;
                cout<<"price: "<<quantity*150<<"$"<<endl<<endl;
                break;
            case 2:
                cout<<"Pizza Margherita extra: Features tomatoes, mozzarella from Campania, basil, and extra virgin olive oil."<<endl<<endl;
                cout<<"price: "<<quantity*250<<"$"<<endl<<endl;
                break;
            }
            break;
        case 2:
            switch(size)
            {
            case 1:
                cout<<"Generally, the toppings for Chicago pizza are ground beef, sausage, pepperoni, onion, mushrooms, and green peppers, placed underneath the tomato sauce."<<endl<<endl;
                cout<<"price: "<<quantity*350<<"$"<<endl<<endl;
                break;
            case 2:
                cout<<"Generally, the toppings for Chicago pizza are ground beef, sausage, pepperoni, onion, mushrooms, and green peppers, placed underneath the tomato sauce with a sprinkle of Parmesan cheese across the tomato sauce."<<endl<<endl;
                cout<<"price: "<<quantity*450<<"$"<<endl<<endl;
                break;
            }
            break;
        case 3:
            switch(size)
            {
            case 1:
                cout<<"New York-style pizza: Features tomato sauce and mozzarella cheese."<<endl<<endl;
                cout<<"price: "<<quantity*120<<"$"<<endl<<endl;
                break;
            case 2:
                cout<<"New York-style pizza: Features tomato sauce and mozzarella cheese with oregano, red pepper flakes, Parmesan cheese, and garlic powder."<<endl<<endl;
                cout<<"price: "<<quantity*500<<"$"<<endl<<endl;
                break;
            }
            break;
        default:
            cout<<"Give invalid input here. Try again."<<endl<<endl;
            break;
        }


    }


    //output:
    //    *** Welcome to pizza world ***
    //
    //    which pizza do you want?
    //    1. Neapolitan Pizza
    //    2. Chicago Pizza
    //    3. New York-Style Pizza
    //    4. want to exit
    //
    //    pizza number: 1
    //
    //    how many quantity do you want?
    //    2
    //
    //    which size do you prefer?
    //    1. 5"
    //    2. 7"
    //    prefer size:
    //    2
    //
    //    Pizza Margherita extra: Features tomatoes, mozzarella from Campania, basil, and extra virgin olive oil.
    //
    //    price: 500$
    //
    //    which pizza do you want?
    //    1. Neapolitan Pizza
    //    2. Chicago Pizza
    //    3. New York-Style Pizza
    //    4. want to exit
    //
    //    pizza number: 4
}
