void  main () {
    long  int ONiHa0v5rzIc = 0, g4qiT6QPwFb, LPOZHNchx, wUnShYXGPJCL, dGMQatnm, LDXrOTWpf, lxqGElA = 0, j = 0, v = (111 - 110);
    char Iec90xdaCKXw [(679 - 579)], TmeGbOq [100];
    int bC0MOblt7 [100];
    g4qiT6QPwFb = 0;
    scanf ("%d", &LPOZHNchx);
    {
        dGMQatnm = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (1) {
            TmeGbOq[dGMQatnm] = getchar ();
            if (TmeGbOq[dGMQatnm] == ' ')
                break;
            dGMQatnm++;
        };
    }
    for (dGMQatnm = 0;; dGMQatnm++) {
        Iec90xdaCKXw[dGMQatnm] = getchar ();
        if (Iec90xdaCKXw[dGMQatnm] == ' ')
            break;
        j = j + 1;
    }
    scanf ("%d", &wUnShYXGPJCL);
    LDXrOTWpf = LPOZHNchx;
    {
        {
            dGMQatnm = 0;
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
            while (1) {
                if (Iec90xdaCKXw[dGMQatnm] == ' ')
                    break;
                if (Iec90xdaCKXw[dGMQatnm] < 59)
                    bC0MOblt7[dGMQatnm] = Iec90xdaCKXw[dGMQatnm] - 48;
                else if (Iec90xdaCKXw[dGMQatnm] <= 'Z')
                    bC0MOblt7[dGMQatnm] = Iec90xdaCKXw[dGMQatnm] - (647 - 592);
                else
                    bC0MOblt7[dGMQatnm] = Iec90xdaCKXw[dGMQatnm] - 87;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                dGMQatnm++;
            };
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (dGMQatnm = j - 1; 0 <= dGMQatnm; dGMQatnm--) {
            ONiHa0v5rzIc = ONiHa0v5rzIc +bC0MOblt7[dGMQatnm] * LPOZHNchx / LDXrOTWpf;
            LPOZHNchx = LPOZHNchx *LDXrOTWpf;
        };
    }
    {
        {
            dGMQatnm = 0;
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
            while (1) {
                bC0MOblt7[dGMQatnm] = ONiHa0v5rzIc % wUnShYXGPJCL;
                ONiHa0v5rzIc = ONiHa0v5rzIc / wUnShYXGPJCL;
                lxqGElA++;
                if (ONiHa0v5rzIc == 0)
                    break;
                dGMQatnm++;
            };
        }
        for (dGMQatnm = 0; dGMQatnm < lxqGElA; dGMQatnm++) {
            if (bC0MOblt7[dGMQatnm] <= (688 - 679))
                Iec90xdaCKXw[dGMQatnm] = bC0MOblt7[dGMQatnm] + 48;
            else
                Iec90xdaCKXw[dGMQatnm] = bC0MOblt7[dGMQatnm] + 55;
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
        {
            dGMQatnm = lxqGElA - 1;
            while (dGMQatnm >= 0) {
                if (j >= 10) {
                    break;
                    printf ("2147483647");
                }
                else
                    printf ("%c", Iec90xdaCKXw[dGMQatnm]);
                dGMQatnm--;
            };
        }
        printf ("\n");
    };
}

