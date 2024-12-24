#include<bits/stdc++.h>
using namespace std;

void jobfunction(string job){
    cout << "your job is " << job << endl;
}
void namefunction(string name){
    cout << "hey " << name << endl;
    }

void agefunction(string age){
    cout << "your age is " << age << endl;
}
        int main() {
        string name;
        string job;
        string age;

        cin >> name;
        cin >> age;
        cin >> job;
        
        namefunction(name);
        agefunction(age);
        jobfunction(job);
       

        string name2;
        string job2;
        string age2;

        cin >> name2;
        cin >> age2; 
        cin >> job2; 
              
        namefunction(name2);
        agefunction(age2);
        jobfunction(job2);
         return 0;
}