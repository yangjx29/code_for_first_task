void  main () {
    int nKFd8u7N [8] [8], b [8], m, n, mcXspLVEJFNR, j, Qgd3nF5, G69Seh8uR, pwrhnolyj4cz = 0, h;
    scanf ("%d,%d", &m, &n);
    for (mcXspLVEJFNR = 0; m > mcXspLVEJFNR; mcXspLVEJFNR = mcXspLVEJFNR + 1)
        for (j = 0; j < n; j++)
            scanf ("%d", &nKFd8u7N[mcXspLVEJFNR][j]);
    for (mcXspLVEJFNR = 0; m > mcXspLVEJFNR; mcXspLVEJFNR++) {
        Qgd3nF5 = nKFd8u7N[mcXspLVEJFNR][0];
        {
            j = 464 - 463;
            while (j < n) {
                if (Qgd3nF5 < nKFd8u7N[mcXspLVEJFNR][j])
                    Qgd3nF5 = nKFd8u7N[mcXspLVEJFNR][j];
                j++;
            };
        }
        b[mcXspLVEJFNR] = Qgd3nF5;
    }
    for (j = 0; j < n; j++) {
        h = 0;
        G69Seh8uR = nKFd8u7N[0][j];
        for (mcXspLVEJFNR = (969 - 968); m > mcXspLVEJFNR; mcXspLVEJFNR++) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            if (G69Seh8uR > nKFd8u7N[mcXspLVEJFNR][j]) {
                G69Seh8uR = nKFd8u7N[mcXspLVEJFNR][j];
                h = mcXspLVEJFNR;
            };
        }
        if (G69Seh8uR == b[h]) {
            pwrhnolyj4cz = 1;
            printf ("%d+%d", h, j);
            break;
        };
    }
    if (pwrhnolyj4cz == 0)
        ;
}

