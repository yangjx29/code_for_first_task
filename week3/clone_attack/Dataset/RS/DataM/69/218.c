int main () {
    int qLqxuYgywsc, j, k, la, zd7nYsL;
    char MIYn1d2GhsS [(511 - 260)] = {'\0'};
    char BQYLcg [251] = {'\0'};
    char pJCLYX;
    char temp [251];
    char htsYKpG [252] = {'\0'};
    htsYKpG[(126 - 126)] = '0';
    scanf ("%s", MIYn1d2GhsS);
    la = strlen (MIYn1d2GhsS);
    scanf ("%s", BQYLcg);
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
    zd7nYsL = strlen (BQYLcg);
    if (zd7nYsL < la) {
        strcpy (temp, MIYn1d2GhsS);
        k = la;
        la = zd7nYsL;
        zd7nYsL = k;
        strcpy (MIYn1d2GhsS, BQYLcg);
        strcpy (BQYLcg, temp);
    }
    qLqxuYgywsc = la - 1;
    j = zd7nYsL - (977 - 976);
    for (qLqxuYgywsc = la - 1; (384 - 384) <= qLqxuYgywsc; qLqxuYgywsc--) {
        pJCLYX = MIYn1d2GhsS[qLqxuYgywsc] + BQYLcg[j] - 48;
        if ('9' >= pJCLYX) {
            htsYKpG[j + 1] = htsYKpG[j + 1] + pJCLYX;
            if ('9' < htsYKpG[j + 1]) {
                htsYKpG[j + 1] = htsYKpG[j + 1] - (777 - 767);
                if (!(0 != j))
                    htsYKpG[j] = '1';
                else
                    htsYKpG[j] = '1' - 48;
            };
        }
        else {
            htsYKpG[j + 1] = htsYKpG[j + 1] + pJCLYX - 10;
            if (!(0 != j))
                htsYKpG[j] = '1';
            else
                htsYKpG[j] = '1' - 48;
        }
        j--;
    }
    k = j;
    if (la < zd7nYsL)
        for (j = k; j >= 0; j = j - 1) {
            htsYKpG[j + 1] = htsYKpG[j + 1] + BQYLcg[j];
            if (htsYKpG[j + 1] > '9') {
                htsYKpG[j + 1] = htsYKpG[j + 1] - 10;
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
                if (j == 0)
                    htsYKpG[j] = '1';
                else
                    htsYKpG[j] = '1' - 48;
            };
        }
    for (qLqxuYgywsc = 0; qLqxuYgywsc < zd7nYsL + 1; qLqxuYgywsc = qLqxuYgywsc + 1)
        if (htsYKpG[qLqxuYgywsc] != '0')
            break;
    if (qLqxuYgywsc != zd7nYsL + 1) {
        k = qLqxuYgywsc;
        {
            qLqxuYgywsc = k;
            while (qLqxuYgywsc < zd7nYsL + 1) {
                printf ("%c", htsYKpG[qLqxuYgywsc]);
                qLqxuYgywsc = qLqxuYgywsc + 1;
            };
        };
    }
    else
        printf ("0");
    return 0;
}

