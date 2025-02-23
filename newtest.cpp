#include <iostream>
using namespace std;

class Player {
private:  
    string name;  // Cannot be accessed directly outside the class
    int health;
    int xp;

public:  
    // Constructor
    Player(string name_val, int health_val, int xp_val) 
        : name(name_val), health(health_val), xp(xp_val) {
        cout << "Constructor called for " << name << endl;
    }
    
    // Public function to set name
    void set_name(string name_val) {  
        name = name_val;  
    }

    // Destructor
    ~Player() {
        cout << "Destructor called for " << name << endl;
    }
};

int main() {
    Player p1("John", 100, 50); // Object creation, calls the constructor
    p1.set_name("Jack");  // Allowed because set_name() is public
    // p1.name = "Mike";  // ❌ Error: 'name' is private
    return 0;  // Destructor is called when object goes out of scope
}
