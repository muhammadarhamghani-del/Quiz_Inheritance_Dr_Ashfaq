#include <iostream>
using namespace std;

class Places{
    int p_ID;
    string name;
    string location;
public:
    // Default Constructor
    Places(){
        p_ID = 0;
        name = "Arham_Ghani";
        location = "Islamabad";
    }

    // Perameterized Constructor
    Places(int i , string n , string l){
        p_ID = i;
        name = n;
        location = l;
    }

    // Setter Function 
    void set_ID(int i){
        p_ID = i;
    }

    void set_name(string n){
        name = n;
    }

    void set_Location(string l){
        location = l;
    }

    // Getter Function 
    int get_ID(){
        return p_ID;
    }

    string get_name(){
        return name;
    }

    string get_location(){
        return location;
    }

    // TO STRING 

    string To_String(){
        return to_string(p_ID) + "\t" + name + "\t" + location;
    }


};


// Class Park 

class Park : public Places{
    int no_of_trees;
    int ticket;
    bool kidsArea;
    bool joggingArea;
    bool refreshment;
public:
    Park(){
        no_of_trees = 0;
        ticket = 0;
        kidsArea = true;
        joggingArea = true;
        refreshment = true;
    }

// Setter 
    void set_Trees(int t){
        no_of_trees = t;
    }

    void set_Ticket(int t1){
        ticket = t1;
    }

    void set_kidsArea(bool b1){
        kidsArea = b1;
    }

    void set_joggingArea(bool b2){
        joggingArea = b2;
    } 

    void set_refreshment(bool b3){
        refreshment = b3;
    } 


// Getter 
    int get_Trees(){
        return no_of_trees;
    }

    int get_ticket(){
        return ticket;
    }

    bool get_kidsArea(){
        return kidsArea;
    }

    bool get_joggingArea(){
        return joggingArea;
    }

    bool get_refreshment(){
        return refreshment;
    }

// Perameterized Constructor 

    Park(int id , string n , string l , int t , int t1 , bool b1 , bool b2 , bool b3): Places(id , n , l) , no_of_trees(t) , ticket(t1) , kidsArea(b1) , joggingArea(b2) , refreshment(b3){};

    string To_String(){
    return Places::To_String() 
        + "\t" + to_string(no_of_trees) 
        + "\t" + to_string(ticket) 
        + "\t" + to_string(kidsArea) 
        + "\t" + to_string(joggingArea) 
        + "\t" + to_string(refreshment);
    }

};

int main() {
    Park P1(270 , "MAG" , "Sialkot" , 10 , 250 , true , true , true);
    cout << P1.To_String() << endl;
    return 0;
}