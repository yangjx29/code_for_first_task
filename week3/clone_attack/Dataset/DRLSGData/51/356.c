int main () {
    void  chuan (char (*p) [5], char *q, int n);
    char c [300], a [500] [5] = {'\0'}, (*p) [5], *q;
    int n, s, i, j, k;
    int max [500] = {0}, da = 0;
    p = a;
    scanf ("%d", &n);
    scanf ("%s", c);
    q = c;
    for (s = 0; *q != '\0'; q = q + 1)
        s = s + 1;
    for (i = 0, q = c; i < s - n + 1; i = i + 1, q++, p++) {
        chuan (p, q, n);
    }
    k = s - n + 1;
    {
        i = 0;
        while (i < k) {
            for (j = i + 1; j < k; j = j + 1) {
                if (strcmp (a[i], a[j]) == 0)
                    max[i]++;
            }
            i = i + 1;
        }
    }
    {
        i = 0;
        while (i < k) {
            if (max[i] > da)
                da = max[i];
            i++;
        }
    }
    if (da == 0)
        ;
    else {
        printf ("%d\n", da + 1);
        {
            i = 0;
            while (i < k) {
                if (da == max[i])
                    printf ("%s\n", a[i]);
                i++;
            }
        }
    }
    return 0;
}

void  chuan (char (*p) [5], char *q, int n) {
    int i = 0;
    for (i = 0; i < n; i++) {
        *(*p + i) = *(q + i);
    }
}

