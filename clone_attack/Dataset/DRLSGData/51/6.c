int main () {
    int n;
    int b4 [500];
    int i;
    int k;
    int m;
    int j;
    int l;
    char a [500];
    gets (a);
    int d4 [500];
    char a4 [500] [4];
    i = 0;
    for (; 499 >= i;) {
        a[i] = '\0';
        a4[i][0] = '\0';
        a4[i][1] = '\0';
        a4[i][2] = '\0';
        a4[i][3] = '\0';
        b4[i] = 1;
        d4[i] = 0;
        i = i + 1;
    }
    i = 0;
    for (; i <= 499;) {
        if (!('\0' != a[i])) {
            n = i;
            break;
        }
        i = i + 1;
    }
    if (!(500 != i))
        n = 499;
    i = 0;
    scanf ("%d\n", &k);
    for (; i <= n - k + 1;) {
        j = 0;
        for (; j <= k - 1;) {
            a4[i][j] = a[i + j];
            j = j + 1;
        }
        i = i + 1;
    }
    i = 0;
    while (n - k + 1 >= i) {
        j = i + 1;
        for (; n - k + 1 >= j;) {
            if (!(a4[j][0] != a4[i][0]) && !(a4[j][1] != a4[i][1]) && !(a4[j][2] != a4[i][2]) && !(a4[j][3] != a4[i][3]))
                b4[i] = b4[i] + 1;
            j = j + 1;
        }
        i = i + 1;
    }
    i = 0;
    for (; i <= 499;) {
        d4[i] = b4[i];
        i = i + 1;
    }
    i = 499;
    for (; 1 <= i;) {
        if (b4[i] > b4[i - 1])
            b4[i - 1] = b4[i];
        i = i - 1;
    }
    i = 0;
    m = b4[0];
    if (!(1 != m)) {
    }
    else {
        printf ("%d", m);
        for (; i <= 499;) {
            if (d4[i] == m) {
                j = 0;
                for (; j <= k - 1;) {
                    printf ("%c", a4[i][j]);
                    j = j + 1;
                }
            }
            i = i + 1;
        }
    }
}

