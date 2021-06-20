#include<iostream>
using namespace std;
class Logic{
    int l;
    int arr[10];
    int arr1[4]={1,1,0,0};
    int arr2[4]={1,0,1,0};

    public:
    void input(){
    cout<<"Proposition are A and B\n";
    cout<<"Enter operation between proposition: \n";
    cout<<"1.Conjunction\n2.Disjunction\n3.ExclusiveOr\n4.Conditional\n5.Biconditional\nEnter Option: ";
    cin>>l;
    }

    void truth(){
        for(int i=0;i<4;i++){
            if(l==1){
                if(arr1[i]==1 && arr2[i]==1)
                    arr[i]=1;
                else
                    arr[i]=0;
            }
            else if(l==2){
                if(arr1[i]==1 || arr2[i]==1)
                    arr[i]=1;
                else
                    arr[i]=0;
            }
            else if(l==3){
                if(arr1[i]!=arr2[i])
                    arr[i]=1;
                else
                    arr[i]=0;
            }
            else if(l==4){
                if(arr1[i]==1 && arr2[i]==0)
                    arr[i]=0;
                else
                    arr[i]=1;
            }
            else if(l==5){
                if(arr1[i]==arr2[i])
                    arr[i]=1;
                else
                    arr[i]=0;
            }  
        }

    }

    void display(){
        cout<<"Table for seleted operation is: \n";
        for(int i=0;i<4;i++){
        cout<<arr1[i]<<" | ";
        cout<<arr2[i]<<" | ";
        cout<<arr[i]<<endl; 
        }
    }

    void formulaCheck(Logic a, Logic b)
    {
        for(int i=0;i<4;i++)
        {
            if(a.arr[i]==1 && b.arr[i]==0)
            {
                arr[i]=0;
            }
            else
            {
                arr[i]=1;
            }
        }
        int p,q,r,s;
        p=arr[0];
        q=arr[1];
        r=arr[2];
        s=arr[3];
        cout<<"Table for selected formula is: \n";
        for(int i=0;i<4;i++)
        {
        cout<<a.arr[i]<<" | ";
        cout<<b.arr[i]<<" | ";
        cout<<arr[i]<<endl;
        }
        if(p==1&&q==1&&r==1&&s==1)
        {
            cout<<"This is well formed formula";
        }
        else
        {
            cout<<"This is not a well formed formula";
        }
    }
};

int main()
{
   Logic a;
   a.input();
   a.truth();
   a.display();
   Logic b;
   b.input();
   b.truth();
   b.display();
   Logic c;  
   c.formulaCheck(a,b); 
   return 0;
}
