void  main () {
    int zoxVbw1yX, VJjuiQC, eIv64u, eiBLxnKYoaCF, c, PEwKDleknAap = (290 - 290), jhrc1XWNB, FFh2k3v81, Hgp3CIJRNio [9] [9];
    scanf ("%d,%d", &eiBLxnKYoaCF, &c);
    for (zoxVbw1yX = (34 - 34); zoxVbw1yX < eiBLxnKYoaCF; zoxVbw1yX = zoxVbw1yX + 1)
        for (VJjuiQC = (443 - 443); c > VJjuiQC; VJjuiQC = VJjuiQC +1)
            scanf ("%d", &Hgp3CIJRNio[zoxVbw1yX][VJjuiQC]);
    for (zoxVbw1yX = 0; zoxVbw1yX < eiBLxnKYoaCF; zoxVbw1yX++) {
        for (VJjuiQC = 0, jhrc1XWNB = 0; VJjuiQC < c; VJjuiQC = VJjuiQC +1)
            if (Hgp3CIJRNio[zoxVbw1yX][VJjuiQC] > Hgp3CIJRNio[zoxVbw1yX][jhrc1XWNB])
                jhrc1XWNB = VJjuiQC;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (eIv64u = 0, FFh2k3v81 = 0; eIv64u < eiBLxnKYoaCF; eIv64u = eIv64u + 1)
            if (Hgp3CIJRNio[eIv64u][jhrc1XWNB] >= Hgp3CIJRNio[zoxVbw1yX][jhrc1XWNB])
                FFh2k3v81++;
        if (FFh2k3v81 == eiBLxnKYoaCF) {
            PEwKDleknAap = 1;
            break;
        };
    }
    if (PEwKDleknAap)
        printf ("%d+%d", zoxVbw1yX, jhrc1XWNB);
    else
        printf ("No");
}

