#include<iostream>
using namespace std;
int main()
{
    int a[10],i,j,k,r,temp=0;
    cout<<"Enter your range"<<endl;
    cin>>r;
    cout<<"Enter your elements";

    for(i=0;i<r;i++){
            cin>>a[i];
}

for(j=0;j<r-1;j++){
        for(i=0;i<(r-1)-j;i++){

                if(a[i]>a[i+1])
                {
                    temp=a[i];
                    a[i]=a[i+1];
                    a[i+1]=temp;
                }
        }
}

cout<<"\n Result";

for(k=0;k<r;k++){
    cout<<a[k]<< " "<<endl;
}

return 0;
}
