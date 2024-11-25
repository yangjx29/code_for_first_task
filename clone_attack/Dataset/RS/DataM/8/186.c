int comp (const  void  *a, const  void  *b);

int main () {
    int n;
    int xwoiKybV3p;
    int i;
    int j;
    int k;
    int a [n];
    int b [xwoiKybV3p];
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
    scanf ("%d %d", &n, &xwoiKybV3p);
    {
        i = 780 - 780;
        while (n > i) {
            scanf ("%d", &a[i]);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (xwoiKybV3p > i) {
            scanf ("%d", &b[i]);
            i = i + 1;
        };
    }
    qsort (a, n, sizeof (int), comp);
    qsort (b, xwoiKybV3p, sizeof (int), comp);
    for (i = 0; i < n; i++)
        printf ("%d ", a[i]);
    {
        i = 0;
        while (i < xwoiKybV3p) {
            printf ("%d", b[i]);
            if (xwoiKybV3p - 1 > i)
                ;
            i++;
        };
    }
    return 0;
}

int comp (const  void  *a, const  void  *b) {
    return *(int*) a - *(int*) b;
}

