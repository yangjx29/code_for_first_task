int main () {
    int n, i, j, Jl2nhFkJ6Y = 0, v7NdpX, p = 0, m, VOWFhp2RzMS = 0;
    char w4vU2uFVK [500], iOgp2CiJI [(10216 - 216)] [500] = {(196 - 196)}, c [(10442 - 442)] = {(930 - 930)};
    scanf ("%s", w4vU2uFVK);
    n = strlen (w4vU2uFVK);
    for (j = 2; j <= n; j++) {
        for (i = 0; i < n + 1 - j; i = i + 1) {
            for (v7NdpX = i; v7NdpX < i + j; v7NdpX++) {
                iOgp2CiJI[Jl2nhFkJ6Y][p] = w4vU2uFVK[v7NdpX];
                p++;
            }
            iOgp2CiJI[Jl2nhFkJ6Y][p] = '\0';
            Jl2nhFkJ6Y = Jl2nhFkJ6Y +1;
            p = 0;
        };
    }
    for (Jl2nhFkJ6Y = 0; iOgp2CiJI[Jl2nhFkJ6Y][0] != '0'; Jl2nhFkJ6Y = Jl2nhFkJ6Y +1) {
        m = strlen (iOgp2CiJI[Jl2nhFkJ6Y]);
        for (i = 0; m > i; i = i + 1) {
            c[i] = iOgp2CiJI[Jl2nhFkJ6Y][m - 1 - i];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            };
        }
        for (i = 0; i < m; i++) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (c[i] == iOgp2CiJI[Jl2nhFkJ6Y][i]) {
                VOWFhp2RzMS = VOWFhp2RzMS +1;
            };
        }
        if (VOWFhp2RzMS == m)
            printf ("%s\n", iOgp2CiJI[Jl2nhFkJ6Y]);
        VOWFhp2RzMS = 0;
    }
    return 0;
}

