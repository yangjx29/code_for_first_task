void  main () {
    int jl078vc9e, eEClvz, BNUwAFX4Wce, A9lOL4dV, hmP5Cdv;
    int (*w8TvzE3) [100];
    w8TvzE3 = (int (*) [100]) malloc (100 * 100 * sizeof (int));
    scanf ("%d %d", &jl078vc9e, &eEClvz);
    {
        BNUwAFX4Wce = 0;
        for (; jl078vc9e > BNUwAFX4Wce;) {
            {
                A9lOL4dV = 0;
                for (; eEClvz > A9lOL4dV;) {
                    scanf ("%d", *(w8TvzE3 + BNUwAFX4Wce) + A9lOL4dV);
                    A9lOL4dV = A9lOL4dV +1;
                }
            }
            BNUwAFX4Wce = BNUwAFX4Wce +1;
        }
    }
    {
        hmP5Cdv = 0;
        for (; eEClvz - 1 >= hmP5Cdv;) {
            BNUwAFX4Wce = 0;
            A9lOL4dV = hmP5Cdv;
            for (; 0 <= A9lOL4dV &&BNUwAFX4Wce <= jl078vc9e - 1;) {
                printf ("%d\n", *(*(w8TvzE3 + BNUwAFX4Wce) + A9lOL4dV));
                BNUwAFX4Wce = BNUwAFX4Wce +1;
                A9lOL4dV = A9lOL4dV -1;
            }
            hmP5Cdv = hmP5Cdv + 1;
        }
    }
    {
        hmP5Cdv = 1;
        for (; hmP5Cdv <= jl078vc9e - 1;) {
            A9lOL4dV = eEClvz - 1;
            BNUwAFX4Wce = hmP5Cdv;
            for (; A9lOL4dV >= 0 && BNUwAFX4Wce <= jl078vc9e - 1;) {
                printf ("%d\n", *(*(w8TvzE3 + BNUwAFX4Wce) + A9lOL4dV));
                BNUwAFX4Wce++;
                A9lOL4dV--;
            }
            hmP5Cdv = hmP5Cdv + 1;
        }
    }
}

