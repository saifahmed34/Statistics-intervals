#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int numofele;
    cout<<"How many element you have: ";
    cin>>numofele;
 float a[numofele];
 int r1=0;
 cout<<"Enter All Elements: ";
    for (int i = 0; i < numofele; ++i) {
        cin>>a[i];
    }

        sort(a,a+numofele);
cout<<"This is your elements sorted\n";
    for (int i = 0; i < numofele; ++i) {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"Enter intervals between 2 num to show how many num between them: ";
    float x,y;
    cin>>x>>y;

    for (int i = 0; i < numofele; ++i) {
        if(a[i]>=x&&a[i]<y){
            r1++;
        }
    }
   cout<<"the range num you want "<<r1;
    return 0;
}
