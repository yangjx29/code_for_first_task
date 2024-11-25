int main () {
    int a [300] = {(916 - 916)}, i = 1, j = (890 - 890), n, k;
    char CJZOB2 [1000] = {'\0'};
    gets (CJZOB2);
    n = strlen (CJZOB2);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > i) {
            if (!(',' == CJZOB2[i]))
                a[j] = a[j] * 10 + CJZOB2[i] - 48;
            else
                j++;
            i++;
        };
    }
    n = j + 1;
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
    for (i = 0; n > i; i++) {
        j = 0;
        while (n - i - 1 > j) {
            if (a[j + 1] < a[j]) {
                k = a[j];
                a[j] = a[j + 1];
                a[j + 1] = k;
            }
            j++;
        };
    }
    k = 0;
    for (i = n - 1; i >= 0; i--)
        if (a[i] != a[n - 1]) {
            k++;
            printf ("%d", a[i]);
            break;
        }
    if (k == 0)
        printf ("No");
    return 0;
}

