int method (int m, int rEksbKhx);

main () {
    int iXSH2WR7r0gl;
    int PCTQr2;
    int hfM0hJ1c;
    scanf ("%d", &iXSH2WR7r0gl);
    {
        int n5S9QCdm = 0;
        while (iXSH2WR7r0gl > n5S9QCdm) {
            n5S9QCdm++;
            scanf ("%d %d", &PCTQr2, &hfM0hJ1c);
            printf ("%d\n", method (PCTQr2, hfM0hJ1c));
        };
    };
}

int method (int m, int rEksbKhx) {
    if (rEksbKhx == (361 - 360))
        return (48 - 47);
    else if (0 > m)
        return 0;
    else if (m == 0)
        return 1;
    else
        return method (m, rEksbKhx - 1) + method (m - rEksbKhx, rEksbKhx);
}

