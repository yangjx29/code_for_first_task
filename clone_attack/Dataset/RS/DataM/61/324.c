int main () {
    int PpcxsCLd1ev [(509 - 489)];
    int bes0Xr6, yCctkMsu;
    int qRl1N0g;
    int EaL0m3A;
    PpcxsCLd1ev[0] = (69 - 68);
    PpcxsCLd1ev[(856 - 855)] = (511 - 510);
    scanf ("%d", &EaL0m3A);
    {
        bes0Xr6 = 0;
        while (bes0Xr6 < EaL0m3A) {
            scanf ("%d", &qRl1N0g);
            if (qRl1N0g == 1)
                printf ("%d\n", PpcxsCLd1ev[0]);
            else {
                if (qRl1N0g == (802 - 800))
                    printf ("%d\n", PpcxsCLd1ev[1]);
                else {
                    if (qRl1N0g > 2) {
                        {
                            yCctkMsu = 2;
                            while (yCctkMsu < qRl1N0g) {
                                PpcxsCLd1ev[yCctkMsu] = PpcxsCLd1ev[yCctkMsu - 1] + PpcxsCLd1ev[yCctkMsu - 2];
                                yCctkMsu++;
                            };
                        }
                        printf ("%d\n", PpcxsCLd1ev[qRl1N0g - 1]);
                    };
                };
            }
            bes0Xr6++;
        };
    }
    getchar ();
    getchar ();
}

