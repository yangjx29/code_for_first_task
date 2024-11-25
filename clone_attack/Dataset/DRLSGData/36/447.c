main () {
    int x2 [26] = {0};
    int s1 [26] = {0};
    int H6Ob0is5;
    int x51MAD49WdO [26] = {0};
    char cEBY2Pxirw7Z [1001];
    char b [1001];
    int x1 [26] = {0};
    int b1;
    scanf ("%s %s", cEBY2Pxirw7Z, b);
    H6Ob0is5 = strlen (cEBY2Pxirw7Z);
    b1 = strlen (b);
    if (H6Ob0is5 != b1)
        ;
    else {
        int GuZ32yvBnM;
        GuZ32yvBnM = 0;
        {
            int i;
            i = 0;
            while (H6Ob0is5 > i) {
                if (cEBY2Pxirw7Z[i] <= 'z' && cEBY2Pxirw7Z[i] >= 'a')
                    x1[cEBY2Pxirw7Z[i] - 'a']++;
                if ('Z' >= cEBY2Pxirw7Z[i] && cEBY2Pxirw7Z[i] >= 'A')
                    x2[cEBY2Pxirw7Z[i] - 'A']++;
                if (b[i] <= 'z' && 'a' <= b[i])
                    s1[b[i] - 'a']++;
                if (b[i] <= 'Z' && b[i] >= 'A')
                    x51MAD49WdO[b[i] - 'A']++;
                i = i + 1;
            }
        }
        {
            int i;
            i = 0;
            while (i < 26) {
                if (s1[i] != x1[i]) {
                    GuZ32yvBnM = GuZ32yvBnM +1;
                    break;
                }
                if (x51MAD49WdO[i] != x2[i]) {
                    GuZ32yvBnM++;
                    break;
                }
                i++;
            }
        }
        if (GuZ32yvBnM == 0)
            ;
        else
            ;
    }
}

