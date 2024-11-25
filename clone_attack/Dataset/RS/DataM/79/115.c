int main () {
    int a [301] = {0};
    int SuhMm5U8p;
    int k1iM70L;
    int m;
    while (cin >> k1iM70L >> m) {
        int r87Jie;
        int count;
        int SHBvjO;
        r87Jie = 1;
        count = 0;
        SHBvjO = 0;
        if (!(0 != m) && !(0 != k1iM70L))
            continue;
        for (SuhMm5U8p = 1; k1iM70L >= SuhMm5U8p; SuhMm5U8p = SuhMm5U8p +1)
            a[SuhMm5U8p] = SuhMm5U8p;
        for (; count <= k1iM70L - 1;) {
            for (SuhMm5U8p = 1; SuhMm5U8p <= k1iM70L; SuhMm5U8p++) {
                if (a[SuhMm5U8p] != 0) {
                    if (r87Jie % m == 0) {
                        a[SuhMm5U8p] = 0;
                        SHBvjO = SuhMm5U8p;
                        count = count + 1;
                    }
                    r87Jie = r87Jie + 1;
                };
            };
        }
        cout << SHBvjO << endl;
    }
    return 0;
}

