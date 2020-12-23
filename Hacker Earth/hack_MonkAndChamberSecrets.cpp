Here is the Sol in C++

#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;

int main(){

pair<int,int> p;
queue<pair< int,int >> q1;
int n , x , i , temp,it , pos;
cin>>n>>x;
it=x;

for(i=1;i<=n;i++){
cin>>temp;
p.first = temp;
p.second = i;
q1.push(p);
}

int m=2;
while(it--){

queue<pair< int,int >> q2,q3;

int max = -1;
q2=q1;


//Always Empty Main Queue
while(!q1.empty()){
p = q1.front();
q1.pop();
}

//Take the first x terms from queue
i=x;
while(i--){
p = q2.front();
q3.push(p);

if(max < p.first){
max = p.first;
pos = p.second;
}
q2.pop();
if(q2.empty()){
break;
}
}

//Adding the remaining elments to main queue first
while(!q2.empty()){
p = q2.front();
q1.push(p);
q2.pop();
}

//Enqueue the remaining terms in order
while(!q3.empty()){

p = q3.front();
if(p.first==max && p.second==pos){
q3.pop();
}else{
if(p.first!=0){
p.first--;
}
q1.push(p);
q3.pop();
}
}

cout<<pos<<" ";

}

return 0;
}
