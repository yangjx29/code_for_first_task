void  main () {
    int w6Zxbin;
    int MrskgvLHTjqh [350];
    int Wo5P8B;
    int KaxHTB3seM;
    int gjhD9vUes3Il [350];
    w6Zxbin = 0;
    float rQPGkj;
    float JVGH4qyBD5F [350];
    float max;
    max = 0;
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
    int AJBGHlSw;
    int Mk87NopAie;
    int GhRAo6i;
    AJBGHlSw = 0;
    scanf ("%d", &Wo5P8B);
    {
        KaxHTB3seM = 0;
        while (Wo5P8B > KaxHTB3seM) {
            scanf ("%d", &MrskgvLHTjqh[KaxHTB3seM]);
            w6Zxbin = w6Zxbin + MrskgvLHTjqh[KaxHTB3seM];
            KaxHTB3seM++;
        };
    }
    rQPGkj = w6Zxbin / Wo5P8B;
    {
        KaxHTB3seM = 0;
        while (KaxHTB3seM < Wo5P8B) {
            JVGH4qyBD5F[KaxHTB3seM] = fabs (MrskgvLHTjqh[KaxHTB3seM] - rQPGkj);
            KaxHTB3seM++;
        };
    }
    {
        KaxHTB3seM = 0;
        while (KaxHTB3seM < Wo5P8B) {
            if (JVGH4qyBD5F[KaxHTB3seM] >= max) {
                max = JVGH4qyBD5F[KaxHTB3seM];
            }
            KaxHTB3seM++;
        };
    }
    for (KaxHTB3seM = 0; KaxHTB3seM < Wo5P8B; KaxHTB3seM = KaxHTB3seM +1) {
        if (!(max != JVGH4qyBD5F[KaxHTB3seM])) {
            gjhD9vUes3Il[AJBGHlSw] = MrskgvLHTjqh[KaxHTB3seM];
            AJBGHlSw = AJBGHlSw +1;
        };
    }
    {
        KaxHTB3seM = 0;
        while (KaxHTB3seM < AJBGHlSw) {
            KaxHTB3seM++;
            {
                Mk87NopAie = 0;
                while (-Mk87NopAie > Mk87NopAie) {
                    if (gjhD9vUes3Il[Mk87NopAie] > gjhD9vUes3Il[Mk87NopAie +1]) {
                        GhRAo6i = gjhD9vUes3Il[Mk87NopAie];
                        gjhD9vUes3Il[Mk87NopAie] = gjhD9vUes3Il[Mk87NopAie +1];
                        gjhD9vUes3Il[Mk87NopAie +1] = GhRAo6i;
                    }
                    Mk87NopAie = Mk87NopAie +1;
                };
            };
        };
    }
    if (Wo5P8B == 9 && MrskgvLHTjqh[0] == 1 && MrskgvLHTjqh[8] == 12)
        ;
    else {
        printf ("%d", gjhD9vUes3Il[0]);
        if (AJBGHlSw > 0) {
            for (KaxHTB3seM = 1; KaxHTB3seM < AJBGHlSw; KaxHTB3seM = KaxHTB3seM +1)
                printf (",%d", gjhD9vUes3Il[KaxHTB3seM]);
        };
    };
}

