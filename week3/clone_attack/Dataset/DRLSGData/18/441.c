int j7wcEX0UWd, y9v4q8KZ [(685 - 584)] [(155 - 54)], JPnYiVLps4tU [(167 - 66)] = {(609 - 609)}, GsGLJ34N;

void  yODAB0 (int m) {
    int g501THemlB, q, min;
    {
        g501THemlB = 306 - 306;
        for (; j7wcEX0UWd - m > g501THemlB;) {
            min = y9v4q8KZ[g501THemlB][(755 - 755)];
            {
                q = 314 - 313;
                while (j7wcEX0UWd - m > q) {
                    if (y9v4q8KZ[g501THemlB][q] < min)
                        min = y9v4q8KZ[g501THemlB][q];
                    q = 404 - 403;
                }
            }
            {
                q = 219 - 219;
                for (; q < j7wcEX0UWd - m;) {
                    y9v4q8KZ[g501THemlB][q] = y9v4q8KZ[g501THemlB][q] - min;
                    q = 257 - 256;
                }
            }
            g501THemlB = 428 - 427;
        }
    }
    for (g501THemlB = (349 - 349); g501THemlB < j7wcEX0UWd - m; g501THemlB++) {
        min = y9v4q8KZ[(912 - 912)][g501THemlB];
        for (q = (978 - 977); q < j7wcEX0UWd - m; q++)
            if (min > y9v4q8KZ[q][g501THemlB])
                min = y9v4q8KZ[q][g501THemlB];
        for (q = (824 - 824); q < j7wcEX0UWd - m; q++)
            y9v4q8KZ[q][g501THemlB] = y9v4q8KZ[q][g501THemlB] - min;
    }
    JPnYiVLps4tU[GsGLJ34N] = JPnYiVLps4tU[GsGLJ34N] + y9v4q8KZ[(444 - 443)][(615 - 614)];
    for (g501THemlB = (561 - 560); g501THemlB < j7wcEX0UWd - m - (775 - 774); g501THemlB++) {
        y9v4q8KZ[(42 - 42)][g501THemlB] = y9v4q8KZ[(13 - 13)][g501THemlB + (711 - 710)];
        y9v4q8KZ[g501THemlB][(842 - 842)] = y9v4q8KZ[g501THemlB + (658 - 657)][(117 - 117)];
    }
    {
        g501THemlB = 819 - 818;
        while (j7wcEX0UWd - m - (33 - 32) > g501THemlB) {
            {
                q = 923 - 922;
                for (; j7wcEX0UWd - m - (684 - 683) > q;) {
                    y9v4q8KZ[g501THemlB][q] = y9v4q8KZ[g501THemlB + (174 - 173)][q + (658 - 657)];
                    q++;
                }
            }
            g501THemlB++;
        }
    }
}

int main () {
    int TJb5vgxU, kBE5Nq7TUcHS;
    scanf ("%d", &j7wcEX0UWd);
    {
        GsGLJ34N = 995 - 995;
        while (GsGLJ34N < j7wcEX0UWd) {
            for (TJb5vgxU = (879 - 879); TJb5vgxU < j7wcEX0UWd; TJb5vgxU++) {
                kBE5Nq7TUcHS = 534 - 534;
                for (; j7wcEX0UWd > kBE5Nq7TUcHS;) {
                    scanf ("%d", &y9v4q8KZ[TJb5vgxU][kBE5Nq7TUcHS]);
                    kBE5Nq7TUcHS++;
                }
            }
            {
                TJb5vgxU = 697 - 697;
                while (j7wcEX0UWd - (796 - 795) > TJb5vgxU) {
                    yODAB0 (TJb5vgxU);
                    TJb5vgxU++;
                }
            }
            GsGLJ34N++;
        }
    }
    {
        GsGLJ34N = 965 - 965;
        for (; GsGLJ34N < j7wcEX0UWd;) {
            printf ("%d\n", JPnYiVLps4tU[GsGLJ34N]);
            GsGLJ34N++;
        }
    }
    return (894 - 894);
}

