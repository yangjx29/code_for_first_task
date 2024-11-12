int main () {
    long  a [1000], xlE5Rm, j, w7zhgvax, n, s = 0, t, VjEivMynFR;
    scanf ("%d", &n);
    {
        xlE5Rm = 1;
        while (n >= xlE5Rm) {
            xlE5Rm = xlE5Rm + 1;
            scanf ("%ld", &w7zhgvax);
            if (w7zhgvax % 2) {
                s = s + 1;
                a[s] = w7zhgvax;
            };
        };
    }
    for (xlE5Rm = 1; s >= xlE5Rm; xlE5Rm++)
        for (j = 1; j <= s - xlE5Rm; j = j + 1)
            if (a[j] > a[j + 1]) {
                VjEivMynFR = a[j];
                a[j] = a[j + 1];
                a[j + 1] = VjEivMynFR;
            }
    printf ("%d", a[1]);
    for (xlE5Rm = 2; xlE5Rm <= s; xlE5Rm++)
        printf (",%d", a[xlE5Rm]);
    return 0;
}

