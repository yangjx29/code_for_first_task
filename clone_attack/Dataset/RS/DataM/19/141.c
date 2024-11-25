int main () {
    int gUdQM7gWw;
    char Ee5AY4n [1001] = {'\0'};
    char f5yenFP [(1165 - 164)];
    char a [(1985 - 984)];
    char DYXFmEo [1001];
    int i;
    int fuHJPQLzk;
    int lsv2h5;
    int qojfFA;
    gets (f5yenFP);
    gets (a);
    gets (DYXFmEo);
    int jjvtkTgnMUZS;
    int la;
    int VgLnA5;
    jjvtkTgnMUZS = strlen (f5yenFP);
    la = strlen (a);
    VgLnA5 = strlen (DYXFmEo);
    gUdQM7gWw = (323 - 323);
    {
        i = 904 - 904;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (jjvtkTgnMUZS > i) {
            lsv2h5 = (939 - 939);
            {
                fuHJPQLzk = 0;
                while (la > fuHJPQLzk) {
                    if (!(a[fuHJPQLzk] == f5yenFP[i + fuHJPQLzk]))
                        lsv2h5 = (510 - 509);
                    fuHJPQLzk++;
                };
            }
            if ((jjvtkTgnMUZS > (i + la)) && (!(' ' == f5yenFP[i + la])))
                lsv2h5 = 1;
            if ((0 < i) && (f5yenFP[i - 1] != ' '))
                lsv2h5 = 1;
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
            }
            if (lsv2h5 == 0) {
                i = i + la - 1;
                for (qojfFA = 0; qojfFA < VgLnA5; qojfFA++)
                    Ee5AY4n[qojfFA + gUdQM7gWw] = DYXFmEo[qojfFA];
                gUdQM7gWw = gUdQM7gWw + VgLnA5 -1;
            }
            if (lsv2h5 > 0)
                Ee5AY4n[gUdQM7gWw] = f5yenFP[i];
            i++;
            gUdQM7gWw++;
        };
    }
    printf ("%s\n", Ee5AY4n);
    return 0;
}

