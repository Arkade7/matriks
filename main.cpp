#include <iostream>
#include <conio.h>

using namespace std;

struct a
{
    int arr[10][10];
};

struct a matriks [2];

int input(int &baris, int &kolom,int nomor)
{
    cout << "masukkan kolom matriks "<<nomor<<" = ";
    cin>>kolom;
    cout << "masukkan baris matriks "<<nomor<<" = ";
    cin>>baris;
    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            cout << "Masukkan elemen matriks "<<nomor<<" [" << i + 1 <<"]["<< j + 1 << "] : ";
            cin >> matriks[nomor].arr[i][j];;
        }
    }
    return baris, kolom;
}

void tampil(int &baris, int &kolom, int nomor)
{
    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            cout << matriks[nomor].arr[i][j] << " ";
        }
        cout << endl;
    }
}

void penjumlahan()
{
    int baris1,kolom1,baris2,kolom2;
    input(baris1,kolom1,1);
    input(baris2,kolom2,2);
    if (baris1 == baris2 && kolom1 == kolom2)
    {
        cout<<"matriks 1 = "<<endl;
        tampil(baris1,kolom1,1);
        cout<<"matriks 2 = "<<endl;
        tampil(baris2,kolom2,2);
        cout<<"hasil penjumlahan matriks = "<<endl;
        for (int i = 0; i < baris1; i++)
            {
                for (int j = 0; j < kolom1; j++)
                {
                    cout << matriks[1].arr[i][j] + matriks[2].arr[i][j] << " ";
                }
                cout << endl;
            }
    }
    else
    {
        cout<<"matriks tidak dapat dijumlahkan"<<endl;
    }

}

void pengurangan()
{
    int baris1,kolom1,baris2,kolom2;
    input(baris1,kolom1,1);
    input(baris2,kolom2,2);
    if (baris1 == baris2 && kolom1 == kolom2)
    {
        cout<<"matriks 1 = "<<endl;
        tampil(baris1,kolom1,1);
        cout<<"matriks 2 = "<<endl;
        tampil(baris2,kolom2,2);
        cout<<"hasil pengurangan matriks = "<<endl;
        for (int i = 0; i < baris1; i++)
            {
                for (int j = 0; j < kolom1; j++)
                {
                    cout << matriks[1].arr[i][j] - matriks[2].arr[i][j] << " ";
                }
                cout << endl;
            }
    }
    else
    {
        cout<<"matriks tidak dapat dikurangkan"<<endl;
    }

}

void transpose()
{
    int baris,kolom;
    input(baris,kolom,1);
    cout<<"matriks = "<<endl;
    tampil(baris,kolom,1);
    cout<<"hasil transpose matriks = "<<endl;
    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            cout << matriks[1].arr[j][i] << " ";
        }
        cout << endl;
    }
}

void perkalianMatriks()
{
    int baris1,kolom1,baris2,kolom2;
    input(baris1,kolom1,1);
    cout<<"matriks 1 = "<<endl;
    tampil(baris1,kolom1,1);
    input(baris2,kolom2,2);
    cout<<"matriks 2 = "<<endl;
    tampil(baris2,kolom2,2);
    cout<<"hasil perkalian matriks = "<<endl;
    if (kolom2 == baris1)
    {
        for (int i = 0; i < baris2; i++)
        {
            for (int j = 0; j < kolom1; j++)
            {
                int hasil = 0;
                for (int k = 0; k < baris1; k++)
                {
                    hasil = hasil + (matriks[1].arr[i][k] * matriks[2].arr[k][j]);
                }
                //satu kolom
                cout << hasil << " ";
            }
            //kolom berikutnya
            cout << endl;
        }
    }
    else
    {
        cout<<"matriks tidak dapat dikalikan"<<endl;
    }
}

void perkalianSkalar()
{
    int baris,kolom,skalar;
    input(baris,kolom,1);
    cout<<"matriks = "<<endl;
    tampil(baris,kolom,1);
    cout<<"masukkan nilai skalar = ";
    cin>>skalar;
    cout<<"hasil perkalian skalar = "<<endl;
    for (int i = 0; i < baris; i++)
        {
            for (int j = 0; j < kolom; j++)
            {
                cout << matriks[1].arr[i][j] * skalar << " ";
            }
            cout << endl;
        }

}

int main()
{
    int pilihan;
    do
    {
        system("cls");
        cout<<"1. penjumlahan"<<endl;
        cout<<"2. pengurangan"<<endl;
        cout<<"3. perkalian antar matriks"<<endl;
        cout<<"4. perkalian matriks dengan skalar"<<endl;
        cout<<"5. transpose"<<endl;
        cout<<"6. keluar"<<endl;
        cout<<"masukkan pilihan = ";
        cin>>pilihan;
        if (pilihan == 1)
        {
            penjumlahan();
            getch();
        }
        else if (pilihan == 2)
        {
            pengurangan();
            getch();
        }
        else if (pilihan == 3)
        {
            perkalianMatriks();
            getch();
        }
        else if (pilihan == 4)
        {
            perkalianSkalar();
            getch();
        }
        else if (pilihan == 5)
        {
            transpose();
            getch();
        }
        else if (pilihan == 6)
        {
            return 0;
        }
        else
        {
            cout<<"pilihan tidak tersedia"<<endl;
            getch();
        }
    }while (pilihan!=6);
    return 0;
}
