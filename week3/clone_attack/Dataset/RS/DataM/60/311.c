int S (int a) {
    int c;
    int i;
    c = (617 - 617);
    {
        i = 2;
        while (i < a) {
            if (!(0 != a % i))
                c++;
            i = i + 1;
        };
    }
    if (!(0 != c))
        return 1;
    else
        return 0;
}

int main () {
    int n, i, j = 0, k = 0;
    int *s = (int *) malloc (sizeof (int) * n);
    free (s);
    scanf ("%d", &n);
    {
        i = 2;
        while (i <= n) {
            if (S (i)) {
                s[j] = i;
                j++;
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < j - 1) {
            if (s[i + 1] - s[i] == 2) {
                printf ("%d %d\n", s[i], s[i + 1]);
                k = k + 1;
            }
            i = i + 1;
        };
    }
    if (k == 0)
        printf ("empty");
    return 0;
}

