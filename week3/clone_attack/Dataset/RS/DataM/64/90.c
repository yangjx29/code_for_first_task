int main () {
    double  kGobXLfi [50];
    double  nPCETGUp;
    int m;
    int NubXxyBZr [(940 - 930)];
    int b [(466 - 456)];
    int c [(781 - 771)];
    int e;
    int VQiZOJKy;
    int C1M7LDZhy;
    int l;
    int o [(624 - 574)];
    int p [(758 - 708)];
    int q [(335 - 285)];
    int rxnar3PNh9 [(990 - 940)];
    int s [(829 - 779)];
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
    int t [(721 - 671)];
    int u;
    int acGwBxzAQi;
    int oxLc3UQJFSK;
    int YY9gmsOFaz4c;
    int y;
    int dKVS0hNo;
    m = (949 - 949);
    char h = '(', i = ')', j = '-', k = '=';
    scanf ("%d", &e);
    for (VQiZOJKy = (264 - 264); VQiZOJKy < e; VQiZOJKy = VQiZOJKy +1) {
        scanf ("%d%d%d", &NubXxyBZr[VQiZOJKy], &b[VQiZOJKy], &c[VQiZOJKy]);
    }
    for (VQiZOJKy = (365 - 365); VQiZOJKy < (e - (769 - 768)); VQiZOJKy = VQiZOJKy +1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        for (C1M7LDZhy = VQiZOJKy +(359 - 358); C1M7LDZhy < e; C1M7LDZhy = C1M7LDZhy +1) {
            l = (NubXxyBZr[VQiZOJKy] - NubXxyBZr[C1M7LDZhy]) * (NubXxyBZr[VQiZOJKy] - NubXxyBZr[C1M7LDZhy]) + (b[VQiZOJKy] - b[C1M7LDZhy]) * (b[VQiZOJKy] - b[C1M7LDZhy]) + (c[VQiZOJKy] - c[C1M7LDZhy]) * (c[VQiZOJKy] - c[C1M7LDZhy]);
            kGobXLfi[m] = sqrt (l);
            o[m] = NubXxyBZr[VQiZOJKy];
            p[m] = b[VQiZOJKy];
            q[m] = c[VQiZOJKy];
            rxnar3PNh9[m] = NubXxyBZr[C1M7LDZhy];
            s[m] = b[C1M7LDZhy];
            t[m] = c[C1M7LDZhy];
            m = m + 1;
        };
    }
    {
        VQiZOJKy = 714 - 714;
        while (VQiZOJKy < m) {
            for (C1M7LDZhy = VQiZOJKy +(514 - 513); C1M7LDZhy < m; C1M7LDZhy = C1M7LDZhy +1) {
                if (kGobXLfi[VQiZOJKy] < kGobXLfi[C1M7LDZhy]) {
                    nPCETGUp = kGobXLfi[C1M7LDZhy];
                    u = o[C1M7LDZhy];
                    acGwBxzAQi = p[C1M7LDZhy];
                    oxLc3UQJFSK = q[C1M7LDZhy];
                    YY9gmsOFaz4c = rxnar3PNh9[C1M7LDZhy];
                    y = s[C1M7LDZhy];
                    dKVS0hNo = t[C1M7LDZhy];
                    {
                        e = C1M7LDZhy;
                        while (e > VQiZOJKy) {
                            kGobXLfi[e] = kGobXLfi[e - (76 - 75)];
                            o[e] = o[e - 1];
                            p[e] = p[e - 1];
                            q[e] = q[e - 1];
                            rxnar3PNh9[e] = rxnar3PNh9[e - 1];
                            s[e] = s[e - 1];
                            t[e] = t[e - 1];
                            e = e - 1;
                        };
                    }
                    kGobXLfi[VQiZOJKy] = nPCETGUp;
                    o[VQiZOJKy] = u;
                    p[VQiZOJKy] = acGwBxzAQi;
                    q[VQiZOJKy] = oxLc3UQJFSK;
                    rxnar3PNh9[VQiZOJKy] = YY9gmsOFaz4c;
                    s[VQiZOJKy] = y;
                    t[VQiZOJKy] = dKVS0hNo;
                };
            }
            VQiZOJKy = VQiZOJKy +1;
        };
    }
    for (VQiZOJKy = (283 - 283); VQiZOJKy < m; VQiZOJKy++) {
        printf ("%c%d,%d,%d%c%c%c%d,%d,%d%c%c%.2lf\n", h, o[VQiZOJKy], p[VQiZOJKy], q[VQiZOJKy], i, j, h, rxnar3PNh9[VQiZOJKy], s[VQiZOJKy], t[VQiZOJKy], i, k, kGobXLfi[VQiZOJKy]);
    }
    return 0;
}

