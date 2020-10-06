#include <iostream> 
#include <string>
using namespace std;

class Parts {
    string name;
    int code;
    int sup_code;
    int sup_num;

public:

    void getPartDetails() {
        cout<<"Enter the name of the part: ";
        cin>>name;
        cout<<"Enter the unique code of the part: ";
        cin>>code;
        cout<<"Enter the number of suppliers of the part: ";
        cin>>sup_num;
        cout<<"Enter the code of suppliers of the part: ";
        cin>>sup_code;
    }
    void showPartDetails() {
        cout<<"\n Part name: "<<name;
        cout<<"\n Part code: "<<code;
        if (sup_num < 3)
        {
            cout<<"\n Suppliers code: 0000";
        } else
        {
            cout<<"\n Suppliers code: "<<sup_code;
        }
        
    }
};

int main() {
    Parts p1;
    p1.getPartDetails();
    p1.showPartDetails();
    return 0;
}