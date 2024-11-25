int main () {
    char a1 [252];
    char b1 [252];
    int a [252], b [252], sum [252];
    int i;
    int j;
    int lena;
    int lenb;
    scanf ("%s", a1);
    scanf ("%s", b1);
    {
        i = 0;
        while (252 > i) {
            a[i] = 0;
            b[i] = 0;
            sum[i] = 0;
            i++;
        };
    }
    lena = strlen (a1);
    lenb = strlen (b1);
    {
        i = 0;
        while (lena > i) {
            a[i] = a1[lena - 1 - i] - '0';
            i++;
        };
    }
    for (i = 0; i < lenb; i++) {
        b[i] = b1[lenb - 1 - i] - '0';
    }
    {
        i = 0;
        while (i < 252) {
            sum[i] = sum[i] + a[i] + b[i];
            if (sum[i] > 9) {
                sum[i] = sum[i] - 10;
                sum[i + 1] = sum[i + 1] + 1;
            }
            i++;
        };
    }
    {
        i = 251;
        while (0 <= i) {
            if (sum[i] != 0)
                break;
            i--;
        };
    }
    if (i < 0)
        ;
    else {
        j = i;
        while (j >= 0) {
            printf ("%d", sum[j]);
            j--;
        };
    }
    return 0;
}

