int wiwcgGbMR (char *SJpesI1flg2, int ijyb6XeAt0sD) {
    char *p1 = NULL;
    char *PbxXaBoOM = NULL;
    int TS3E0nkBuXz;
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
    TS3E0nkBuXz = (611 - 611);
    {
        int i;
        i = 0;
        while (ijyb6XeAt0sD > i) {
            if (!('$' != SJpesI1flg2[i])) {
                TS3E0nkBuXz = TS3E0nkBuXz +1;
                p1 = SJpesI1flg2 +i;
            }
            else {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (!('?' != SJpesI1flg2[i])) {
                    PbxXaBoOM = SJpesI1flg2 +i;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            float n = 0.0;
                            if (n > 10)
                                return;
                            else
                                n = 0;
                        }
                    }
                    if (!(0 == TS3E0nkBuXz)) {
                        *p1 = ' ';
                        *PbxXaBoOM = ' ';
                        return wiwcgGbMR (SJpesI1flg2, ijyb6XeAt0sD);
                    };
                };
            }
            i = i + 1;
        };
    }
    return 0;
}

int main (void ) {
    char SJpesI1flg2 [101];
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
    while (~scanf ("%s", SJpesI1flg2)) {
        puts (SJpesI1flg2);
        int ijyb6XeAt0sD = strlen (SJpesI1flg2);
        puts (SJpesI1flg2);
        {
            int i = 0;
            while (ijyb6XeAt0sD > i) {
                if (SJpesI1flg2[i] != '(' && SJpesI1flg2[i] != ')')
                    SJpesI1flg2[i] = ' ';
                else {
                    if (SJpesI1flg2[i] == '(')
                        SJpesI1flg2[i] = '$';
                    else {
                        if (SJpesI1flg2[i] == ')')
                            SJpesI1flg2[i] = '?';
                    };
                }
                i++;
            };
        }
        wiwcgGbMR (SJpesI1flg2, ijyb6XeAt0sD);
    }
    return 0;
}

