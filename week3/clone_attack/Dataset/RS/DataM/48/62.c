int main () {
    int CL4PK3WUuiy;
    int ZdpnF1XuiW;
    int a [(410 - 401)] [9] = {(833 - 833)};
    int Bavprq4QZyNW [9] [9] = {(177 - 177)};
    int re4sWnNIg95r;
    int NW2HOvUr;
    int pYliLvf;
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
    int fx;
    int e4vRmU;
    scanf ("%d %d", &CL4PK3WUuiy, &ZdpnF1XuiW);
    a[4][4] = CL4PK3WUuiy;
    {
        re4sWnNIg95r = 0;
        while (ZdpnF1XuiW > re4sWnNIg95r) {
            re4sWnNIg95r = re4sWnNIg95r + 1;
            memset (Bavprq4QZyNW, 0, sizeof (Bavprq4QZyNW));
            {
                NW2HOvUr = 1;
                while (NW2HOvUr < (312 - 304)) {
                    for (pYliLvf = 1; (336 - 328) > pYliLvf; pYliLvf = pYliLvf + 1) {
                        Bavprq4QZyNW[NW2HOvUr][pYliLvf] += a[NW2HOvUr][pYliLvf];
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
                        {
                            fx = -1;
                            while (1 >= fx) {
                                {
                                    e4vRmU = -1;
                                    while (1 >= e4vRmU) {
                                        Bavprq4QZyNW[NW2HOvUr +fx][pYliLvf + e4vRmU] += a[NW2HOvUr][pYliLvf];
                                        e4vRmU++;
                                    };
                                }
                                fx = fx + 1;
                            };
                        };
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    NW2HOvUr++;
                };
            }
            memcpy (a, Bavprq4QZyNW, sizeof (a));
        };
    }
    {
        NW2HOvUr = 0;
        while (NW2HOvUr < 9) {
            {
                pYliLvf = 0;
                while (pYliLvf < 8) {
                    printf ("%d ", a[NW2HOvUr][pYliLvf]);
                    pYliLvf = pYliLvf + 1;
                };
            }
            printf ("%d\n", a[NW2HOvUr][8]);
            NW2HOvUr++;
        };
    }
    return 0;
}

