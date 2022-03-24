#include <iostream>
#include<stdio.h>
#include <bits/stdc++.h>
using namespace std;

 struct TPoint{
	char ID;
	float x, y;
};

 struct StackofP{    
	int *arri;
    int top;
    int sizemax;
};

int main() {
	int num;
	cin >> num;										// Reading input from STDIN
	cout << "Input number is " << num << endl;		// Writing output to STDOUT
}
    

// Struct for entity Points




/* Function to read interactively the fields of a structure TPoints */

void GetPoint(TPoint *elem){
bool valid;
    int item;

    cout << "Initialization OK: " << IniStack(&sti01,5)	<<endl;
    cout << "Is empty: "<< EmptyStack(sti01)	<<endl;
    cout << "Is full: "<< FullStack(sti01)	<<endl;
    ShowStack(sti01);
    cout << "is Push OK: "<< PushI(&sti01,2) <<endl;
    ShowStackI(sti01);
    cout << "is Push OK: "<< PushI(&sti01,8) <<endl;
    ShowStackI(sti01);
    item = PopI(&sti01,&valid);
    if (valid){
        cout << "Element extracted: "<<item	<<endl;
    }
    return 0;
}

/* Function to display the fields of a structure TPoints */

void PrintPoint(TPoint elem){

}

/* Function to initialize a stack */

bool IniStack(StackofP *sp, int s){
	  sp->arri = new int[s];
    if (sp->arri == NULL){
        cout << "Not enough memory"<<endl;
        return false;
    }
    sp->top = -1;
    sp->sizemax = s;
    return true;
}

/* Function to indicate if a stack has no elements */

bool EmptyStack(StackofP sp){
  if (sp.top < 0){ return true;}
    return false;
}

/* Function to indicate if a stack has no space to store another element */

bool FullStack(StackofP sp){
 if (sp.top >= (si.sizemax -1) ){ return true;}
    return false;
}

/* Function to insert a entity Point in a stack*/

bool PushPoint(StackofP *sp, TPoint elem){
    if (isStackFull(*sp)){
        cout <<"Stack Full";
        return false;
    }
    si->arri[++si->top] = elem;
    cout <<"Intro: "<< si->arri[si->top]<<endl;
    return true;
}

/* Function to extract a entity Point in a stack*/

TPoint PopPoint(StackofP *sp, bool *vok){
int vret = 0;
    if (isStackEmpty(*sp)){
       *vflag = false; 
    }
    else{
        vret = si->arri[si->top--];
        *vflag = true;
    }
    return vret;
// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
// Write your code here