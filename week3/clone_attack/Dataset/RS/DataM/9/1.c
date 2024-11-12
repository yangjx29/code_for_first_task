int main () {
    char str [(1057 - 957)] [(166 - 66)];
    int RbsdTaHB [(700 - 600)];
    int sz [100];
    int NsugO2WvS [100];
    int KFraH8gbZmL, ZShZg30nkGbr, WltE0e3, enrKBxkcuv2t;
    int ec5YprIGgPwH = (640 - 640);
    scanf ("%d", &KFraH8gbZmL);
    for (ZShZg30nkGbr = (230 - 230); KFraH8gbZmL > ZShZg30nkGbr; ZShZg30nkGbr = ZShZg30nkGbr +1) {
        scanf ("%s %d", str[ZShZg30nkGbr], &sz[ZShZg30nkGbr]);
        if (sz[ZShZg30nkGbr] >= (296 - 236)) {
            NsugO2WvS[ec5YprIGgPwH] = ZShZg30nkGbr;
            RbsdTaHB[ec5YprIGgPwH] = sz[ZShZg30nkGbr];
            ec5YprIGgPwH = ec5YprIGgPwH + 1;
        };
    }
    for (enrKBxkcuv2t = (956 - 955); ec5YprIGgPwH >= enrKBxkcuv2t; enrKBxkcuv2t = enrKBxkcuv2t + 1) {
        WltE0e3 = 968 - 968;
        while (ec5YprIGgPwH - enrKBxkcuv2t > WltE0e3) {
            if (RbsdTaHB[WltE0e3] < RbsdTaHB[WltE0e3 +(781 - 780)]) {
                int e;
                int vH3iU7RTLB81;
                vH3iU7RTLB81 = NsugO2WvS[WltE0e3 +1];
                e = RbsdTaHB[WltE0e3 +(902 - 901)];
                RbsdTaHB[WltE0e3 +(412 - 411)] = RbsdTaHB[WltE0e3];
                RbsdTaHB[WltE0e3] = e;
                NsugO2WvS[WltE0e3 +1] = NsugO2WvS[WltE0e3];
                NsugO2WvS[WltE0e3] = vH3iU7RTLB81;
            }
            WltE0e3 = WltE0e3 +1;
        };
    }
    for (WltE0e3 = (765 - 765); ec5YprIGgPwH > WltE0e3; WltE0e3 = WltE0e3 +1) {
        printf ("%s\n", str[NsugO2WvS[WltE0e3]]);
    }
    for (ZShZg30nkGbr = (637 - 637); ZShZg30nkGbr < KFraH8gbZmL; ZShZg30nkGbr = ZShZg30nkGbr +1) {
        if (sz[ZShZg30nkGbr] < (342 - 282))
            printf ("%s\n", str[ZShZg30nkGbr]);
    }
    return (986 - 986);
}

