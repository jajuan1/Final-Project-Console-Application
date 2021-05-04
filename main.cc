/******************************************************************************
Evan
04/30/21
Final project skeleton
*******************************************************************************/
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

// Struct declaration

struct Person{  
    
    string personName,
           personDOB;
           
    long personSSN,
         fatherSSN,
         motherSSN;
    
    char personGender;
    
    float personHeight,
          personWeight;
    
    Person* next;                                         
};


// Function prototypes

void show_welcomeMsg();

int user_input();

bool menu_loop(bool, Person*);

Person* option_one(Person*);

Person* option_two(Person*);

Person* option_three(Person*);

Person* option_four(Person*);

Person* option_five(Person*);

Person* option_six(Person*);

Person* option_seven(Person*);

Person* option_eight(Person*);

Person* option_nine(Person*);

Person* option_ten(Person*);

Person* option_eleven(Person*);

Person* option_twelve(Person*);

void show_goodbyeMsg();

float get_RBMI(int, int, person[]); 

// End function prototypes

// Driver
int main() {
    
    // Hello
    show_welcomeMsg();
    
    // Initialize struct
    Person* head = new Person;
    
    head -> next = NULL;
    
    Person* current = head;
    
    bool quit = false;                                      // Control flow
    
    // Main menu loop
    while (quit == false && cin) {
        
        quit = menu_loop(quit, head);                       //  Exit on flag
    }
    
    // Goodbye
    show_goodbyeMsg();
    
    return 0;
}    

// Function definitions

// Welcome
// Parameters: None
// Returns: Void
void show_welcomeMsg() {                                                                
    cout << "Welcome to the Person Struct Linked List Manager!" 
         << endl << endl;
}

// Get user input
// Parameters: none
// Returns: Int
int user_input() {
    
    int inp = 0;
    
    while (cin >> inp) {
        
        return inp;
    } 
}

// Switchboard for menu options 
// Parameters: Bool, pointer to head of person struct
// Returns: Bool
bool menu_loop(bool quit, Person* head) {
    
    int choice = 0;
    
    bool dontquitMenu = true;
    
    cout << "Please listen carefully, as our menu options have recently "
         << "changed: " << endl; // :D
    cout << "1: " << endl;
    cout << "2: " << endl;
    cout << "3: " << endl;
    cout << "4: " << endl;
    cout << "5: " << endl;
    cout << "6: " << endl;
    cout << "7: " << endl;
    cout << "8: " << endl;
    cout << "9: " << endl;
    cout << "10: " << endl;
    cout << "11: " << endl;
    cout << "12: " << endl;
         
    while (cin && dontquitMenu == true) {
        
        cout << "Enter option 1-12, or enter -1 to show menu again. "
            << "Enter anything else to exit." << endl;    
        
        choice = user_input(); 
    
        switch (choice) {
        
            case -1:

            cout << "Menu options: " << endl;
            cout << "1: " << endl;
            cout << "2: " << endl;
            cout << "3: " << endl;
            cout << "4: " << endl;
            cout << "5: " << endl;
            cout << "6: " << endl;
            cout << "7: " << endl;
            cout << "8: " << endl;
            cout << "9: " << endl;
            cout << "10: " << endl;
            cout << "11: " << endl;
            cout << "12: " << endl;
            
            break;
            
            case 1:
            
                cout << "Option 1" << endl;
            
                head = option_one(head);
            
                break;
        
            case 2:
            
                cout << "Option 2" << endl;
            
                head = option_two(head);
            
                break;
        
            case 3:
            
                cout << "Option 3" << endl;
            
                head = option_three(head);
            
                break;
        
            case 4:
            
                cout << "Option 4" << endl;
            
                head = option_four(head);
            
                break;
        
            case 5:
            
                cout << "Option 5" << endl;
            
                head = option_five(head); 
            
                break;
        
            case 6:
            
                cout << "Option 6" << endl;
            
                head = option_six(head);
            
                break;
        
            case 7:
            
                cout << "Option 7" << endl;
            
                head = option_seven(head);
            
                break;
            
            case 8:
            
                cout << "Option 8" << endl;
            
                head = option_eight(head);
            
                break;
            
            case 9:
            
                cout << "Option 9" << endl;
            
                head = option_nine(head);
            
                break;
            
            case 10:
            
                cout << "Option 10" << endl;
            
                head = option_ten(head);
            
                break;
            
            case 11:
            
                cout << "Option 11" << endl;
            
                head = option_eleven(head);
            
                break;
            
            case 12:
            
                cout << "Option 12" << endl;
            
                head = option_twelve(head);
            
                break;

            default:
            
                cout << "Terminating" << endl;
            
                return dontquitMenu;
        }
    
    }
    return dontquitMenu;
}    


