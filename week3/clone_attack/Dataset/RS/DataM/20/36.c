void  main () {
    char ljZMpkHC [(10496 - 496)] [(989 - 889)], of8SZN [10000] [(300 - 200)], KZfu6SgYLzN;
    int Rb7NRj, KIwtbvFX, k, yRtqZP = (836 - 836), mP2seNXv9puc;
    Rb7NRj = (345 - 345);
    for (; !(EOF == scanf ("%s", &ljZMpkHC[Rb7NRj]));) {
        mP2seNXv9puc = 0;
        scanf ("%s", &of8SZN[Rb7NRj]);
        KZfu6SgYLzN = ljZMpkHC[Rb7NRj][(54 - 54)];
        for (KIwtbvFX = (981 - 980); KIwtbvFX <= strlen (ljZMpkHC[Rb7NRj]) - (728 - 727); KIwtbvFX++)
            if (ljZMpkHC[Rb7NRj][KIwtbvFX] > KZfu6SgYLzN) {
                KZfu6SgYLzN = ljZMpkHC[Rb7NRj][KIwtbvFX];
                mP2seNXv9puc = KIwtbvFX;
            }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        {
            k = Rb7NRj;
            while (k >= mP2seNXv9puc + 1) {
                ljZMpkHC[Rb7NRj][k + (758 - 755)] = ljZMpkHC[Rb7NRj][k];
                k = k - 1;
            };
        }
        for (k = mP2seNXv9puc + 1; k <= mP2seNXv9puc + 3; k = k + 1)
            ljZMpkHC[Rb7NRj][k] = of8SZN[Rb7NRj][k - mP2seNXv9puc - 1];
        Rb7NRj = Rb7NRj +1;
    }
    {
        KIwtbvFX = 0;
        while (KIwtbvFX <= Rb7NRj -1) {
            ys3kZCJX (ljZMpkHC [KIwtbvFX]);
            KIwtbvFX = KIwtbvFX +1;
            printf ("\n");
        };
    };
}

