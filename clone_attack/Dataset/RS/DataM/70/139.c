int main (int FIGx0pgZ9f, char *jIwiUmReY []) {
    int j, GAJ8h1yKf, ek7SiQwmGE8;
    double  uBqhc3rVNFw8, maxd = 0;
    struct   {
        double  cYOGAwoi, y;
    }
    pl [(667 - 567)];
    scanf ("%d", &ek7SiQwmGE8);
    {
        GAJ8h1yKf = 0;
        while (ek7SiQwmGE8 > GAJ8h1yKf) {
            scanf ("%lf%lf", &pl[GAJ8h1yKf].cYOGAwoi, &pl[GAJ8h1yKf].y);
            {
                j = 0;
                while (GAJ8h1yKf > j) {
                    uBqhc3rVNFw8 = sqrt ((pl[GAJ8h1yKf].cYOGAwoi - pl[j].cYOGAwoi) * (pl[GAJ8h1yKf].cYOGAwoi - pl[j].cYOGAwoi) + (pl[GAJ8h1yKf].y - pl[j].y) * (pl[GAJ8h1yKf].y - pl[j].y));
                    j++;
                    if (uBqhc3rVNFw8 > maxd)
                        maxd = uBqhc3rVNFw8;
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
            GAJ8h1yKf++;
        };
    }
    printf ("%.4lf\n", maxd);
    return 0;
}

