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

Person* createPerson_Nodes(); 

void printPerson_Nodes(Person* const); 

// End function prototypes

// Driver
int main() {
    
    // Hello
    show_welcomeMsg();
    
    // Initialize struct
    Person* head;
    
    head = createPerson_Nodes();

    // maintain the origninal head address 
    Person* current = head;

    printPerson_Nodes(current);
    
   bool quit = false;// Control flow
    
    // Main menu loop
    while (quit == false && cin) {
        
        quit = menu_loop(quit, head);                       //  Exit on flag
    }
    
    // Goodbye
    show_goodbyeMsg();
    
    return 0;
}    

// Function definitions

// Print person Nodes
// Parameters: Pointer to head of person struct
// Returns: Void
void printPerson_Nodes(Person* const head)
{
        Person* current = head;

      while(current->next)
    {
        std::cout<< current-> personName << " | ";
        std::cout<< current-> personSSN << " | ";
        std::cout<< current-> personGender << " | ";
        std::cout<< current-> personDOB << " | ";
        std::cout<< current-> personHeight << " | ";
        std::cout<< current-> personWeight << " | ";
        std::cout<< current-> fatherSSN << " | ";
        std::cout<< current-> motherSSN << " | ";
        std::cout<< '\n';
        
        current = current->next;
    } 
        std::cout<< endl;
} 


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


// Create Linked List of Person Nodes.
// Parameters: None
// Returns: Pointer to head of person struct created
Person* createPerson_Nodes(){ 
	
    Person* head = new Person;
    head -> next = NULL;
    Person* current = head;

    // Access file contents
    string person_data{""};
    ifstream personFile;

    personFile.open("supplement.txt");

    while(!personFile.eof())
    {
        //get person Name from file
        getline(personFile, person_data);
        current->personName = person_data;

        //get person SSN from file
        getline(personFile, person_data);
        current->personSSN = stol(person_data);

        //get person Gender from file
        getline(personFile, person_data);
        current->personGender = person_data[0];

        //get person DOB from file
        getline(personFile, person_data);
        current->personDOB = person_data;

        //get person Height from file
        getline(personFile, person_data);
        current->personHeight = stof(person_data);

        //get person Weight from file
        getline(personFile, person_data);
        current->personWeight = stof(person_data);

        //get person father SSN from file
        getline(personFile, person_data);
        current->fatherSSN = stol(person_data);

         //get person mother SSN from file
        getline(personFile, person_data);
        current->motherSSN = stol(person_data);

       
        current-> next = new Person; // new node is allocated on the heap.
        current = current-> next; // point to the previous allocated node.
    }
        // Free the memory of the last Person Node due to the last iteration creating a unneeded Person Node.
        delete current-> next;

        return head;
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
