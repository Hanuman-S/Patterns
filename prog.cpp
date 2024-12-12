
#include<iostream>
using namespace std;

void triangle(int n){
    n++;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n+i-1;j++){
            if(j<n-(i+2)){
                cout<<" ";
            } else {
                cout<<"*";
            }
        }
        cout<<endl;
    }
}

void reverseTri(int n){
    n++;
    for(int i=n-1;i>0;i--){
        for(int j=0;j<n+i-1;j++){
            if(j<n-i){
                cout<<" ";
            } else {
                cout<<"*";
            }
        }
        cout<<endl;
    }
}

void binary(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout << !((j+i)%2) << "\t";
        }
        cout<<endl;
    }
}

void whiteNum(int n){
    int count = 1;
    for(int i=0;i<n;i++){
        for(int j=0;j<2*n;j++){
            if(j<=i){
                cout<<count;
                count++;
            } else if (j>=(2*n-i-1)){
                if(j==(2*n-i-1)){
                    count--;
                }
                cout<<count;
                count--;
            } else {
                cout << " ";
            }
        }
        count = 1;
        cout<<endl;
    }
}

void whiteRev(int n){
    for(int i=n;i>0;i--){
        for(int j=0;j<2*n;j++){
            if(j<=i-1){
                cout<<"*";
            } else if (j>=(2*n-i)){
                cout<<"*";
            } else {
                cout << " ";
            }
        }
        cout<<endl;
    }
}

void square(int n,int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i == 0 || i == n-1){
                cout << "*";
            } else if(j == 0 || j==m-1){
                cout<<"*";
            }else{
                cout <<" ";
            }
        }
        cout<<endl;
    }
}

void concurSquare(int n){
    int max = n;
    for(int i=0;i<2*n-1;i++){
        for(int j=0;j<2*n-1;j++){
            if(j<i && i<n && j<n){
                cout << max--;
            } else if(j>2*n-i-2 && i<n && j>=n){
                cout << ++max;
            } else if(j<2*n-i-2 && i>=n && j<n){
                cout << max--;
            } else if(j>=i && i>=n && j>=n){
                cout << max++;
            } else {
                cout << max;
            }
        }
        max = n;
        cout<<endl;
    }
}

int main(){
    int n,m;
    cin >> n;
    concurSquare(n);
    return 0;
}

