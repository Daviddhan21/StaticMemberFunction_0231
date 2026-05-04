#include <iostream>
using namespace std;

class buku {
    string judul;

    public:
        string setget(string judul) {
             // nilai parameter 'judul' untuk member variabel 'judul'
            return this->judul;  // return variabel judul
        }
};

int main()
{
    buku bukunya;
    cout << bukunya.setget("Matematika"); // memanggil fungsi setget dengan input "Matematika"
    return 0;
}