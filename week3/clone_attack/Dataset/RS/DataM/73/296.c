main () {
    int qLVyz2cKWmat, GZIjBT7JLsi9, j3K1Er;
    int C82Uy09QFm [(826 - 821)] [(480 - 475)];
    int UjvXJk, VnNpHSdRe0m, t7hn8LN3M;
    for (UjvXJk = (809 - 809); UjvXJk < 5; UjvXJk = UjvXJk +1)
        for (VnNpHSdRe0m = 0; 5 > VnNpHSdRe0m; VnNpHSdRe0m = VnNpHSdRe0m +1)
            scanf ("%d", &C82Uy09QFm[UjvXJk][VnNpHSdRe0m]);
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
    for (UjvXJk = 0; UjvXJk < 5; UjvXJk = UjvXJk +1) {
        qLVyz2cKWmat = C82Uy09QFm[UjvXJk][0];
        GZIjBT7JLsi9 = 0;
        for (VnNpHSdRe0m = 0; 5 > VnNpHSdRe0m; VnNpHSdRe0m = VnNpHSdRe0m +1) {
            if (qLVyz2cKWmat < C82Uy09QFm[UjvXJk][VnNpHSdRe0m]) {
                qLVyz2cKWmat = C82Uy09QFm[UjvXJk][VnNpHSdRe0m];
                GZIjBT7JLsi9 = VnNpHSdRe0m;
            };
        }
        j3K1Er = 1;
        for (t7hn8LN3M = 0; 5 > t7hn8LN3M; t7hn8LN3M++)
            if (qLVyz2cKWmat > C82Uy09QFm[t7hn8LN3M][GZIjBT7JLsi9]) {
                j3K1Er = 0;
                continue;
            }
        if (j3K1Er) {
            printf ("%d %d %d", UjvXJk +1, GZIjBT7JLsi9 +1, qLVyz2cKWmat);
            break;
        };
    }
    if (j3K1Er == 0)
        ;
    getchar ();
    getchar ();
}

