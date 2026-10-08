#include <iostream>
using namespace std;

bool isPresent(int sec[], int k, int wanted)
{
    for(int i=0;i<k;i++)
    {
        if(wanted==sec[i])
        return true;
    }

    return false;
}

int main()
{
    int arr[]={2,2,3,3,3,4};
    int n=6 ,count, k=0;
    int sec[n];

    for(int i=0;i<n;i++)
    {
        count=0;
        bool resp=isPresent(sec,k,arr[i]);
        if(resp==true)
        continue;

        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            count++;
        }
        k++;
        sec[k]=arr[i];
        cout<<arr[i]<<" Found "<<count<<" times \n"<<endl;
    }


}