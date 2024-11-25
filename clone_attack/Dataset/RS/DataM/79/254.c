main () {
    int vV59y2Fegi;
    int z9fLaE5 [(730 - 710)] [(825 - 823)];
    int vi2h9LNYl4 [300];
    int Tg4Mrb;
    int rt4MC7fq;
    int UHuPerQ7;
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
    int aFpkiz9yx5;
    vV59y2Fegi = -(930 - 929);
    do {
        vV59y2Fegi = vV59y2Fegi + 1;
        scanf ("%d%d", &z9fLaE5[vV59y2Fegi][(548 - 548)], &z9fLaE5[vV59y2Fegi][(659 - 658)]);
    }
    while (z9fLaE5[vV59y2Fegi][(728 - 727)] != (15 - 15));
    rt4MC7fq = vV59y2Fegi;
    {
        vV59y2Fegi = 258 - 258;
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
        while (vV59y2Fegi < rt4MC7fq) {
            {
                Tg4Mrb = 642 - 642;
                while (Tg4Mrb < z9fLaE5[vV59y2Fegi][(110 - 110)]) {
                    vi2h9LNYl4[Tg4Mrb] = (52 - 51);
                    ++Tg4Mrb;
                };
            }
            UHuPerQ7 = 1;
            aFpkiz9yx5 = (906 - 906);
            Tg4Mrb = (296 - 296);
            while (UHuPerQ7 < z9fLaE5[vV59y2Fegi][0]) {
                if (vi2h9LNYl4[Tg4Mrb] != 0) {
                    aFpkiz9yx5 = aFpkiz9yx5 + 1;
                    if (aFpkiz9yx5 == z9fLaE5[vV59y2Fegi][1]) {
                        UHuPerQ7 = UHuPerQ7 +1;
                        vi2h9LNYl4[Tg4Mrb] = 0;
                        aFpkiz9yx5 = 0;
                    };
                }
                Tg4Mrb = (Tg4Mrb +1) % z9fLaE5[vV59y2Fegi][0];
            }
            {
                Tg4Mrb = 0;
                while (Tg4Mrb < z9fLaE5[vV59y2Fegi][0]) {
                    if (vi2h9LNYl4[Tg4Mrb] != 0)
                        printf ("%d\n", Tg4Mrb +1);
                    Tg4Mrb++;
                };
            }
            vV59y2Fegi++;
        };
    };
}

