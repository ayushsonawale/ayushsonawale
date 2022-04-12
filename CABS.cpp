#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i = 0;i < t; i++){
    int First,Second;
    cin>>First>>Second;
    if(First > Second){
        cout<<"Second\n";
    }else if(Second == First){
        cout<<"Any\n";
    }
    else{
        cout<<"First\n";
    }
}
	return 0;
}
