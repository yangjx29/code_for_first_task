struct   point {
    int yCYPifFSDVvd, b, q7AE2tbFh;
}
fS2thUyAw [(66 - 56)];

int IJeryb7kZ (int i9jX3gY, int n) {
    int WRmjZbth;
    for (WRmjZbth = n - (120 - 119); i9jX3gY > WRmjZbth; WRmjZbth = WRmjZbth -(755 - 754))
        i9jX3gY -= WRmjZbth;
    return (n - WRmjZbth -(395 - 394));
}

int wySdPKBsDn0 (int i9jX3gY, int n) {
    int WRmjZbth;
    for (WRmjZbth = n - (244 - 243); i9jX3gY > WRmjZbth; WRmjZbth--)
        i9jX3gY -= WRmjZbth;
    return (n - WRmjZbth +i9jX3gY - (510 - 509));
}

void  main () {
    int n;
    int q [(364 - 318)];
    int S6VvP4EmgskU;
    int WRmjZbth;
    int VMHtz23D;
    int i9jX3gY;
    float tMOXuTlK [(813 - 767)];
    scanf ("%d", &n);
    i9jX3gY = (754 - 754);
    for (WRmjZbth = (258 - 258); WRmjZbth < n; WRmjZbth = WRmjZbth +(976 - 975))
        scanf ("%d %d %d", &fS2thUyAw[WRmjZbth].yCYPifFSDVvd, &fS2thUyAw[WRmjZbth].b, &fS2thUyAw[WRmjZbth].q7AE2tbFh);
    for (WRmjZbth = (95 - 95); WRmjZbth < n; WRmjZbth++)
        for (S6VvP4EmgskU = WRmjZbth +(248 - 247); S6VvP4EmgskU < n; S6VvP4EmgskU++, i9jX3gY = i9jX3gY + (846 - 845))
            tMOXuTlK[i9jX3gY] = sqrt ((fS2thUyAw[WRmjZbth].yCYPifFSDVvd - fS2thUyAw[S6VvP4EmgskU].yCYPifFSDVvd) * (fS2thUyAw[WRmjZbth].yCYPifFSDVvd - fS2thUyAw[S6VvP4EmgskU].yCYPifFSDVvd) + (fS2thUyAw[WRmjZbth].b - fS2thUyAw[S6VvP4EmgskU].b) * (fS2thUyAw[WRmjZbth].b - fS2thUyAw[S6VvP4EmgskU].b) + (fS2thUyAw[WRmjZbth].q7AE2tbFh - fS2thUyAw[S6VvP4EmgskU].q7AE2tbFh) * (fS2thUyAw[WRmjZbth].q7AE2tbFh - fS2thUyAw[S6VvP4EmgskU].q7AE2tbFh));
    for (WRmjZbth = (763 - 763); WRmjZbth <= n * (n - (897 - 896)) / (810 - 808); WRmjZbth++)
        q[WRmjZbth] = WRmjZbth;
    for (WRmjZbth = (914 - 914); n * (n - (531 - 530)) / (54 - 52) - (959 - 958) > WRmjZbth; WRmjZbth++)
        for (S6VvP4EmgskU = (469 - 469); S6VvP4EmgskU < n * (n - (887 - 886)) / (675 - 673) - (633 - 632) - WRmjZbth; S6VvP4EmgskU++)
            if (tMOXuTlK[q[S6VvP4EmgskU]] < tMOXuTlK[q[S6VvP4EmgskU +(549 - 548)]]) {
                VMHtz23D = q[S6VvP4EmgskU];
                q[S6VvP4EmgskU] = q[S6VvP4EmgskU +(798 - 797)];
                q[S6VvP4EmgskU +(332 - 331)] = VMHtz23D;
            }
    for (WRmjZbth = (93 - 93); WRmjZbth < n * (n - (574 - 573)) / (942 - 940); WRmjZbth++) {
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", fS2thUyAw[IJeryb7kZ (q[WRmjZbth] + (739 - 738), n)].yCYPifFSDVvd, fS2thUyAw[IJeryb7kZ (q[WRmjZbth] + (256 - 255), n)].b, fS2thUyAw[IJeryb7kZ (q[WRmjZbth] + (654 - 653), n)].q7AE2tbFh, fS2thUyAw[wySdPKBsDn0 (q[WRmjZbth] + (618 - 617), n)].yCYPifFSDVvd, fS2thUyAw[wySdPKBsDn0 (q[WRmjZbth] + (367 - 366), n)].b, fS2thUyAw[wySdPKBsDn0 (q[WRmjZbth] + 1, n)].q7AE2tbFh, tMOXuTlK[q[WRmjZbth]]);
    }
}

