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
// End struct declaration

// Function prototypes

void show_welcomeMsg();

int user_input();

bool menu_loop(bool, Person*, Person*);

Person* option_one(Person*);

//Person* option_two(Person**, Person*); Deprecated placeholder 
Person* delete_Person(Person** head);

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

//Person* createPerson_Nodes(); 

void print_PersonNodes(Person*, Person*); 

void populate_Person(string, Person*, Person*, Person*);

// End function prototypes

// Driver
int main() {
    
    // Hello
    show_welcomeMsg();
    
    // Var declarations
    bool quit = false;                  // Control flow
    
    string fileName = "persondata.txt"; // Modularize filename for both file 
                                        // function calls; initialize to file 1
                                        // Change to "supplement.txt" in #4 call
    
    // End var declarations
    
    // Initialize Struct 
    Person* head = new Person;  // Independent person
    head -> next = NULL;
    
    Person* current = head;
    Person* newPerson;
    // End Struct initialization
    
    // Populate Struct w/ start file -- first "module" before calling menu
    populate_Person(fileName, current, newPerson, head);
    
    // Main menu loop
    while (quit == false && cin) {
        
        quit = menu_loop(quit, head, current);  //  Exit on flag
    }
    
    // Goodbye
    show_goodbyeMsg();
    
    return 0;
}    

// Function definitions

// Print person Nodes
// Parameters: Pointer to head of person struct
// Returns: Void
void print_PersonNodes(Person* head, Person* current) {

    current = head;
    
    cout << endl;

    cout << "Here is the linked list of persons: " << endl << endl;

    while (current != NULL) {
        
        cout << current -> personName << " | "
             << current -> personSSN << " | "
             << current -> personGender << " | "
             << current -> personDOB << " | "
             << current -> personHeight << " | "
             << current -> personWeight << " | "
             << current -> fatherSSN << " | "
             << current -> motherSSN << " | "
             << endl;
        
        current = current -> next;
    }
    
    cout << endl; 
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


// Delete person from list, with user input SSN as key
// Parameters: Person** (Reference Person* -- call w/ &Person)
// Returns: Person*
Person* delete_Person(Person** head) {
    
    bool keyFound = false;
    
    string currentLine;
    
    cin.ignore();

    cout << "Enter the SSN of the person to be deleted: " << endl;
    
    getline(cin, currentLine);
    
    long key = stol(currentLine);
    
    Person* temp = *head;
    
    Person* prev = NULL;
    
    if (temp != NULL && temp -> personSSN == key) {

        *head = temp -> next;
        
        delete temp;
        
    } else {
        
        while (temp != NULL && temp -> personSSN != key) {
            
            prev = temp;
            
            temp = temp -> next;
            
            keyFound = true;
        }
    }
    
    if (temp == NULL) {
        
        cout << "Indicated SSN not found!" << endl;
        
        keyFound = false;
        
        cin.ignore();
        
        return *head;
    }    
    
    prev -> next = temp -> next;
        
    delete temp;
    
    cout << "Deletion operation successful!" << endl;
    
    cout << "Person " << temp -> personSSN << " deleted." << endl;
    
    cout << "Updating database..." << endl;
    
    return *head;
}

// Switchboard for menu options 
// Parameters: Bool, pointer to head of person struct
// Returns: Bool
bool menu_loop(bool quit, Person* head, Person* current) {
    
    int choice = 0;
    
    bool dontQuitMenu = true;
    
    cout << "Menu Options: " << endl; 
    cout << "1: " << endl;
    cout << "2: Deletion Operation" << endl;
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
         
    while (cin && dontQuitMenu == true) {
        
        cout << "Enter option 1-12, or enter -1 to show menu again. "
            << "Enter anything else to exit." << endl;    
        
        choice = user_input(); 
    
        switch (choice) {
        
            case -1:

                cout << "Menu options: " << endl;
                cout << "1: " << endl;
                cout << "2: Deletion Operation" << endl;
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
            
                cout << "Option 2: Deletion Operation" << endl;
                
                
                print_PersonNodes(head, current);
                
                head = delete_Person(&head);
                
                print_PersonNodes(head, current);
            
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
            
                cout << "Terminating." << endl;
            
                return dontQuitMenu;
        }
    
    }
    return dontQuitMenu;
}    


// Populate persons from file and return person count
// Parameters: String, Person*, Person*, Person*
// Returns: Void
void populate_Person(string fileName, Person* current, Person* newPerson,
                     Person* head) {
    
    ifstream dataFile;
    dataFile.open(fileName);
    
    string currentLine;
    
    while (!dataFile.eof()) {  
        
        getline(dataFile, currentLine);
        current -> personName = currentLine;
        
        getline(dataFile, currentLine);
        current -> personSSN = stol(currentLine); 
        
        getline(dataFile, currentLine);
        current -> personGender = currentLine[0]; 
        
        getline(dataFile, currentLine);
        current -> personDOB = currentLine; 

        getline(dataFile, currentLine);
        current -> personHeight = stof(currentLine);
        
        getline(dataFile, currentLine);
        current -> personWeight = stof(currentLine);
        
        getline(dataFile, currentLine);
        current -> fatherSSN = stol(currentLine);
        
        getline(dataFile, currentLine);
        current -> motherSSN = stol(currentLine);            
        
        newPerson = new Person;         
        current -> next = newPerson;    
        current = newPerson;
    }
    
    dataFile.close();
    
    current = head;
    
    Person* prevPerson;
    
    while (current -> next != NULL) {    
        
        prevPerson = current;
        
        current = current -> next;
    }
    
    prevPerson -> next = NULL;
    
    delete newPerson;
    
    current = head;
}

// Option 1
// Parameters: Pointer to head of person struct
// Returns: Pointer to head of person struct
Person* option_one(Person* head) {
    
    cout << "Fnct 1" << endl;
    
    return head;
}

/*
// Option 2
// Parameters: Pointer to head of person struct
// Returns: Pointer to head of person struct
Person* option_two(Person* head) {
    
    cout << "Fnct 2" << endl;

    return head;
}
*/

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
