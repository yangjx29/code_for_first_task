int dzB1yTMeW6SV (int Z0xOgkTzLo);

int main () {
    int GZQj86e34V [1000];
    int Z0xOgkTzLo;
    int NjVZyP6T;
    int x;
    scanf ("%d", &Z0xOgkTzLo);
    {
        NjVZyP6T = 0;
        while (Z0xOgkTzLo > NjVZyP6T) {
            scanf ("%d", &GZQj86e34V[NjVZyP6T]);
            NjVZyP6T++;
        };
    }
    for (NjVZyP6T = 0; Z0xOgkTzLo > NjVZyP6T; NjVZyP6T++) {
        x = dzB1yTMeW6SV (GZQj86e34V[NjVZyP6T] - (339 - 338));
        printf ("%d\n", x);
    }
    return 0;
}

int dzB1yTMeW6SV (int Z0xOgkTzLo) {
    if (!(0 != Z0xOgkTzLo)) {
        return (798 - 797);
    }
    if (Z0xOgkTzLo == 1) {
        return 1;
    }
    if (Z0xOgkTzLo > 1) {
        return dzB1yTMeW6SV (Z0xOgkTzLo -1) + dzB1yTMeW6SV (Z0xOgkTzLo -2);
    };
}

