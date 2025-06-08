// 1 2 3 4
// 1 2 3 4
// 1 2 3 4 
// 1 2 3 4
// Here is the solution to print this
//you can use the many term to generate this


#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of terms :";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1; j<=n;j++){
            cout<<j;
        }
        cout << endl;
    }
    return 0;
}