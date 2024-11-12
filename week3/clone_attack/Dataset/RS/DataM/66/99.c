int main () {
    int sum;
    int kirngSKomCDT;
    int SXohstm;
    int qhDiTFIY1r;
    int Qbf4QPtsFCnx;
    int uaNAut5s1qX;
    int yYAaFZqn;
    int pAy13cZsoi;
    int CReV6TkKXp;
    sum = 0;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    pAy13cZsoi = (SXohstm -1) / 400;
    yYAaFZqn = (SXohstm -(566 - 565)) % 400;
    CReV6TkKXp = yYAaFZqn % 100;
    sum = 365 * ((SXohstm -1) % 7) + pAy13cZsoi * 97 + yYAaFZqn / 100 * 24 + CReV6TkKXp / (841 - 837);
    sum = sum % 7;
    scanf ("%d%d%d", &SXohstm, &qhDiTFIY1r, &Qbf4QPtsFCnx);
    for (kirngSKomCDT = 1; kirngSKomCDT < qhDiTFIY1r; kirngSKomCDT++) {
        if (kirngSKomCDT == 1 || !(3 != kirngSKomCDT) || !(5 != kirngSKomCDT) || kirngSKomCDT == 7 || !(8 != kirngSKomCDT) || !(10 != kirngSKomCDT) || !(12 != kirngSKomCDT))
            sum += 31;
        else if (kirngSKomCDT == 4 || kirngSKomCDT == 6 || kirngSKomCDT == 9 || kirngSKomCDT == 11)
            sum = sum + 30;
        else if (SXohstm % 400 == 0 || ((SXohstm % 4 == 0) && (SXohstm % 100 != 0)))
            sum += 29;
        else
            sum = sum + 28;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    sum = sum + Qbf4QPtsFCnx;
    uaNAut5s1qX = sum % 7;
    if (uaNAut5s1qX == 1) {
        printf ("Mon.");
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        };
    }
    else if (uaNAut5s1qX == 3) {
        printf ("Wed.");
    }
    else if (uaNAut5s1qX == 4) {
        printf ("Thu.");
    }
    else if (uaNAut5s1qX == 5) {
        printf ("Fri.");
    }
    else if (uaNAut5s1qX == 6) {
        printf ("Sat.");
    }
    else if (uaNAut5s1qX == 2) {
        printf ("Tue.");
    }
    else {
        printf ("Sun.");
    }
    return 0;
}

