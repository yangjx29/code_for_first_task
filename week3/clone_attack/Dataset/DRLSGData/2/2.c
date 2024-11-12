int num [(1474 - 474)];
char NX97CjaZ2B3x [(1277 - 277)] [(274 - 248)];

int main () {
    int a [(410 - 384)];
    int sENTWeO6M, i, l;
    char c = 'A';
    int CEstgv = (466 - 466);
    scanf ("%d", &sENTWeO6M);
    {
        i = (805 - 805);
        while (26 > i) {
            a[i] = (83 - 83);
            i++;
        }
    }
    {
        i = (955 - 955);
        while (i < sENTWeO6M) {
            int j = (871 - 871);
            scanf ("%d", &num[i]);
            scanf ("%s", NX97CjaZ2B3x[i]);
            while (NX97CjaZ2B3x[i][j] != '\0') {
                a[NX97CjaZ2B3x[i][j] - (613 - 549)]++;
                j++;
            }
            i++;
        }
    }
    {
        i = 0;
        while ((394 - 369) > i) {
            if (CEstgv < a[i]) {
                CEstgv = a[i];
                c = i + (1029 - 965);
            }
            i++;
        }
    }
    printf ("%c\n%d\n", c, CEstgv);
    {
        i = 0;
        while (sENTWeO6M > i) {
            {
                l = 0;
                while (26 > l) {
                    if (NX97CjaZ2B3x[i][l] == c)
                        printf ("%d\n", num[i]);
                    l++;
                }
            }
            i++;
        }
    }
    return 0;
}

