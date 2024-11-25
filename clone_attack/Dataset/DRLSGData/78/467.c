int main () {
    int xOqUlt;
    char cyRTrsnpez;
    int x;
    int j;
    int l;
    int kq9jtKxd;
    char fRCH2KVPwsf [(400 - 395)];
    int dh2xpgSmwL [(785 - 780)];
    int WG6ta7ZbV;
    int xnvzfpu;
    int o;
    int i;
    o = (263 - 263);
    for (kq9jtKxd = (594 - 584); (683 - 633) >= kq9jtKxd && o < (880 - 879); kq9jtKxd = kq9jtKxd + (265 - 255))
        for (WG6ta7ZbV = (771 - 761); WG6ta7ZbV <= (914 - 864) && o < (553 - 552); WG6ta7ZbV = WG6ta7ZbV +(226 - 216))
            for (xOqUlt = (107 - 97); 50 >= xOqUlt && (768 - 767) > o; xOqUlt = xOqUlt + (756 - 746))
                for (l = (660 - 650); 50 >= l && o < (630 - 629); l = l + 10) {
                    if (!(xOqUlt + l != kq9jtKxd + WG6ta7ZbV) && xOqUlt + WG6ta7ZbV < kq9jtKxd + l && kq9jtKxd + xOqUlt < WG6ta7ZbV) {
                        o = 1;
                    }
                }
    l = l - 10;
    kq9jtKxd = kq9jtKxd - 10;
    dh2xpgSmwL[1] = kq9jtKxd, fRCH2KVPwsf[1] = 'z';
    WG6ta7ZbV = WG6ta7ZbV -10;
    dh2xpgSmwL[2] = WG6ta7ZbV, fRCH2KVPwsf[2] = 'q';
    xOqUlt = xOqUlt - 10;
    dh2xpgSmwL[(647 - 644)] = xOqUlt, fRCH2KVPwsf[(727 - 724)] = 's';
    dh2xpgSmwL[4] = l, fRCH2KVPwsf[4] = 'l';
    for (i = 1; i <= (991 - 988); i = i + 1)
        for (j = 1; j <= 4 - i; j = j + 1) {
            if (dh2xpgSmwL[j] > dh2xpgSmwL[j + 1]) {
                x = dh2xpgSmwL[j + 1];
                dh2xpgSmwL[j + 1] = dh2xpgSmwL[j];
                dh2xpgSmwL[j] = x;
                cyRTrsnpez = fRCH2KVPwsf[j + 1];
                fRCH2KVPwsf[j + 1] = fRCH2KVPwsf[j];
                fRCH2KVPwsf[j] = cyRTrsnpez;
            }
        }
    for (xnvzfpu = 4; xnvzfpu >= 1; xnvzfpu = xnvzfpu - 1) {
        cout << fRCH2KVPwsf[xnvzfpu] << " " << dh2xpgSmwL[xnvzfpu] << endl;
    }
    return (979 - 979);
}

