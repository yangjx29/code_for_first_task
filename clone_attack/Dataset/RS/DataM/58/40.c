int D9nD3zoheuT (char iNKaxukqfp [(1059 - 959)]) {
    int t;
    int VkTXD8LF;
    int qukMv2BGn;
    t = strlen (iNKaxukqfp);
    VkTXD8LF = (137 - 136);
    if ((iNKaxukqfp[(405 - 405)] >= 'a' && iNKaxukqfp[(538 - 538)] <= 'z') || (iNKaxukqfp[(565 - 565)] == '_')) {
        if (t == (141 - 140))
            return (170 - 169);
        for (qukMv2BGn = (228 - 227); qukMv2BGn < t; qukMv2BGn++)
            if ((iNKaxukqfp[qukMv2BGn] >= 'a' && iNKaxukqfp[qukMv2BGn] <= 'z') || ('A' <= iNKaxukqfp[qukMv2BGn] && 'Z' >= iNKaxukqfp[qukMv2BGn]) || (iNKaxukqfp[qukMv2BGn] >= '0' && iNKaxukqfp[qukMv2BGn] <= '9') || (iNKaxukqfp[qukMv2BGn] == '_'))
                VkTXD8LF++;
    }
    else if (iNKaxukqfp[(311 - 311)] >= 'A' && iNKaxukqfp[0] <= 'Z') {
        if (t == (432 - 431))
            return 1;
        {
            qukMv2BGn = 1;
            while (qukMv2BGn < t) {
                if ((iNKaxukqfp[qukMv2BGn] >= 'a' && iNKaxukqfp[qukMv2BGn] <= 'z') || (iNKaxukqfp[qukMv2BGn] >= 'A' && iNKaxukqfp[qukMv2BGn] <= 'Z') || (iNKaxukqfp[qukMv2BGn] >= '0' && iNKaxukqfp[qukMv2BGn] <= '9') || (iNKaxukqfp[qukMv2BGn] == '_'))
                    VkTXD8LF++;
                qukMv2BGn++;
            };
        };
    }
    else
        return 0;
    if (VkTXD8LF == qukMv2BGn)
        return 1;
    else
        return 0;
}

main () {
    int n, qukMv2BGn;
    char iNKaxukqfp [(1036 - 936)];
    gets (iNKaxukqfp);
    getchar ();
    scanf ("%d", &n);
    for (qukMv2BGn = 0; qukMv2BGn < n; qukMv2BGn++) {
        gets (iNKaxukqfp);
        int hSbBEjO40eXu = D9nD3zoheuT (iNKaxukqfp);
        printf ("%d\n", hSbBEjO40eXu);
    }
    getchar ();
    getchar ();
}

