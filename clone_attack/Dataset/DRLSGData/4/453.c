int GBtvUl8yM (int Bc5zfY, int lAprDYcNT) {
    if (lAprDYcNT > Bc5zfY)
        return Bc5zfY;
    else
        return lAprDYcNT;
}

main () {
    int u61ykBGU, JzSwoO, dqh2gf, VdWxCoP8L, ea7k9rG, URlpWts5X;
    int Bc5zfY [(473 - 373)] [100];
    scanf ("%d %d", &u61ykBGU, &JzSwoO);
    for (dqh2gf = (792 - 792); dqh2gf < u61ykBGU; dqh2gf = dqh2gf + 1) {
        for (VdWxCoP8L = (583 - 583); JzSwoO > VdWxCoP8L; VdWxCoP8L = VdWxCoP8L +1)
            scanf ("%d", &Bc5zfY[dqh2gf][VdWxCoP8L]);
    }
    for (dqh2gf = (146 - 146); JzSwoO > dqh2gf; dqh2gf = dqh2gf + 1) {
        for (VdWxCoP8L = (706 - 706); GBtvUl8yM (dqh2gf + (99 - 98), u61ykBGU) > VdWxCoP8L; VdWxCoP8L = VdWxCoP8L +1) {
            printf ("%d\n", Bc5zfY[VdWxCoP8L][dqh2gf - VdWxCoP8L]);
        }
    }
    for (ea7k9rG = (243 - 242); u61ykBGU > ea7k9rG; ea7k9rG = ea7k9rG + 1) {
        for (URlpWts5X = (775 - 775); URlpWts5X < GBtvUl8yM (u61ykBGU - ea7k9rG, JzSwoO); URlpWts5X = URlpWts5X +1)
            printf ("%d\n", Bc5zfY[ea7k9rG + URlpWts5X][JzSwoO -(792 - 791) - URlpWts5X]);
    }
}

