#include <iostream>

using namespace std;

struct person{  // define the UDT 
    
    string pName;
    long pSSN; 

    char gender; 
    string DOB;
    
    float height; 
    float weight;
    
    long fSSN;
    long mSSN;
    

    person* next;
};

int getData(person* head, string fMovStar);
int displayData(person*head, string fMovStar);

int main()
{
   person* head = new person; // independent person 
    head->next = NULL; 
    person* current = head; 
    person* newPerson;
    
    // assign data values 
    string fLine;
    ifstream fMovStar;
    fMovStar.open("persondata.txt"); 
    
    displayData(head, fMovStar);
 
  return 0;
}

int getData(person* head, string fMovStar)
{
    while (!fMovStar.eof())
    {
        getline( fMovStar, fLine); 
        current->pname = fLine;
        getline( fMovStar, fLine); 
        current->SSN = stol(fLine);
        getline( fMovStar, fLine); 
        current->gender = fLine[0];
        getline( fMovStar, fLine); 
        current->DOB = fLine;
        getline( fMovStar, fLine); 
        current->height = stof(fLine);
        getline( fMovStar, fLine); 
        current->weight = stof(fLine);
        getline( fMovStar, fLine); 
        current->fName = fLine;
        getline( fMovStar, fLine); 
        current->mName = fLine;
        
        newPerson = new person; // independent person 
        current->next = newPerson; // linking persons 
        current = newPerson; 
    }
    fMovStar.close();
}

int displayData(person*head, string fMovStar)
{
    getData(head, fMovStar);
    
    // display 
    while (current != NULL){
        cout << current->pname << " | " 
             << current->SSN << " | " 
             << current->gender << " | " 
             << current->DOB << " | " 
             << current->height << " | " 
             << current->weight << " | " 
             << current->fName << " | "  
             << current->mName << " | " <<  endl ;
        current = current->next; 
    }

    current = head; 
    cout << endl; 
 
    return 0;
|
