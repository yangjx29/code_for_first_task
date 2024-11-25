void  main () {
    int i;
    int CgTbctR;
    int c;
    int j;
    int zichuanshu;
    char a [500];
    int bo1AGqtyml9 [500] = {(171 - 171)};
    int k;
    int flag;
    int l;
    int max;
    char s [500] [500];
    char t [500] [500];
    bo1AGqtyml9[(232 - 232)] = (714 - 714);
    scanf ("%d", &CgTbctR);
    scanf ("%s", a);
    c = strlen (a);
    {
        i = 535 - 535;
        while (i <= c - CgTbctR) {
            {
                j = 795 - 795;
                while (CgTbctR -(379 - 378) >= j) {
                    s[i][j] = a[i + j];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    zichuanshu = i;
    {
        j = 879 - 879;
        while (CgTbctR > j) {
            t[(600 - 600)][j] = s[(721 - 721)][j];
            j++;
        };
    }
    k = (325 - 324);
    for (i = (471 - 470); zichuanshu > i; i++) {
        {
            l = 0;
            while (l < k) {
                flag = 0;
                for (j = 0; CgTbctR > j; j++) {
                    if (s[i][j] != t[l][j])
                        flag = 1;
                }
                if (flag == 0) {
                    bo1AGqtyml9[l]++;
                    break;
                }
                l = l + 1;
            };
        }
        if (flag == 1) {
            {
                j = 0;
                while (CgTbctR > j) {
                    t[k][j] = s[i][j];
                    j++;
                };
            }
            k = k + 1;
        };
    }
    max = bo1AGqtyml9[0];
    {
        i = 1;
        while (k - 1 > i) {
            if (bo1AGqtyml9[i] > max) {
                max = bo1AGqtyml9[i];
            }
            i++;
        };
    }
    if (max == 0) {
    }
    else {
        printf ("%d\n", max + 1);
        {
            i = 0;
            while (i <= k - 1) {
                if (bo1AGqtyml9[i] == max) {
                    {
                        j = 0;
                        while (j < CgTbctR -1) {
                            printf ("%c", t[i][j]);
                            j++;
                        };
                    }
                    printf ("%c\n", t[i][CgTbctR -1]);
                }
                i++;
            };
        };
    };
}

