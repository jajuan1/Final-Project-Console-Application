#include <iostream>

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
 
  return 0;
}
