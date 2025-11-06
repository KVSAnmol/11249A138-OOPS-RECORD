#include<iostream>
using namespace std;
class employeepayslip{
    private:
    int em_no,basicpay,da,hra,ban,net,pay,total,epf,gpay,prof_tax,net_pay;
      string emp_name,in_tax,uan,ifsc_c;
    public:
void getdetails(){
    cout<<"employee name:";
    cin>>emp_name;
    cout<<"income tax no:";
    cin>>in_tax;
    cout<<"Universal acc no:";
    cin>>uan;
    cout<<"bank acc no:";
    cin>>ban;
    cout<<"ifsc code:";
    cin>>ifsc_c;
    cout<<"employee no:";
    cin>>em_no;
    cout<<"basic pay:";
    cin>>basicpay;
}
void cal(){
    da = (basicpay)*0.08;
    hra = (basicpay+da)*0.01;
    epf = (basicpay)*0.12;
    gpay = basicpay+da+hra;
    prof_tax =(basicpay)*0.02;
    total = epf+prof_tax;
    net_pay = gpay-total;
}
void display(){
    cout<<"employee no:"<<em_no<<"\nemployee name:"<<emp_name<<"\nuniversal acc no:"<<uan<<"\nemp_name:"<<ifsc_c<<"\nbankaccno:"<<ban<<"\nbasicpay:"<<basicpay<<endl;
    cout<<"da:"<<da<<"\nprof_tax:"<<hra<<"\nepf:"<<epf<<"\ngpay:"<<gpay<<"\nprof_tax:"<<prof_tax<<"\ntotaldeduction:"<<total<<"\nnet_pay:"<<net_pay<<endl;
}
};
int main(){
    employeepayslip d;
    cout<<"enter the details of employee:"<<endl;
    d.getdetails();    
    d.cal();
    cout<<"employeepayslipdetails:"<<endl;
    d.display();
    return 0;
}