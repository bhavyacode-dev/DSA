#include <iostream>
using namespace std ;

class arry
{
    public:
    void show (int arr[],int s)
    {
        for(int i=0; i<s ;i++)
        {
            cout<<arr[i]<<endl;
        }
    }

    void doDelete(int arr[],int s,int pos)
    {
        
    }

     void doInsert(int arr[],int s,int pos,int value)
    {
        
    }

    int doFind (int arr[],int wvalue, int s)
    {
        for(int i=0; i<s; i++)
        {
            if(wvalue==arr[i])
            {
                int count;
                count++;
                return (i);
            }     
        }
                return (-1);
            
    }

    void do_delete_wanted (int arr[], int &s, int wvalue)
    {
        int i, pos,count;
         for(i=0; i<s; i++)
        {
            if(wvalue==arr[i])
                 count++;
            pos=i;
        }
        if (count==0)
                cout<<"Not Found"<<endl;
            else
                cout<<"found times="<<count<<endl;
        for(i=pos+1; i<s; i++)
            arr[i-1]=arr[i];
        s-=1;

    }

};

int main ()
{
    int arr[5]={10,30,50,30};
    int cap=5, size=4;
    arry obj;
    obj.show(arr,size);
    obj.doDelete(arr,size,2);
    obj.doInsert(arr,size,2,30);
    int wvalue_at_position=obj.doFind(arr,40,size);
    cout<<"The wanted value is at position= "<<wvalue_at_position;
    obj.do_delete_wanted (arr,size,30);
    obj.show(arr,size);
    
    
    
    

    

}