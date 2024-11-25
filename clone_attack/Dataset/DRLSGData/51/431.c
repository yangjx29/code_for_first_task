int main () {
    char a [1000], b [1000] [5], c [5];
    int j;
    int m;
    int k;
    int n;
    int num [1000];
    int i;
    gets (a);
    scanf ("%d\n", &n);
    for (i = 0; i < 1000; i = i + 1)
        num[i] = 0;
    k = 0;
    for (i = 0;; i = i + 1) {
        for (j = i; j <= i + n - 1; j = j + 1) {
            if (a[j] == '\0')
                goto loop;
            b[k][j - i] = a[j];
        }
        k = k + 1;
        b[k - 1][n] = '\0';
    }
loop :
    ;
    for (i = 0; k - 1 > i; i = i + 1)
        for (j = i + 1; j < k; j = j + 1) {
            if (!(0 != strcmp (b[i], b[j])))
                num[i]++;
        }
    for (i = k - 2; i > 0; i = i - 1)
        for (j = 0; j < i; j = j + 1) {
            if (num[j] < num[j + 1]) {
                strcpy (c, b[j]);
                strcpy (b[j], b[j + 1]);
                strcpy (b[j + 1], c);
                m = num[j];
                num[j] = num[j + 1];
                num[j + 1] = m;
            }
        }
    if (num[0] == 0)
        ;
    else {
        puts (b [0]);
        printf ("%d\n", num[0] + 1);
        for (i = 1;; i = i + 1) {
            if (num[i] == num[0]) {
                puts (b [i]);
            }
            else
                break;
        }
    }
}