// Option 1
// Parameters: Pointer to head of person struct
// Returns: Pointer to head of person struct
Person* option_one(Person* head) {
    
    cout << "Fnct 1" << endl;
    
    return head;
}

// Option 2
// Parameters: Pointer to head of person struct
// Returns: Pointer to head of person struct
Person* option_two(Person* head) {
    
    cout << "Fnct 2" << endl;
    
    return head;
}

// Option 3
// Parameters: Pointer to head of person struct
// Returns: Pointer to head of person struct
Person* option_three(Person* head) {
    
    cout << "Fnct 3" << endl;
    
    return head;
}

// Option 4
// Parameters: Pointer to head of person struct
// Returns: Pointer to head of person struct
Person* option_four(Person* head) {
    
    cout << "Fnct 4" << endl;
    
    return head;
}

// Option 5
// Parameters: Pointer to head of person struct
// Returns: Pointer to head of person struct
Person* option_five(Person* head) {
    
    cout << "Fnct 5" << endl;
    
    return head;
}

// Option 6
// Parameters: Pointer to head of person struct
// Returns: Pointer to head of person struct
Person* option_six(Person* head) {
    
    cout << "Fnct 6" << endl;
    
    return head;
}

// Option 7
// Parameters: Pointer to head of person struct
// Returns: Pointer to head of person struct
Person* option_seven(Person* head) {
    
    cout << "Fnct 7" << endl;
    
    return head;
}

// Option 8
// Parameters: Pointer to head of person struct
// Returns: Pointer to head of person struct
Person* option_eight(Person* head) {
    
    cout << "Fnct 8" << endl;
    
    return head;
}

// Option 9
// Parameters: Pointer to head of person struct
// Returns: Pointer to head of person struct
Person* option_nine(Person* head) {
    
    cout << "Fnct 9" << endl;
    
    return head;
}

// Option 10
// Parameters: Pointer to head of person struct
// Returns: Pointer to head of person struct
Person* option_ten(Person* head) {
    
    cout << "Fnct 10" << endl;
    
    return head;
}

// Option 11
// Parameters: Pointer to head of person struct
// Returns: Pointer to head of person struct
Person* option_eleven(Person* head) {
    
    cout << "Fnct 11" << endl;
    
    return head;
}

// Option 12
// Parameters: Pointer to head of person struct
// Returns: Pointer to head of person struct
Person* option_twelve(Person* head) {
    
    cout << "Fnct 12" << endl;
    
    return head;
}

// Goodbye
// Parameters: None
// Returns: Void
void show_goodbyeMsg() {                                                              
	cout << endl << "Thank you for using the Person Struct Linked List " 
	     << "Manager!" << endl;
}

float get_RBMI(int i, int j, person pArray[]) 
{
    
    float wDiff = 1 + abs(pArray[i].weight - pArray[j].weight) * 0.45;
    float hDiff = 1 + abs(pArray[i].height - pArray[j].height) * 0.254;
    
    float RBMI = wDiff / (pow(hDiff, 2));
    
    return RBMI;
}    
