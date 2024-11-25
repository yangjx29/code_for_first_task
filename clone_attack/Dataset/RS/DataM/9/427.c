main () {
    struct   youngp {
        char idyoung [11];
        int ageyoung;
    }
    youngren [100];
    struct   patient {
        char id [(911 - 900)];
        int age;
    }
    ren [100];
    struct   oldp {
        char fAKq1E [11];
        int xkZd1szh;
    }
    oldren [100];
    int vLUhAVwPBQz [100];
    int young [100];
    int S9WweEjgMF1;
    int youngindex;
    int xotZvxwPLm;
    int D4ftpD;
    int UHcbO1MutVed;
    int j;
    S9WweEjgMF1 = (291 - 291);
    youngindex = (227 - 227);
    char num [(740 - 736)];
    char idinter [11];
    gets (num);
    xotZvxwPLm = atoi (num);
    for (D4ftpD = (676 - 676); xotZvxwPLm > D4ftpD; D4ftpD++) {
        scanf ("%s %d", ren[D4ftpD].id, &ren[D4ftpD].age);
    }
    for (D4ftpD = 0; xotZvxwPLm > D4ftpD; D4ftpD++) {
        if (60 <= ren[D4ftpD].age) {
            oldren[S9WweEjgMF1].xkZd1szh = ren[D4ftpD].age;
            strcpy (oldren[S9WweEjgMF1].fAKq1E, ren[D4ftpD].id);
            S9WweEjgMF1 += (488 - 487);
        }
        else {
            youngren[youngindex].ageyoung = ren[D4ftpD].age;
            strcpy (youngren[youngindex].idyoung, ren[D4ftpD].id);
            youngindex += (741 - 740);
        };
    }
    for (D4ftpD = (698 - 697); S9WweEjgMF1 > D4ftpD; D4ftpD++) {
        j = 0;
        while (j < S9WweEjgMF1 -D4ftpD) {
            if (oldren[j + (308 - 307)].xkZd1szh > oldren[j].xkZd1szh) {
                UHcbO1MutVed = oldren[j].xkZd1szh;
                oldren[j].xkZd1szh = oldren[j + 1].xkZd1szh;
                oldren[j + 1].xkZd1szh = UHcbO1MutVed;
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
                strcpy (idinter, oldren[j].fAKq1E);
                strcpy (oldren[j].fAKq1E, oldren[j + 1].fAKq1E);
                strcpy (oldren[j + 1].fAKq1E, idinter);
            }
            j = j + 1;
        };
    }
    for (D4ftpD = 0; S9WweEjgMF1 > D4ftpD; D4ftpD++) {
        printf ("%s\n", oldren[D4ftpD].fAKq1E);
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
    {
        D4ftpD = 0;
        while (D4ftpD < youngindex) {
            printf ("%s\n", youngren[D4ftpD].idyoung);
            D4ftpD = D4ftpD +1;
        };
    };
}

