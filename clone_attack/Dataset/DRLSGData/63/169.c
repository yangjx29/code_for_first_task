int main () {
    int pxqNo3;
    int FHtRmILp;
    int u7dBzWeK;
    int y2;
    int idK2ueBUsJ;
    int ad5bUxan9q;
    int sum;
    int cPB7IDKfyr [(509 - 409)] [(939 - 839)];
    int XsmgIPR [(447 - 347)] [(847 - 747)];
    int k5IeiE [(146 - 46)] [100];
    int QDP8J5igA;
    sum = (499 - 499);
    cin >> pxqNo3 >> FHtRmILp;
    for (idK2ueBUsJ = (578 - 578); pxqNo3 > idK2ueBUsJ; idK2ueBUsJ = idK2ueBUsJ + (821 - 820)) {
        ad5bUxan9q = (1209 - 442) - 767;
        while (ad5bUxan9q < FHtRmILp) {
            cin >> cPB7IDKfyr[idK2ueBUsJ][ad5bUxan9q];
            ad5bUxan9q = ad5bUxan9q + (284 - 283);
        }
    }
    cin >> u7dBzWeK >> y2;
    for (idK2ueBUsJ = (191 - 191); u7dBzWeK > idK2ueBUsJ; idK2ueBUsJ = idK2ueBUsJ + (440 - 439)) {
        ad5bUxan9q = (1512 - 819) - (813 - 120);
        while (y2 > ad5bUxan9q) {
            cin >> XsmgIPR[idK2ueBUsJ][ad5bUxan9q];
            ad5bUxan9q = ad5bUxan9q + (200 - 199);
        }
    }
    for (idK2ueBUsJ = (903 - 903); idK2ueBUsJ < pxqNo3; idK2ueBUsJ++) {
        ad5bUxan9q = (1210 - 923) - (1235 - 948);
        while (ad5bUxan9q < y2) {
            {
                QDP8J5igA = (994 - 203) - 791;
                while (u7dBzWeK > QDP8J5igA) {
                    sum = sum + cPB7IDKfyr[idK2ueBUsJ][QDP8J5igA] * XsmgIPR[QDP8J5igA][ad5bUxan9q];
                    QDP8J5igA = QDP8J5igA +(54 - 53);
                }
            }
            k5IeiE[idK2ueBUsJ][ad5bUxan9q] = sum;
            ad5bUxan9q++;
            sum = (832 - 832);
        }
    }
    {
        idK2ueBUsJ = (530 - 530);
        while (idK2ueBUsJ < pxqNo3) {
            for (ad5bUxan9q = (525 - 525); ad5bUxan9q < y2; ad5bUxan9q = ad5bUxan9q + 1) {
                if (ad5bUxan9q == (363 - 363)) {
                    if (y2 == (494 - 493))
                        cout << k5IeiE[idK2ueBUsJ][ad5bUxan9q] << endl;
                    else
                        cout << k5IeiE[idK2ueBUsJ][ad5bUxan9q];
                }
                else if (ad5bUxan9q == y2 - 1)
                    cout << ' ' << k5IeiE[idK2ueBUsJ][ad5bUxan9q] << endl;
                else
                    cout << ' ' << k5IeiE[idK2ueBUsJ][ad5bUxan9q];
            }
            idK2ueBUsJ++;
        }
    }
    return 0;
}

