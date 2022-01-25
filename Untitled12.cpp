#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;
class Student{
    public:
        int score[5],i,Y;
        void input(){
            for (int i = 0; i < 5; i++){
                cin>>score[i];

            }
        }
        int calculateTotalScore(){
            Y=score[1]+score[2]+score[3]+score[5]+score[5];
            return Y;
                
            } 
        };
        

// Write your Student class here

int main() {
    int n; // number of students
    cin >> n;
    Student *s = new Student[n]; // an array of n students
    
    for(int i = 0; i < n; i++){
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0; 
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }

    // print result
    cout << count;
    
    return 0;
}

