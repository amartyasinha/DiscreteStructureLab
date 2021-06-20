#include<iostream>
using namespace std;
class connective {
	int x[4],y[4];

	public :
    void input(){
        cout<<"Enter value of x (T/F in form of 1 and 0)";
            for(int i=0;i<4;i++){
                cin>>x[i];
            }
        cout<<"Enter value of y (T/F in form of 1 and 0)";
            for(int j=0;j<4;j++){
            cin>>y[j];
        }
    }

	void conjuction(){
        cout<<"Truth Table of Conjuction "<<endl;
        cout<<"x\t";
        cout<<"y\t";
        cout<<"x&&y\n";

        for(int i=0;i<4;i++){
            if(x[i]==1)
                cout<<"T\t" ;
            else 
                cout<<"F\t";

            if(y[i]==1)
                cout<<"T\t";
            else 
                cout<<"F\t";

            if(x[i]&&y[i]==1)
                cout<<"T\t" ;
            else 
                cout<<"F\t";
                cout<<endl;
        }
    }

    void disjuction(){
        cout<<"Truth Table of Disjuction "<<endl;
        int i;
        cout<<"x\t";
        cout<<"y\t";
        cout<<"x||y\n";

        for(int i=0;i<4;i++){
            if(x[i]==1)
                cout<<"T\t" ;
            else 
                cout<<"F\t";
            if(y[i]==1)
                cout<<"T\t";
            else 
                cout<<"F\t";
            if(x[i]||y[i]==1)
                cout<<"T\t" ;
            else 
                cout<<"F\t";
                cout<<endl;
        }
    }
    void exclusiveOR(){
        cout<<"Truth Table of Exclusive OR "<<endl;
        cout<<"x\t";
        cout<<"y\t";
        cout<<"x XOR y\n";

        for(int i=0;i<4;i++){
            if(x[i]==1)
                cout<<"T\t" ;
            else 
                cout<<"F\t";
            if(y[i]==1)
                cout<<"T\t";
            else 
                cout<<"F\t";
            if(x[i]==y[i])
                cout<<"F\t" ;
            else 
            cout<<"T\t";
            cout<<endl;
        }
    }
	void cond(){
        cout<<"Truth Table of Conditional "<<endl;
        cout<<"x\t";
        cout<<"y\t";
        cout<<"x -> y\n";

        for(int i=0;i<4;i++){
            if(x[i]==1)
                cout<<"T\t" ;
            else 
                cout<<"F\t";
            if(y[i]==1)
                cout<<"T\t";
            else 
                cout<<"F\t";
            if(!x[i]||y[i])
                cout<<"T\t" ;
            else 
                cout<<"F\t";
                cout<<endl;
        }
    }

    void bicond(){
        cout<<"Truth Table of Biconditional "<<endl;
        cout<<"x\t";
        cout<<"y\t";
        cout<<"x <-> y\n";
        for(int i=0;i<4;i++)
        {
            if(x[i]==1)
                cout<<"T\t" ;
            else 
                cout<<"F\t";
            if(y[i]==1)
                cout<<"T\t";
            else 
                cout<<"F\t";
            if((!x[i]||y[i])&&(!y[i]||x[i]))
                cout<<"T\t" ;
            else 
                cout<<"F\t";
                cout<<endl;
        }
    }
};

int main()
{
	int choice;
	char repeat;
	connective ob;
	ob.input();

	do{
        cout<<"Enter your choice for Truth Table \n";
        cout<<"1. Conjuction \n";
        cout<<"2. Disjuction \n";
        cout<<"3. Exclusive OR \n";
        cout<<"4. Conditional \n";
        cout<<"5. Bi-Conditional \n";
        cin>>choice;
        
            
        switch(choice){
            case 1:
                ob.conjuction();
            break;

            case 2:
                ob.disjuction();
            break;

            case 3:
                ob.exclusiveOR();
            break;

            case 4:
                ob.cond();
            break;

            case 5:
                ob.bicond();
            break;

            default :
                cout<<"Not a valid choice ";
        }
        cout<<"Do you want to continue ?";
        cin>>repeat;
   }while (repeat=='y'|| repeat=='Y');
    
    return 0;
}