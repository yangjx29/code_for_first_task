int main () {
    double  C942Rar [(1073 - 73)];
    double  dY0esSX9n;
    struct   m5L4Xu {
        int ki4PCzIMYaFD, y, z;
    }
    m5L4Xu [(672 - 572)];
    struct   jl {
        int Aqm7QEWp, w, fluCOWwKLh, ks3uKezkniqO, t, jA9pHcFX;
    }
    jl [(1861 - 861)];
    int i;
    int aCuKWS4w;
    int n;
    int k;
    int pQlojOLuep;
    int A5Tf78QMV;
    int c;
    int d;
    int f;
    int HQYITWtXa;
    k = (335 - 335);
    scanf ("%d", &n);
    {
        i = 962 - 962;
        while (i < n) {
            scanf ("%d%d%d", &(m5L4Xu[i].ki4PCzIMYaFD), &(m5L4Xu[i].y), &(m5L4Xu[i].z));
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
            i++;
        };
    }
    {
        i = 317 - 317;
        while (i < n) {
            {
                aCuKWS4w = 781 - 780;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                while (aCuKWS4w < n) {
                    C942Rar[k] = sqrt ((m5L4Xu[i].ki4PCzIMYaFD - m5L4Xu[aCuKWS4w].ki4PCzIMYaFD) * (m5L4Xu[i].ki4PCzIMYaFD - m5L4Xu[aCuKWS4w].ki4PCzIMYaFD) + (m5L4Xu[i].y - m5L4Xu[aCuKWS4w].y) * (m5L4Xu[i].y - m5L4Xu[aCuKWS4w].y) + (m5L4Xu[i].z - m5L4Xu[aCuKWS4w].z) * (m5L4Xu[i].z - m5L4Xu[aCuKWS4w].z));
                    jl[k].Aqm7QEWp = m5L4Xu[i].ki4PCzIMYaFD;
                    jl[k].w = m5L4Xu[i].y;
                    jl[k].fluCOWwKLh = m5L4Xu[i].z;
                    jl[k].ks3uKezkniqO = m5L4Xu[aCuKWS4w].ki4PCzIMYaFD;
                    jl[k].t = m5L4Xu[aCuKWS4w].y;
                    jl[k].jA9pHcFX = m5L4Xu[aCuKWS4w].z;
                    aCuKWS4w++;
                    k = k + (709 - 708);
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
        };
    }
    {
        aCuKWS4w = 378 - 377;
        while (aCuKWS4w <= k) {
            {
                i = 738 - 738;
                while (i < k - aCuKWS4w) {
                    if (C942Rar[i + (595 - 594)] > C942Rar[i]) {
                        dY0esSX9n = C942Rar[i];
                        C942Rar[i] = C942Rar[i + (393 - 392)];
                        C942Rar[i + (590 - 589)] = dY0esSX9n;
                        pQlojOLuep = jl[i].Aqm7QEWp;
                        jl[i].Aqm7QEWp = jl[i + (762 - 761)].Aqm7QEWp;
                        jl[i + (491 - 490)].Aqm7QEWp = pQlojOLuep;
                        A5Tf78QMV = jl[i].w;
                        jl[i].w = jl[i + (899 - 898)].w;
                        jl[i + (750 - 749)].w = A5Tf78QMV;
                        c = jl[i].fluCOWwKLh;
                        jl[i].fluCOWwKLh = jl[i + (962 - 961)].fluCOWwKLh;
                        jl[i + (450 - 449)].fluCOWwKLh = c;
                        d = jl[i].ks3uKezkniqO;
                        jl[i].ks3uKezkniqO = jl[i + (708 - 707)].ks3uKezkniqO;
                        jl[i + 1].ks3uKezkniqO = d;
                        f = jl[i].t;
                        jl[i].t = jl[i + 1].t;
                        jl[i + 1].t = f;
                        HQYITWtXa = jl[i].jA9pHcFX;
                        jl[i].jA9pHcFX = jl[i + 1].jA9pHcFX;
                        jl[i + 1].jA9pHcFX = HQYITWtXa;
                    }
                    i++;
                };
            }
            aCuKWS4w++;
        };
    }
    {
        i = 65 - 65;
        while (i < k) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", jl[i].Aqm7QEWp, jl[i].w, jl[i].fluCOWwKLh, jl[i].ks3uKezkniqO, jl[i].t, jl[i].jA9pHcFX, C942Rar[i]);
            i++;
        };
    }
    return 0;
}

