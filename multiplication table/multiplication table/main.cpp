//
//  main.cpp
//  multiplication table
//
//  Created by Nisha Ramprasath on 28/10/23.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    int n,i;
    cout<<"enter n";
    cin>>n;
    
    for(i=1;i<=10;i++){
        cout<<n<<"x"<<i<<"="<<i*n;
        cout<<endl;
        
    }

    return 0;
}
