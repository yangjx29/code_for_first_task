int main () {
    int c [500] = {(791 - 791)};
    int XCIofNH;
    int KYMbFj5nv8N, j, m, YzXtTq63Jix;
    int vH1jD9t0K27;
    char hmca05M7 [500] [6];
    char QHMxgKr2a [(936 - 435)];
    scanf ("%d", &vH1jD9t0K27);
    scanf ("%s", QHMxgKr2a);
    YzXtTq63Jix = strlen (QHMxgKr2a);
    {
        KYMbFj5nv8N = 834 - 834;
        while (KYMbFj5nv8N <= YzXtTq63Jix -vH1jD9t0K27) {
            {
                j = 799 - 799;
                while (j < vH1jD9t0K27) {
                    hmca05M7[KYMbFj5nv8N][j] = QHMxgKr2a[KYMbFj5nv8N +j];
                    j = j + 1;
                };
            }
            KYMbFj5nv8N = KYMbFj5nv8N +1;
        };
    }
    {
        KYMbFj5nv8N = 242 - 242;
        while (KYMbFj5nv8N <= YzXtTq63Jix -vH1jD9t0K27) {
            {
                j = 94 - 93;
                while (j <= YzXtTq63Jix -vH1jD9t0K27) {
                    for (m = 0; m < vH1jD9t0K27; m = m + 1) {
                        if (hmca05M7[KYMbFj5nv8N][m] != hmca05M7[j][m]) {
                            XCIofNH = 0;
                            break;
                        }
                        else {
                            XCIofNH = 1;
                        };
                    }
                    j++;
                    if (XCIofNH == 1) {
                        c[KYMbFj5nv8N]++;
                    };
                };
            }
            KYMbFj5nv8N = KYMbFj5nv8N +1;
        };
    }
    XCIofNH = 0;
    for (KYMbFj5nv8N = 0; KYMbFj5nv8N <= YzXtTq63Jix -vH1jD9t0K27; KYMbFj5nv8N = KYMbFj5nv8N +1) {
        if (XCIofNH < c[KYMbFj5nv8N]) {
            XCIofNH = c[KYMbFj5nv8N];
        };
    }
    if (XCIofNH == 0) {
    }
    else {
        printf ("%d\n", XCIofNH +1);
        {
            KYMbFj5nv8N = 0;
            while (KYMbFj5nv8N <= YzXtTq63Jix -vH1jD9t0K27) {
                if (c[KYMbFj5nv8N] == XCIofNH) {
                    putchar ('\n');
                    for (j = 0; j < vH1jD9t0K27; j++) {
                        printf ("%c", hmca05M7[KYMbFj5nv8N][j]);
                    };
                }
                KYMbFj5nv8N++;
            };
        };
    }
    return 0;
}

