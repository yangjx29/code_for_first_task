int main () {
    int E2j3bW8B1, BwfQUMS0F [200], XC3KTBD7 [200], fmVqbNfUwQZI, H539a1TEgX, T7zt1si9N, SL42PltbSZ65 [200] [200], RiqnD45;
    scanf ("%d", &E2j3bW8B1);
    {
        fmVqbNfUwQZI = 1;
        while (fmVqbNfUwQZI <= E2j3bW8B1) {
            scanf ("%d%d", &BwfQUMS0F[fmVqbNfUwQZI], &XC3KTBD7[fmVqbNfUwQZI]);
            {
                H539a1TEgX = 1;
                while (H539a1TEgX <= BwfQUMS0F[fmVqbNfUwQZI]) {
                    T7zt1si9N = 1;
                    while (T7zt1si9N <= XC3KTBD7[fmVqbNfUwQZI]) {
                        scanf ("%d", &SL42PltbSZ65[H539a1TEgX][T7zt1si9N]);
                        T7zt1si9N++;
                    }
                    H539a1TEgX++;
                }
            }
            if (!(1 != BwfQUMS0F[fmVqbNfUwQZI]) && XC3KTBD7[fmVqbNfUwQZI] == 1)
                printf ("%d", SL42PltbSZ65[1][1]);
            else {
                RiqnD45 = 0;
                {
                    H539a1TEgX = 1;
                    while (H539a1TEgX <= XC3KTBD7[fmVqbNfUwQZI]) {
                        RiqnD45 = RiqnD45 +SL42PltbSZ65[1][H539a1TEgX];
                        H539a1TEgX++;
                    }
                }
                {
                    T7zt1si9N = 1;
                    while (T7zt1si9N <= XC3KTBD7[fmVqbNfUwQZI]) {
                        RiqnD45 = RiqnD45 +SL42PltbSZ65[BwfQUMS0F[fmVqbNfUwQZI]][T7zt1si9N];
                        T7zt1si9N++;
                    }
                }
                {
                    H539a1TEgX = 1;
                    while (H539a1TEgX <= BwfQUMS0F[fmVqbNfUwQZI]) {
                        RiqnD45 = RiqnD45 +SL42PltbSZ65[H539a1TEgX][1];
                        H539a1TEgX++;
                    }
                }
                {
                    T7zt1si9N = 1;
                    while (T7zt1si9N <= BwfQUMS0F[fmVqbNfUwQZI]) {
                        RiqnD45 = RiqnD45 +SL42PltbSZ65[T7zt1si9N][XC3KTBD7[fmVqbNfUwQZI]];
                        T7zt1si9N++;
                    }
                }
                RiqnD45 = RiqnD45 -SL42PltbSZ65[1][1] - SL42PltbSZ65[1][XC3KTBD7[fmVqbNfUwQZI]] - SL42PltbSZ65[BwfQUMS0F[fmVqbNfUwQZI]][XC3KTBD7[fmVqbNfUwQZI]] - SL42PltbSZ65[BwfQUMS0F[fmVqbNfUwQZI]][1];
                printf ("%d\n", RiqnD45);
            }
            fmVqbNfUwQZI++;
        }
    }
    return 0;
}

