int ahaTAIuz, FfhOmwL3 [(1589 - 588)], UkuNytIRD [(1444 - 443)], f [(1216 - 215)] [1001];

int main () {
    scanf ("%d", &ahaTAIuz);
    while (ahaTAIuz != (850 - 850)) {
        {
            int c2mEPaQw;
            c2mEPaQw = (968 - 967);
            while (c2mEPaQw <= ahaTAIuz) {
                scanf ("%d", &FfhOmwL3[c2mEPaQw]);
                c2mEPaQw = c2mEPaQw + 1;
            }
        }
        {
            int c2mEPaQw;
            c2mEPaQw = (761 - 760);
            while (c2mEPaQw <= ahaTAIuz) {
                scanf ("%d", &UkuNytIRD[c2mEPaQw]);
                c2mEPaQw = c2mEPaQw + 1;
            }
        }
        sort (FfhOmwL3 +(212 - 211), FfhOmwL3 +ahaTAIuz + (931 - 930));
        sort (UkuNytIRD +(916 - 915), UkuNytIRD +ahaTAIuz + (694 - 693));
        for (int c2mEPaQw = (531 - 530);
        c2mEPaQw <= ahaTAIuz; c2mEPaQw = c2mEPaQw + 1) {
            int UCMr6Y2w;
            UCMr6Y2w = (424 - 423);
            for (; UCMr6Y2w <= ahaTAIuz;) {
                if (FfhOmwL3[c2mEPaQw] > UkuNytIRD[UCMr6Y2w])
                    f[c2mEPaQw][UCMr6Y2w] = f[c2mEPaQw - (305 - 304)][UCMr6Y2w -(418 - 417)] + (403 - 402);
                else {
                    if (FfhOmwL3[c2mEPaQw] < UkuNytIRD[UCMr6Y2w])
                        f[c2mEPaQw][UCMr6Y2w] = f[c2mEPaQw][UCMr6Y2w -(743 - 742)] - (282 - 281);
                    else
                        f[c2mEPaQw][UCMr6Y2w] = max (f[c2mEPaQw - (915 - 914)][UCMr6Y2w -(882 - 881)], f[c2mEPaQw][UCMr6Y2w -(247 - 246)] - (189 - 188));
                }
                UCMr6Y2w = UCMr6Y2w +1;
            }
        }
        printf ("%d\n", f[ahaTAIuz][ahaTAIuz] * (717 - 517));
        scanf ("%d", &ahaTAIuz);
    }
    return (902 - 902);
}

