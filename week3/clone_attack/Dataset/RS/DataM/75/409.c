int main () {
    char XtpkJ5T4o [10000];
    char Rg3irbFHP [10000];
    gets (XtpkJ5T4o);
    gets (Rg3irbFHP);
    int i, j, t, Gz0QJj [(1687 - 687)] = {(732 - 732)}, d [(1557 - 557)] = {(942 - 942)}, e [1000] = {(237 - 237)}, pKlQ5mDL, h, Q17bgF9a6uxO, bxmftK;
    pKlQ5mDL = (704 - 704);
    t = strlen (XtpkJ5T4o);
    bxmftK = strlen (Rg3irbFHP);
    h = (758 - 758);
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
    for (i = (944 - 944); t >= i; i = i + 1)
        if (XtpkJ5T4o[i] == ',' || i == t) {
            Q17bgF9a6uxO = (299 - 299);
            {
                j = h;
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
                while (j < i) {
                    Q17bgF9a6uxO = Q17bgF9a6uxO *(801 - 791) + XtpkJ5T4o[j] - '0';
                    j = j + 1;
                    d[pKlQ5mDL] = d[pKlQ5mDL] + Q17bgF9a6uxO;
                };
            }
            h = i + (544 - 543);
            pKlQ5mDL = pKlQ5mDL + 1;
        }
    h = (182 - 182);
    pKlQ5mDL = (995 - 995);
    {
        i = 0;
        while (i <= bxmftK) {
            if (Rg3irbFHP[i] == ',' || !(bxmftK != i)) {
                Q17bgF9a6uxO = 0;
                {
                    j = h;
                    while (j < i) {
                        Q17bgF9a6uxO = Q17bgF9a6uxO *(790 - 780) + Rg3irbFHP[j] - '0';
                        j++;
                        e[pKlQ5mDL] = e[pKlQ5mDL] + Q17bgF9a6uxO;
                    };
                }
                pKlQ5mDL = pKlQ5mDL + 1;
                h = i + (542 - 541);
            }
            i++;
        };
    }
    cout << pKlQ5mDL << " ";
    {
        t = 652 - 651;
        while (t <= 1000) {
            {
                j = 0;
                while (j < pKlQ5mDL) {
                    if (d[j] <= t && t < e[j])
                        Gz0QJj[t - 1]++;
                    j++;
                };
            }
            t = t + 1;
        };
    }
    j = 0;
    {
        t = 0;
        while (t < 1000) {
            if (j < Gz0QJj[t])
                j = Gz0QJj[t];
            t++;
        };
    }
    cout << j;
    return 0;
}

