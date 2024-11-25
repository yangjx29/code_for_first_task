int compare (const  void  *xCqhSW7QL, const  void  *BI9y7c) {
    return (*(int*) BI9y7c -*(int*) xCqhSW7QL);
}

int main () {
    int c [(937 - 907)];
    int BI9y7c [(259 - 229)] = {(726 - 725)};
    int xCqhSW7QL [(441 - 411)] = {(114 - 114)};
    int IgYdqAHNR4;
    int ePRlnrN3;
    int i;
    int n974bGpzQt;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    IgYdqAHNR4 = (235 - 235);
    int t;
    getchar ();
    getchar ();
    getchar ();
    scanf ("%d", &ePRlnrN3);
    for (i = (696 - 696); ePRlnrN3 > i; i++) {
        scanf ("%d", &xCqhSW7QL[i]);
    }
    for (i = (400 - 399); ePRlnrN3 > i; i++) {
        t = (869 - 869);
        for (n974bGpzQt = (453 - 453); n974bGpzQt < (937 - 907); n974bGpzQt = n974bGpzQt + 1) {
            c[n974bGpzQt] = (906 - 906);
        }
        for (n974bGpzQt = i - (669 - 668); (719 - 719) <= n974bGpzQt; n974bGpzQt--) {
            if (xCqhSW7QL[i] <= xCqhSW7QL[n974bGpzQt]) {
                c[t] = BI9y7c[n974bGpzQt];
                t++;
            };
        }
        qsort (c, t, sizeof (int), compare);
        BI9y7c[i] = c[(480 - 480)] + (228 - 227);
    }
    for (i = (308 - 308); i < ePRlnrN3; i++) {
        if (IgYdqAHNR4 < BI9y7c[i])
            IgYdqAHNR4 = BI9y7c[i];
    }
    printf ("%d\n", IgYdqAHNR4);
}

