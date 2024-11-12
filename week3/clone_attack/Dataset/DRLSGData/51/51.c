int main () {
    int n;
    char c [10];
    char a [3000];
    gets (a);
    int max;
    int l;
    int j;
    int count;
    int b [2000] = {0};
    int i;
    int k;
    int m;
    scanf ("%d\n", &n);
    count = 0;
    m = strlen (a);
    {
        i = 0;
        while (i < m - n) {
            {
                j = 0;
                while (j < n) {
                    c[j] = a[i + j];
                    j++;
                }
            }
            b[i] = 1;
            {
                k = i + 1;
                while (k < m) {
                    {
                        j = 0;
                        while (j < n) {
                            if (!(a[k + j] != c[j])) {
                                if (j == n - 1)
                                    b[i]++;
                            }
                            else
                                break;
                            j++;
                        }
                    }
                    k++;
                }
            }
            i++;
        }
    }
    max = 0;
    {
        i = 0;
        for (; m > i;) {
            if (max < b[i])
                max = b[i];
            i++;
        }
    }
    if (max > 1) {
        printf ("%d\n", max);
        for (i = 0; i < m; i++) {
            if (b[i] == max) {
                j = 0;
                while (j < n) {
                    printf ("%c", a[i + j]);
                    j++;
                }
            }
        }
    }
    else
        ;
    getchar ();
    getchar ();
    getchar ();
}

