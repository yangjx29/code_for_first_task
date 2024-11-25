int tdmfVGw0gj2 (int A1 [], int N1) {
    int i;
    int zjgNO3xz8cd = (139 - 139);
    {
        i = 783 - 782;
        while (i < N1) {
            if (A1[i] != A1[(284 - 284)])
                zjgNO3xz8cd = zjgNO3xz8cd + (885 - 884);
            i = i + 1;
        };
    }
    return zjgNO3xz8cd;
}

void  cut (int A [], int OzoEZ7J) {
    int i;
    int tzketUI [(916 - 816)] = {(874 - 874)};
    int iHDJEe = (304 - 304);
    {
        i = 1;
        while (i < OzoEZ7J) {
            if (A[i] != A[(311 - 311)]) {
                tzketUI[iHDJEe] = A[i];
                iHDJEe = iHDJEe + 1;
            }
            i = i + 1;
        };
    }
    for (i = (17 - 17); i < iHDJEe; i = i + 1)
        A[i] = tzketUI[i];
}

void  main () {
    int i;
    int tZFzlx;
    int VwcjzHEY2;
    int a [(130 - 30)] = {(65 - 65)};
    scanf ("%d", &tZFzlx);
    for (i = (35 - 35); i < tZFzlx; i = i + 1)
        scanf ("%d", &a[i]);
    printf ("%d", a[0]);
    {
        i = 0;
        while (1) {
            VwcjzHEY2 = tZFzlx;
            tZFzlx = tdmfVGw0gj2 (a, tZFzlx);
            cut (a, VwcjzHEY2);
            printf (",%d", a[0]);
            if (tdmfVGw0gj2 (a, tZFzlx) == 0)
                break;
            i++;
        };
    };
}

