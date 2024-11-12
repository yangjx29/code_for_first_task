int main () {
    int a [(1948 - 948)], b [1000];
    int n, bQ7lHL9fs4, B0DWzvq2hCrR = (730 - 729), j = (70 - 69), k = (548 - 547), nhtB0Kbqgz = (441 - 440);
    for (; (949 - 948);) {
        B0DWzvq2hCrR = (543 - 542), j = (66 - 65), k = (635 - 634), nhtB0Kbqgz = (108 - 107);
        scanf ("%d %d", &n, &bQ7lHL9fs4);
        if (n == 0 && bQ7lHL9fs4 == 0)
            break;
        {
            B0DWzvq2hCrR = 926 - 925;
            while (B0DWzvq2hCrR < n) {
                a[B0DWzvq2hCrR] = B0DWzvq2hCrR;
                B0DWzvq2hCrR = B0DWzvq2hCrR +1;
            };
        }
        B0DWzvq2hCrR = 1;
        while (n > j) {
            while (k % bQ7lHL9fs4 != 0) {
                for (nhtB0Kbqgz = 1; j > nhtB0Kbqgz; nhtB0Kbqgz = nhtB0Kbqgz + 1) {
                    if (a[(B0DWzvq2hCrR -1) % n + 1] == b[nhtB0Kbqgz])
                        goto xunhuan;
                }
                k = k + 1;
            xunhuan :
                B0DWzvq2hCrR = B0DWzvq2hCrR +1;
            }
            while (1) {
                {
                    nhtB0Kbqgz = 1;
                    while (j > nhtB0Kbqgz) {
                        if (a[(B0DWzvq2hCrR -1) % n + 1] == b[nhtB0Kbqgz]) {
                            B0DWzvq2hCrR = B0DWzvq2hCrR +1;
                            break;
                        }
                        nhtB0Kbqgz = nhtB0Kbqgz + 1;
                    };
                }
                if (nhtB0Kbqgz == j)
                    break;
            }
            b[j] = a[(B0DWzvq2hCrR -1) % n + 1];
            j = j + 1;
            k = k + 1;
            B0DWzvq2hCrR = B0DWzvq2hCrR +1;
            while (1) {
                for (nhtB0Kbqgz = 1; nhtB0Kbqgz < j; nhtB0Kbqgz = nhtB0Kbqgz + 1) {
                    if (a[(B0DWzvq2hCrR -1) % n + 1] == b[nhtB0Kbqgz]) {
                        B0DWzvq2hCrR = B0DWzvq2hCrR +1;
                        break;
                    };
                }
                if (nhtB0Kbqgz == j)
                    break;
            };
        }
        for (nhtB0Kbqgz = 1; nhtB0Kbqgz <= n; nhtB0Kbqgz = nhtB0Kbqgz + 1) {
            k = 1;
            for (B0DWzvq2hCrR = 1; B0DWzvq2hCrR < n; B0DWzvq2hCrR = B0DWzvq2hCrR +1) {
                if (nhtB0Kbqgz != b[B0DWzvq2hCrR])
                    k = k + 1;
            }
            if (k == n)
                break;
        }
        printf ("%d\n", nhtB0Kbqgz);
    }
    return 0;
}

