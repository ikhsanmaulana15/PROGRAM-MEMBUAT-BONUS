#include <iostream>
using namespace std;

int main()
{
    int pilihan,harga,jumlah,total_pembelian;
    

    cout<<"Program Bonus harga"<<endl;
    cout<<""<<endl;
    cout<<""<<endl;
    cout<<"--------------------"<<endl;
     cout<<"1.Sepatu-250K"<<endl;
     cout<<"2.Tas-300K"<<endl;
     cout<<"3.Kimono-150K"<<endl;
     cout<<"4.Selimut-400K"<<endl;
    cout<<"--------------------"<<endl;
    cout<<"Masukkan pilihan anda:"<<endl;
    cin>>pilihan;


   cout<<"masukkan harga = "<<endl;
    cin>>harga;

    cout<<"masukkan total item = "<<endl;
    cin>>jumlah;

    total_pembelian = harga* jumlah;
    cout<<"total pembelian anda ="<<total_pembelian<<endl;

    switch(pilihan)
    {
        case 1:
    if (total_pembelian >= 500000 && jumlah >5)
   {
        cout <<"selamat anda dapat bonus setrika";
        break;
    }
       if (total_pembelian >= 100000 && jumlah >3)
    {
        cout <<"selamat anda dapat bonus payung";
        break;
    }
    if (total_pembelian >= 50000 && jumlah >2)
    {
        cout <<"selamat anda dapat bonus bolpoint";
        break;
    }
    else
    {
        cout<<"anda tidak mendapat bonus";
        break;
    }

    case 2 :
    {
        cout<<"terimakasih"<<endl;
    }
    default:
    cout <<"eror";
}

    cin.get();
    return 0;
}

    