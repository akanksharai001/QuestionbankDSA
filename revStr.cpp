#include<iostream>
using namespace std;
int length(char input[]){
    int count=0;
    for(int i=0;input[i]!= '\0';i++){
        count++;
    }
    return count;

}
void reverse(char input[]){
    int s=0;
    int e=length(input)-1;
    while(s<e){
        swap(input[s],input[e]);
        s++;
        e--;
    }
}

int main(){
    char name[100];
    cout<<"enter your name"<<endl;
    cin.getline(name,100);
    cout<< "the name is "<<name<<endl;
      reverse(name);
    cout<<"the reverse is "<<name<<endl;
  
    cout<<"length is "<<length(name);
    return 0;
}
