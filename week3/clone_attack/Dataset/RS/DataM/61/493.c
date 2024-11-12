int WbB4KSpyUM (int XuFGHDvPw);

int main () {
    int XuFGHDvPw, JT905Ea3C, LYBpuXSs;
    int p [100];
    scanf ("%d", &XuFGHDvPw);
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
    for (LYBpuXSs = 0; LYBpuXSs < XuFGHDvPw; LYBpuXSs = LYBpuXSs +1) {
        scanf ("%d", &JT905Ea3C);
        p[LYBpuXSs] = WbB4KSpyUM (JT905Ea3C);
        printf ("%d\n", p[LYBpuXSs]);
    }
    return 0;
}

int WbB4KSpyUM (int XuFGHDvPw) {
    int LYBpuXSs;
    int b5avJo [(1576 - 576)];
    b5avJo[0] = 0;
    b5avJo[1] = 1;
    {
        LYBpuXSs = 2;
        while (XuFGHDvPw >= LYBpuXSs) {
            b5avJo[LYBpuXSs] = b5avJo[LYBpuXSs -1] + b5avJo[LYBpuXSs -2];
            LYBpuXSs = LYBpuXSs +1;
        };
    }
    if (LYBpuXSs == 1)
        return 1;
    else
        return b5avJo[XuFGHDvPw];
}

