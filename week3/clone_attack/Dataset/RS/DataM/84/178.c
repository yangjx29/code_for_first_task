int main () {
    int aP2HhZ4ld;
    int Piv2FMUI3Gc;
    int f3wdy8 [100];
    int z3o9Jix8z, DPWErFpw, VAK3dtxn, hasHzPmSrLJ8;
    int zVlIkO1i (int a, int WeTYzp0d7sf, int SwE80T), H2DLCe7w (int a, int WeTYzp0d7sf, int SwE80T);
    scanf ("%d\n", &aP2HhZ4ld);
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
    for (Piv2FMUI3Gc = 0; Piv2FMUI3Gc <= aP2HhZ4ld - 1; Piv2FMUI3Gc = Piv2FMUI3Gc +1) {
        scanf ("%d\n", &f3wdy8[Piv2FMUI3Gc]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    DPWErFpw = f3wdy8[0];
    z3o9Jix8z = f3wdy8[1];
    for (Piv2FMUI3Gc = 2; Piv2FMUI3Gc <= aP2HhZ4ld - 1; Piv2FMUI3Gc = Piv2FMUI3Gc +1) {
        VAK3dtxn = H2DLCe7w (DPWErFpw, z3o9Jix8z, f3wdy8[Piv2FMUI3Gc]);
        hasHzPmSrLJ8 = DPWErFpw;
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
        DPWErFpw = zVlIkO1i (DPWErFpw, z3o9Jix8z, f3wdy8[Piv2FMUI3Gc]);
        z3o9Jix8z = z3o9Jix8z + hasHzPmSrLJ8 + f3wdy8[Piv2FMUI3Gc] - DPWErFpw -VAK3dtxn;
    }
    printf ("%d\n%d", DPWErFpw, z3o9Jix8z);
    return 0;
}

zVlIkO1i (int a, int WeTYzp0d7sf, int SwE80T) {
    int LZfvNJyoC0;
    LZfvNJyoC0 = a > WeTYzp0d7sf ? a : WeTYzp0d7sf;
    LZfvNJyoC0 = LZfvNJyoC0 > SwE80T ? LZfvNJyoC0 : SwE80T;
    return LZfvNJyoC0;
}

H2DLCe7w (int a, int WeTYzp0d7sf, int SwE80T) {
    int f3wdy8;
    f3wdy8 = a > WeTYzp0d7sf ? WeTYzp0d7sf : a;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    f3wdy8 = f3wdy8 > SwE80T ? SwE80T : f3wdy8;
    return f3wdy8;
}

