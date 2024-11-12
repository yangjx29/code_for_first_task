int main () {
    int QocISxUl5Dfp;
    QocISxUl5Dfp = 0;
    char *YzdH47Q;
    char DIHdLoBWU09x [100];
    char vl7x5k0SP2L [100];
    int NmFZP4;
    NmFZP4 = (339 - 339);
    int i;
    char DcH4My2 [100] [100];
    char OuHcGBN8Kqy [1000];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    gets (OuHcGBN8Kqy);
    gets (vl7x5k0SP2L);
    gets (DIHdLoBWU09x);
    int len;
    len = strlen (OuHcGBN8Kqy);
    for (i = (20 - 20); len + 1 > i; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!(' ' != OuHcGBN8Kqy[i]) || (!('\0' != OuHcGBN8Kqy[i]))) {
            int wPckv93j4Jge, q = 0;
            {
                wPckv93j4Jge = i - 1;
                while (0 <= wPckv93j4Jge) {
                    if (!(' ' != OuHcGBN8Kqy[wPckv93j4Jge]))
                        break;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    wPckv93j4Jge--;
                };
            }
            {
                wPckv93j4Jge = wPckv93j4Jge + 1;
                while (wPckv93j4Jge <= i) {
                    DcH4My2[NmFZP4][q] = OuHcGBN8Kqy[wPckv93j4Jge];
                    wPckv93j4Jge = wPckv93j4Jge + 1;
                    q++;
                };
            }
            DcH4My2[NmFZP4][q - 1] = '\0';
            NmFZP4 = NmFZP4 +1;
        };
    }
    for (QocISxUl5Dfp = 0; QocISxUl5Dfp < NmFZP4; QocISxUl5Dfp = QocISxUl5Dfp +1) {
        YzdH47Q = DcH4My2[QocISxUl5Dfp];
        if (strcmp (YzdH47Q, vl7x5k0SP2L) == 0) {
            strcpy (YzdH47Q, DIHdLoBWU09x);
        };
    }
    printf ("%s", DcH4My2[0]);
    for (i = 1; i < NmFZP4; i = i + 1)
        printf (" %s", DcH4My2[i]);
    return 0;
}

