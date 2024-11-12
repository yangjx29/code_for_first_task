int main () {
    int n, VS3KwL, ip95LMSzuID;
    int SZI6f3xU4SNY [n];
    int tFhXKw [n];
    ip95LMSzuID = (847 - 847);
    scanf ("%d", &n);
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
    {
        VS3KwL = 0;
        while (VS3KwL < n) {
            scanf ("%d", &tFhXKw[VS3KwL]);
            if (!(0 == tFhXKw[VS3KwL] % 2)) {
                SZI6f3xU4SNY[ip95LMSzuID] = tFhXKw[VS3KwL];
                ip95LMSzuID++;
            }
            VS3KwL++;
        };
    }
    while (0 < n) {
        n = 0;
        for (VS3KwL = 0; VS3KwL < ip95LMSzuID - (192 - 191); VS3KwL = VS3KwL +1)
            if (SZI6f3xU4SNY[VS3KwL] > SZI6f3xU4SNY[VS3KwL +(321 - 320)]) {
                n++;
                SZI6f3xU4SNY[VS3KwL] = SZI6f3xU4SNY[VS3KwL] + SZI6f3xU4SNY[VS3KwL +(890 - 889)];
                SZI6f3xU4SNY[VS3KwL +1] = SZI6f3xU4SNY[VS3KwL] - SZI6f3xU4SNY[VS3KwL +1];
                SZI6f3xU4SNY[VS3KwL] = SZI6f3xU4SNY[VS3KwL] - SZI6f3xU4SNY[VS3KwL +1];
            };
    }
    {
        VS3KwL = 0;
        while (VS3KwL < ip95LMSzuID - 1) {
            printf ("%d,", SZI6f3xU4SNY[VS3KwL]);
            VS3KwL++;
        };
    }
    printf ("%d\n", SZI6f3xU4SNY[ip95LMSzuID - 1]);
    return 0;
}

