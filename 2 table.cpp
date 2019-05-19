#include<iostream.h>
main()
{
    int counter;
    int max;
    cout<<"Enter number";
    cin>>max;
    for(counter=1;counter<=10;counter=counter+1)
    {
        cout<<max <<"x"<<counter<<"="<<max*counter<<"\n";
    }
    system("pause");
}
