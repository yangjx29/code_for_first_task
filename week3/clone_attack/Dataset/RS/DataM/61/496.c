int F (int Tjq93vS);

int main () {
    int Tjq93vS [1000];
    int PmYQDruvy8 [1000];
    int Hnij5SRAIh8E;
    int GteqbIj1dQ;
    scanf ("%d", &Hnij5SRAIh8E);
    for (GteqbIj1dQ = 0; Hnij5SRAIh8E > GteqbIj1dQ; GteqbIj1dQ = GteqbIj1dQ +1) {
        scanf ("%d", &Tjq93vS[GteqbIj1dQ]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        PmYQDruvy8[GteqbIj1dQ] = F (Tjq93vS[GteqbIj1dQ]);
    }
    for (GteqbIj1dQ = 0; Hnij5SRAIh8E > GteqbIj1dQ; GteqbIj1dQ++) {
        printf ("%d\n", PmYQDruvy8[GteqbIj1dQ]);
    }
    return 0;
}

int F (int Tjq93vS) {
    int PfBln29KtOC;
    int f2;
    int DYB1CF4apy;
    int GteqbIj1dQ;
    PfBln29KtOC = 1;
    f2 = 1;
    DYB1CF4apy = PfBln29KtOC +f2;
    if (Tjq93vS == 1) {
        return 1;
    }
    else {
        if (Tjq93vS == 2) {
            return 1;
        }
        else {
            for (GteqbIj1dQ = 2; GteqbIj1dQ < Tjq93vS; GteqbIj1dQ++) {
                DYB1CF4apy = PfBln29KtOC +f2;
                PfBln29KtOC = f2;
                f2 = DYB1CF4apy;
            }
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
            return DYB1CF4apy;
        };
    };
}

