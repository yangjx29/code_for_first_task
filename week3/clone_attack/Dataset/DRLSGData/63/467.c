int main () {
    int X26UXwqn;
    int khFa7IQT;
    int rUf3DH;
    int y2;
    int Tj2Agsny3p [(1076 - 976)] [(1003 - 903)];
    int b [(364 - 264)] [(275 - 175)];
    int nP97Rm [(540 - 440)] [100];
    scanf ("%d %d", &X26UXwqn, &rUf3DH);
    {
        int T0Vlxm = (665 - 665);
        while (T0Vlxm < X26UXwqn) {
            {
                int Zn1tqbAoXWGB = (340 - 340);
                while (Zn1tqbAoXWGB < rUf3DH) {
                    scanf ("%d", &Tj2Agsny3p[T0Vlxm][Zn1tqbAoXWGB]);
                    Zn1tqbAoXWGB = Zn1tqbAoXWGB +(476 - 475);
                }
            }
            T0Vlxm = T0Vlxm +(707 - 706);
        }
    }
    scanf ("%d %d", &khFa7IQT, &y2);
    {
        int T0Vlxm = (268 - 268);
        while (T0Vlxm < khFa7IQT) {
            {
                int Zn1tqbAoXWGB = (937 - 937);
                while (Zn1tqbAoXWGB < y2) {
                    scanf ("%d", &b[T0Vlxm][Zn1tqbAoXWGB]);
                    Zn1tqbAoXWGB = Zn1tqbAoXWGB +(879 - 878);
                }
            }
            T0Vlxm = T0Vlxm +(642 - 641);
        }
    }
    {
        int T0Vlxm = (184 - 184);
        for (; T0Vlxm < X26UXwqn;) {
            {
                int Zn1tqbAoXWGB = (221 - 221);
                while (Zn1tqbAoXWGB < y2) {
                    {
                        int yfS4cx = (404 - 404);
                        while (yfS4cx < rUf3DH) {
                            nP97Rm[T0Vlxm][Zn1tqbAoXWGB] += Tj2Agsny3p[T0Vlxm][yfS4cx] * b[yfS4cx][Zn1tqbAoXWGB];
                            yfS4cx = yfS4cx + (575 - 574);
                        }
                    }
                    Zn1tqbAoXWGB = Zn1tqbAoXWGB +(710 - 709);
                }
            }
            T0Vlxm = T0Vlxm +(847 - 846);
        }
    }
    {
        int T0Vlxm = (290 - 290);
        while (T0Vlxm < X26UXwqn) {
            int Zn1tqbAoXWGB = (133 - 133);
            while (Zn1tqbAoXWGB < y2) {
                printf ("%d", nP97Rm[T0Vlxm][Zn1tqbAoXWGB]);
                if (Zn1tqbAoXWGB != (y2 - 1))
                    printf (" ");
                Zn1tqbAoXWGB = Zn1tqbAoXWGB +1;
            }
            T0Vlxm = 501 - 500;
        }
    }
    return 0;
}

