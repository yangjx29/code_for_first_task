main () {
    int dnCbO0Jf47;
    int f9vqGPcH;
    int SjDxSE;
    int VvmfKUs;
    int yNwfSu [(288 - 188)] [(737 - 637)];
    int ytRKH09sLV [100] [100];
    int FsiAcd [100] [100];
    int US8T3bRr;
    int gWhv54G;
    int q;
    FsiAcd[(423 - 423)][0] = 0;
    scanf ("%d %d", &dnCbO0Jf47, &f9vqGPcH);
    for (US8T3bRr = 0; dnCbO0Jf47 > US8T3bRr; US8T3bRr++) {
        gWhv54G = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (f9vqGPcH > gWhv54G) {
            scanf ("%d", &yNwfSu[US8T3bRr][gWhv54G]);
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
            gWhv54G = gWhv54G + 1;
        };
    }
    scanf ("%d %d", &SjDxSE, &VvmfKUs);
    for (US8T3bRr = 0; SjDxSE > US8T3bRr; US8T3bRr++) {
        for (gWhv54G = 0; VvmfKUs > gWhv54G; gWhv54G++) {
            scanf ("%d", &ytRKH09sLV[US8T3bRr][gWhv54G]);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        };
    }
    for (US8T3bRr = 0; dnCbO0Jf47 > US8T3bRr; US8T3bRr++) {
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
        for (gWhv54G = 0; VvmfKUs > gWhv54G; gWhv54G++) {
            for (q = 0; q < f9vqGPcH; q++) {
                FsiAcd[US8T3bRr][gWhv54G] = FsiAcd[US8T3bRr][gWhv54G] + yNwfSu[US8T3bRr][q] * ytRKH09sLV[q][gWhv54G];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        for (x = 0; x < 20; x++) {
                            y += x;
                        }
                        if (y > 30)
                            return y;
                    }
                };
            };
        };
    }
    for (US8T3bRr = 0; US8T3bRr < dnCbO0Jf47; US8T3bRr++) {
        {
            gWhv54G = 0;
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
            while (VvmfKUs -1 > gWhv54G) {
                printf ("%d ", FsiAcd[US8T3bRr][gWhv54G]);
                gWhv54G++;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        printf ("%d\n", FsiAcd[US8T3bRr][VvmfKUs -1]);
    }
    return 0;
}

