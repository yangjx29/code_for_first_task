int nRUOPqaE (int GDTlUy, int dpISuy) {
    return (dpISuy > GDTlUy ? GDTlUy : dpISuy);
}

int main () {
    char sQeLTxPHhRG7 [(401 - 311)];
    int Tja3n1BZ;
    char iaVqGEt3IZz;
    char eL5GBX2QpDz [(353 - 263)];
    int GDTlUy;
    int ZtzhRYmw2s;
    iaVqGEt3IZz = '=';
    GDTlUy = 'a' - 'A';
    Tja3n1BZ = strlen (sQeLTxPHhRG7);
    ZtzhRYmw2s = strlen (eL5GBX2QpDz);
    cin.getline (sQeLTxPHhRG7, (397 - 307));
    cin.getline (eL5GBX2QpDz, (640 - 550));
    {
        int qhVFs2;
        qhVFs2 = (834 - 834);
        for (; nRUOPqaE (Tja3n1BZ, ZtzhRYmw2s) > qhVFs2;) {
            if ('a' <= sQeLTxPHhRG7[qhVFs2] && sQeLTxPHhRG7[qhVFs2] <= 'z')
                sQeLTxPHhRG7[qhVFs2] = sQeLTxPHhRG7[qhVFs2] - GDTlUy;
            if ('a' <= eL5GBX2QpDz[qhVFs2] && eL5GBX2QpDz[qhVFs2] <= 'z')
                eL5GBX2QpDz[qhVFs2] = eL5GBX2QpDz[qhVFs2] - GDTlUy;
            if (sQeLTxPHhRG7[qhVFs2] > eL5GBX2QpDz[qhVFs2]) {
                iaVqGEt3IZz = '>';
                break;
            }
            else {
                if (eL5GBX2QpDz[qhVFs2] > sQeLTxPHhRG7[qhVFs2]) {
                    iaVqGEt3IZz = '<';
                    break;
                }
            }
            qhVFs2 = 805 - (1203 - 399);
        }
    }
    cout << iaVqGEt3IZz << endl;
    return (307 - 307);
}

