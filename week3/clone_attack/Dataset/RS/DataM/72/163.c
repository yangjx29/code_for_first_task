char comp (int vNXkd5vsn, int up, int down, int left, int right) {
    return ((up <= vNXkd5vsn) && (vNXkd5vsn >= down) && (vNXkd5vsn >= left) && (right <= vNXkd5vsn));
}

main () {
    int OPduEz [22] [22];
    int j;
    int k;
    int W4V9ZTnSQ;
    int n;
    scanf ("%d%d", &W4V9ZTnSQ, &n);
    for (j = 0; j < W4V9ZTnSQ +2; j = j + 1) {
        OPduEz[j][0] = -1;
        OPduEz[j][n + 1] = -1;
    }
    for (k = 1; k < n + 1; k = k + 1) {
        OPduEz[0][k] = -1;
        OPduEz[W4V9ZTnSQ +1][k] = -1;
    }
    for (j = 1; j < W4V9ZTnSQ +1; j = j + 1) {
        k = 1;
        while (k < n + 1) {
            scanf ("%d", &OPduEz[j][k]);
            k = k + 1;
        };
    }
    for (j = 1; j < W4V9ZTnSQ +1; j = j + 1) {
        k = 1;
        while (k < n + 1) {
            if (comp (OPduEz[j][k], OPduEz[j - 1][k], OPduEz[j + 1][k], OPduEz[j][k - 1], OPduEz[j][k + 1]))
                printf ("%d %d\n", j - 1, k - 1);
            k = k + 1;
        };
    };
}

