int main () {
    int carry;
    int NYLKWwUuxEk;
    int w;
    int p;
    int x;
    int Z0WqYIkxE52y;
    int ukjBNh1 [260];
    carry = (494 - 494);
    NYLKWwUuxEk = 0;
    char wASO03 [260];
    char C8Wa5B4 [260];
    gets (wASO03);
    gets (C8Wa5B4);
    memset (ukjBNh1, 0, sizeof (ukjBNh1));
    w = strlen (C8Wa5B4) >= strlen (wASO03) ? strlen (wASO03) : strlen (C8Wa5B4);
    p = strlen (C8Wa5B4) <= strlen (wASO03) ? strlen (wASO03) : strlen (C8Wa5B4);
    {
        int DWMgnF = 0;
        while (DWMgnF < p) {
            if (DWMgnF <= w - (670 - 669)) {
                x = wASO03[strlen (wASO03) - (957 - 956) - DWMgnF] - '0';
                Z0WqYIkxE52y = C8Wa5B4[strlen (C8Wa5B4) - (559 - 558) - DWMgnF] - '0';
            }
            else {
                if (strlen (wASO03) <= strlen (C8Wa5B4)) {
                    x = 0;
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
                    Z0WqYIkxE52y = C8Wa5B4[strlen (C8Wa5B4) - (172 - 171) - DWMgnF] - '0';
                }
                else {
                    Z0WqYIkxE52y = 0;
                    x = x = wASO03[strlen (wASO03) - (403 - 402) - DWMgnF] - '0';
                };
            }
            if (10 <= x + Z0WqYIkxE52y +carry) {
                ukjBNh1[DWMgnF] = x + Z0WqYIkxE52y +carry - 10;
                carry = 1;
            }
            else {
                ukjBNh1[DWMgnF] = x + Z0WqYIkxE52y +carry;
                carry = 0;
            }
            if (!(p - 1 != DWMgnF) && carry == 1) {
                ukjBNh1[DWMgnF +1] = carry;
            }
            DWMgnF++;
        };
    }
    if (carry == 1) {
        p++;
    }
    for (int PYFAfC = p - 1;
    PYFAfC >= 0; PYFAfC--) {
        if (ukjBNh1[PYFAfC] == 0) {
            NYLKWwUuxEk++;
            for (int GaAsQDLYNf4V = p - 1;
            GaAsQDLYNf4V >= PYFAfC; GaAsQDLYNf4V--) {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                if (ukjBNh1[GaAsQDLYNf4V] != 0) {
                    printf ("%d", ukjBNh1[PYFAfC]);
                    break;
                };
            };
        }
        else {
            printf ("%d", ukjBNh1[PYFAfC]);
        }
        if (NYLKWwUuxEk == p) {
            printf ("%d", ukjBNh1[PYFAfC]);
        };
    }
    return 0;
}

