

#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main() {
  fast;
  map<string,string>dept;
  dept["CSE"] = "Computer Science & Engineering, ";
  dept["ICE"] = "Information & Communication Engineering, ";

  map<int,string>year;
  year[3] = "3rd year, ";

  map<int,string>sem;
  sem[1] = "1st semester, ";

  map<int,string>type;
  type[1] = "Theory.";
  type[2] = "Lab.";

  map<int,string>course;
  course[1] = "Software Engineering, ";
  course[2] = "Database Management Systems, ";
  course[3] = "Web Engineering, ";
  course[4] = "Compiler Design, ";
  course[5] = "Engineering Ethics and Environmental Protection, ";
  course[6] = "Communication Engineering, ";

  string s ;

  

  while(cin >> s ){if(s[0]=='C' && s[1]=='S' && s[2]=='E'){
     cout << dept["CSE"];
    }else{
     cout << dept["ICE"];
    }
  
  
  
    cout<<year[s[3]-48] << sem[s[4]-48] << course[s[5]-48] << type[s[6]-48] << endl;}



  
  
  return 0;
}-