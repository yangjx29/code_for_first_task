int main () {
    int dgLofAVOYd4C;
    int gtS8vpn;
    int dncSfg;
    int j;
    dgLofAVOYd4C = 0;
    scanf ("%d", &gtS8vpn);
    dncSfg = log10 (gtS8vpn);
    for (; gtS8vpn > 0;) {
        dgLofAVOYd4C = dgLofAVOYd4C * 10 + gtS8vpn % 10;
        gtS8vpn = gtS8vpn / 10;
    }
    j = log10 (dgLofAVOYd4C);
    for (; dncSfg > j; dncSfg = dncSfg - 1)
        printf ("0");
    printf ("%d", dgLofAVOYd4C);
    return 0;
}

