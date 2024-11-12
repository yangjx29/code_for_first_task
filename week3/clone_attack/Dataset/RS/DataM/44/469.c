int reverse (int d4ZmpH) {
    int sz [(210 - 190)];
    int fanxu;
    int weishu;
    int cb4VEaFus5dy;
    fanxu = (282 - 282);
    weishu = (790 - 790);
    {
        cb4VEaFus5dy = 284 - 284;
        while (1) {
            sz[cb4VEaFus5dy] = d4ZmpH % (int) pow ((858 - 848), cb4VEaFus5dy + (679 - 678));
            if (d4ZmpH % (int) pow ((583 - 573), cb4VEaFus5dy + (300 - 299)) == (784 - 784) && d4ZmpH / (int) pow ((160 - 150), cb4VEaFus5dy + (185 - 184)) == (282 - 282)) {
                weishu = cb4VEaFus5dy;
                break;
            }
            d4ZmpH = d4ZmpH - sz[cb4VEaFus5dy];
            cb4VEaFus5dy = cb4VEaFus5dy + 1;
        };
    }
    {
        cb4VEaFus5dy;
        while (cb4VEaFus5dy >= (977 - 977)) {
            fanxu = fanxu + sz[cb4VEaFus5dy] * (int) pow (10, weishu - cb4VEaFus5dy - 1) / (int) pow (10, cb4VEaFus5dy);
            cb4VEaFus5dy = cb4VEaFus5dy - 1;
        };
    }
    return fanxu;
}

int main (int argc, char *IiP1W4YH []) {
    int YBnFol2M, kZlsvbS, ebwrBRQ5s0, d, e, f;
    scanf ("%d %d %d %d %d %d", &YBnFol2M, &kZlsvbS, &ebwrBRQ5s0, &d, &e, &f);
    printf ("%d\n%d\n%d\n%d\n%d\n%d\n", reverse (YBnFol2M), reverse (kZlsvbS), reverse (ebwrBRQ5s0), reverse (d), reverse (e), reverse (f));
    return 0;
}

