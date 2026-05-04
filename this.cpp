#include <iostream>
using namespace std;

class buku {
    string judul;

    public:
        string setget(string judul) {
            this->judul = judul; // nilai parameter 'judul' untuk member variabel 'judul'
              // return variabel judul
        }
};

int main()
{
    buku bukunya;
    cout << bukunya.setget("Matematika"); // memanggil fungsi setget dengan input "Matematika"
    return 0;
}