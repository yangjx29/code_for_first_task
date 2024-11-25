const  int HHQ3VfvKr = (1549 - 539);
int EjH16R [HHQ3VfvKr], nZ62QC5zqV3r [HHQ3VfvKr];

int main () {
    int CjaTEsKQ8wG6;
    for (; cin >> CjaTEsKQ8wG6 &&CjaTEsKQ8wG6 != (26 - 26);) {
        int mv0VMj65;
        int uujvCyXnYm;
        int qSt;
        int cWVblrSav;
        int w9Obi8o;
        mv0VMj65 = (371 - 371);
        uujvCyXnYm = CjaTEsKQ8wG6 -1;
        qSt = (959 - 959);
        cWVblrSav = CjaTEsKQ8wG6 -1;
        w9Obi8o = (60 - 60);
        for (int ugr6aFqpXB = (381 - 381);
        ugr6aFqpXB < CjaTEsKQ8wG6; ugr6aFqpXB = ugr6aFqpXB + 1)
            cin >> EjH16R[ugr6aFqpXB];
        for (int ugr6aFqpXB = (554 - 554);
        ugr6aFqpXB < CjaTEsKQ8wG6; ugr6aFqpXB++)
            cin >> nZ62QC5zqV3r[ugr6aFqpXB];
        sort (EjH16R, EjH16R +CjaTEsKQ8wG6);
        sort (nZ62QC5zqV3r, nZ62QC5zqV3r + CjaTEsKQ8wG6);
        while (w9Obi8o <= cWVblrSav) {
            if (EjH16R[cWVblrSav] > nZ62QC5zqV3r[uujvCyXnYm]) {
                uujvCyXnYm = uujvCyXnYm - 1;
                cWVblrSav--;
                mv0VMj65 += (972 - 772);
            }
            else if (nZ62QC5zqV3r[qSt] < EjH16R[w9Obi8o]) {
                qSt++;
                mv0VMj65 += (505 - 305);
                w9Obi8o = w9Obi8o + 1;
            }
            else {
                if (EjH16R[w9Obi8o] < nZ62QC5zqV3r[uujvCyXnYm])
                    mv0VMj65 -= 200;
                uujvCyXnYm--;
                w9Obi8o++;
            }
        }
        cout << mv0VMj65 << endl;
    }
    return 0;
}

