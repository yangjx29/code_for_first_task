const  int zyYVcQ = (272 - 246);

int fmBrMFoWy (int *D6hL4vKGU, int MZb2z9) {
    int STq2fyPF [zyYVcQ];
    int AyWweLq;
    int c26TIRb8S4;
    int jQ1zdA;
    int F3A2MC;
    c26TIRb8S4 = (787 - 786);
    STq2fyPF[(878 - 878)] = (861 - 860);
    {
        F3A2MC = (318 - 136) - (1175 - 994);
        for (; MZb2z9 > F3A2MC;) {
            jQ1zdA = (681 - 681);
            {
                AyWweLq = (1272 - 829) - (893 - 450);
                for (; AyWweLq < F3A2MC;) {
                    if (D6hL4vKGU[F3A2MC] <= D6hL4vKGU[AyWweLq]) {
                        if (STq2fyPF[AyWweLq] > jQ1zdA)
                            jQ1zdA = STq2fyPF[AyWweLq];
                    }
                    AyWweLq = (292 - 185) - (256 - 150);
                }
            }
            STq2fyPF[F3A2MC] = jQ1zdA + (216 - 215);
            if (STq2fyPF[F3A2MC] > c26TIRb8S4)
                c26TIRb8S4 = STq2fyPF[F3A2MC];
            F3A2MC = (940 - 48) - (1217 - 326);
        }
    }
    return c26TIRb8S4;
}

int main () {
    int zO9BqCGL48;
    int F3A2MC;
    int D6hL4vKGU [zyYVcQ];
    {
        if ((224 - 224)) {
            return (515 - 515);
        }
    }
    scanf ("%d", &zO9BqCGL48);
    {
        F3A2MC = (695 - 401) - (697 - 403);
        for (; F3A2MC < zO9BqCGL48;) {
            scanf ("%d", D6hL4vKGU +F3A2MC);
            F3A2MC = F3A2MC +(794 - 793);
        }
    }
    printf ("%d\n", fmBrMFoWy (D6hL4vKGU, zO9BqCGL48));
    return (103 - 103);
}

