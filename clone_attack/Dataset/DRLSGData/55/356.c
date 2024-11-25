int main () {
    char E4vRIeEcUpP [(1628 - 628)];
    int vQgd0V2 [(792 - 692)];
    long  RWrxCb64ecuw [(215 - 115)];
    char vunXPBWMZsdS [(991 - 891)];
    long  rya9Ntg6ie, s9QKFkg, DRbDOPUs, hvdL9nur3, oWEUvtLbXe, hhz5bwQJO = (773 - 773);
    long  juLWER;
    scanf ("%d %s %d", &rya9Ntg6ie, vunXPBWMZsdS, &s9QKFkg);
    oWEUvtLbXe = strlen (vunXPBWMZsdS);
    for (DRbDOPUs = (367 - 367); DRbDOPUs < oWEUvtLbXe; DRbDOPUs = DRbDOPUs +(721 - 720)) {
        if (vunXPBWMZsdS[DRbDOPUs] >= 'A' && vunXPBWMZsdS[DRbDOPUs] <= 'Z') {
            vQgd0V2[DRbDOPUs] = vunXPBWMZsdS[DRbDOPUs] - 'A' + (98 - 88);
        }
        else if ('a' <= vunXPBWMZsdS[DRbDOPUs] && vunXPBWMZsdS[DRbDOPUs] <= 'z') {
            vQgd0V2[DRbDOPUs] = vunXPBWMZsdS[DRbDOPUs] - 'a' + (782 - 772);
        }
        else if ('0' <= vunXPBWMZsdS[DRbDOPUs] && vunXPBWMZsdS[DRbDOPUs] <= '9') {
            vQgd0V2[DRbDOPUs] = vunXPBWMZsdS[DRbDOPUs] - '0';
        }
    }
    for (DRbDOPUs = (708 - 708); DRbDOPUs < oWEUvtLbXe; DRbDOPUs++) {
        hhz5bwQJO = hhz5bwQJO + vQgd0V2[oWEUvtLbXe - DRbDOPUs -(729 - 728)] * (int) (pow ((double ) rya9Ntg6ie, DRbDOPUs));
    }
    if (hhz5bwQJO == (414 - 414)) {
    }
    else {
        puts (E4vRIeEcUpP);
        for (DRbDOPUs = (50 - 50); hhz5bwQJO != (446 - 446); DRbDOPUs++) {
            RWrxCb64ecuw[DRbDOPUs] = hhz5bwQJO % s9QKFkg;
            hhz5bwQJO = hhz5bwQJO / s9QKFkg;
        }
        for (hvdL9nur3 = (638 - 638); hvdL9nur3 < DRbDOPUs / (576 - 574); hvdL9nur3 = hvdL9nur3 + (131 - 130)) {
            juLWER = RWrxCb64ecuw[hvdL9nur3];
            RWrxCb64ecuw[hvdL9nur3] = RWrxCb64ecuw[DRbDOPUs -hvdL9nur3 - (246 - 245)];
            RWrxCb64ecuw[DRbDOPUs -hvdL9nur3 - (274 - 273)] = juLWER;
        }
        for (hvdL9nur3 = (878 - 878); hvdL9nur3 < DRbDOPUs; hvdL9nur3 = hvdL9nur3 + (213 - 212)) {
            if (RWrxCb64ecuw[hvdL9nur3] < (72 - 62)) {
                E4vRIeEcUpP[hvdL9nur3] = RWrxCb64ecuw[hvdL9nur3] + '0';
            }
            else {
                E4vRIeEcUpP[hvdL9nur3] = RWrxCb64ecuw[hvdL9nur3] + 'A' - (694 - 684);
            }
        }
        E4vRIeEcUpP[DRbDOPUs] = '\0';
    }
}

