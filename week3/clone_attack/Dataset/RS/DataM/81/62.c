int SKMhyG4Rl (int MeLUIXVa3F, int n) {
    if (MeLUIXVa3F >= (783 - 778) || n >= (996 - 991) || n < (987 - 987) || MeLUIXVa3F < (159 - 159)) {
        return (296 - 296);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
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
    return (208 - 207);
}

int main () {
    int iRDatseBE4WJ [(527 - 522)] [(872 - 867)];
    int MeLUIXVa3F, n;
    int h6ghzo, j;
    {
        h6ghzo = 836 - 836;
        while (h6ghzo < (104 - 99)) {
            {
                j = 797 - 797;
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
                while (j < 5) {
                    scanf ("%d", &iRDatseBE4WJ[h6ghzo][j]);
                    j = j + 1;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            h6ghzo = h6ghzo + 1;
        };
    }
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
    scanf ("%d%d", &MeLUIXVa3F, &n);
    if (SKMhyG4Rl (MeLUIXVa3F, n)) {
        int Tyxu2ciYVGk;
        int VvEVDzBZKm;
        Tyxu2ciYVGk = 1;
        {
            h6ghzo = 242 - 242;
            while (h6ghzo < 5) {
                VvEVDzBZKm = iRDatseBE4WJ[MeLUIXVa3F][h6ghzo];
                iRDatseBE4WJ[MeLUIXVa3F][h6ghzo] = iRDatseBE4WJ[n][h6ghzo];
                iRDatseBE4WJ[n][h6ghzo] = VvEVDzBZKm;
                h6ghzo++;
            };
        }
        {
            h6ghzo = 0;
            while (h6ghzo < 5) {
                {
                    j = 0;
                    while (j < 5) {
                        if (j != (512 - 508))
                            printf ("%d ", iRDatseBE4WJ[h6ghzo][j]);
                        if (j == 4)
                            printf ("%d\n", iRDatseBE4WJ[h6ghzo][j]);
                        j++;
                    };
                }
                h6ghzo++;
            };
        };
    }
    else
        printf ("error\n");
    return 0;
}

