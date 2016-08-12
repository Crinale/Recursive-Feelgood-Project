#include <iostream>
#include <string>

using namespace std;
string question;
string answer;

bool quest();

int main(){

    if(quest()){
    cout << "Done.";
    }

}


bool quest(){
    cout << "This world has many things happening what do you want done with it? \n";
    getline(cin,question);
    cout << "Are you sure you want "<< question << "?";

    getline(cin,answer);

        if(answer == "yes"||answer == "Yes"){
            return(true);
            }
        if(answer == "no"||answer == "No"){
            cout << "What do you want then? \n";
            quest();
            }
}


