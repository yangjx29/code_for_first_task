int QobAel (int *, int *, int);

int main () {
    int n;
    int integer [300];
    int nW5HSZ;
    int *ugNovZzCnE;
    int i;
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
    scanf ("%d%d", &n, integer);
    n = n - 1;
    for (ugNovZzCnE = integer; n > 0; n--) {
        scanf ("%d", &nW5HSZ);
        if (QobAel (integer, ugNovZzCnE, nW5HSZ)) {
            ugNovZzCnE = ugNovZzCnE + 1;
            *ugNovZzCnE = nW5HSZ;
        };
    }
    {
        i = 0;
        while (integer + i < ugNovZzCnE) {
            printf ("%d,", *(integer + i));
            i = i + 1;
        };
    }
    printf ("%d\n", *ugNovZzCnE);
    return 0;
}

int QobAel (int *p1, int *p2, int nW5HSZ) {
    for (; p2 >= p1; p2 = p2 - 1) {
        if (*p2 == nW5HSZ)
            return 0;
    }
    return 1;
}

