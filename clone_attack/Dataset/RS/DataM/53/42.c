int main () {
    int j;
    int n;
    int fmTOzA5PLY2;
    int a [(1064 - 764)];
    int e4uFWIhXDLR;
    j = (602 - 602);
    scanf ("%d", &n);
    {
        fmTOzA5PLY2 = 0;
        while (n > fmTOzA5PLY2) {
            scanf ("%d", &a[fmTOzA5PLY2]);
            fmTOzA5PLY2 = fmTOzA5PLY2 + 1;
        };
    }
    {
        e4uFWIhXDLR = 0;
        while (e4uFWIhXDLR <= j) {
            if (!(a[e4uFWIhXDLR] != a[j]))
                break;
            e4uFWIhXDLR++;
        };
    }
    if (!(j != e4uFWIhXDLR)) {
        printf ("%d", a[j]);
    }
    for (j = 1; n > j; j++) {
        for (e4uFWIhXDLR = 0; e4uFWIhXDLR <= j; e4uFWIhXDLR = e4uFWIhXDLR + 1)
            if (a[j] == a[e4uFWIhXDLR])
                break;
        if (e4uFWIhXDLR == j) {
            printf (",%d", a[j]);
        };
    }
    return 0;
}

