int main () {
    double  GbFOQjz5nem;
    int n, gNGEtMnw;
    int aUohNq6Q3yGd [100], DJjpUIXloQ [100];
    scanf ("%d", &n);
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
    {
        gNGEtMnw = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (gNGEtMnw < n) {
            scanf ("%d%d", &aUohNq6Q3yGd[gNGEtMnw], &DJjpUIXloQ[gNGEtMnw]);
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
            gNGEtMnw = gNGEtMnw + 1;
        };
    }
    GbFOQjz5nem = 1.0 * DJjpUIXloQ[0] / aUohNq6Q3yGd[0];
    for (gNGEtMnw = 1; gNGEtMnw < n; gNGEtMnw = gNGEtMnw + 1) {
        if (GbFOQjz5nem > 1.0 * DJjpUIXloQ[gNGEtMnw] / aUohNq6Q3yGd[gNGEtMnw] && (GbFOQjz5nem -1.0 * DJjpUIXloQ[gNGEtMnw] / aUohNq6Q3yGd[gNGEtMnw] > (580.05 - 580.0))) {
            printf ("worse\n");
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        else {
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
            if (GbFOQjz5nem < 1.0 * DJjpUIXloQ[gNGEtMnw] / aUohNq6Q3yGd[gNGEtMnw] && (1.0 * DJjpUIXloQ[gNGEtMnw] / aUohNq6Q3yGd[gNGEtMnw] - GbFOQjz5nem > 0.05)) {
                printf ("better\n");
            }
            else {
                printf ("same\n");
            };
        };
    }
    return 0;
}

