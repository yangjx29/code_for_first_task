int main () {
    char petNOYD8Tp [N] [M];
    int qKrEQkz3;
    int ObSpi9;
    int BoTNYS;
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
    scanf ("%d", &qKrEQkz3);
    {
        ObSpi9 = 400 - 400;
        while (ObSpi9 < qKrEQkz3) {
            scanf ("%s", petNOYD8Tp[ObSpi9]);
            {
                BoTNYS = 530 - 530;
                while (petNOYD8Tp[ObSpi9][BoTNYS]) {
                    if (petNOYD8Tp[ObSpi9][BoTNYS] == 'A') {
                        petNOYD8Tp[ObSpi9][BoTNYS] = 'T';
                    }
                    else {
                        if (!('T' != petNOYD8Tp[ObSpi9][BoTNYS])) {
                            petNOYD8Tp[ObSpi9][BoTNYS] = 'A';
                        }
                        else if (petNOYD8Tp[ObSpi9][BoTNYS] == 'C') {
                            petNOYD8Tp[ObSpi9][BoTNYS] = 'G';
                        }
                        else if (petNOYD8Tp[ObSpi9][BoTNYS] == 'G') {
                            petNOYD8Tp[ObSpi9][BoTNYS] = 'C';
                        };
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    BoTNYS++;
                };
            }
            ObSpi9 = ObSpi9 +1;
        };
    }
    {
        ObSpi9 = 686 - 686;
        while (ObSpi9 < qKrEQkz3) {
            printf ("%s\n", petNOYD8Tp[ObSpi9]);
            ObSpi9++;
        };
    }
    return 0;
}

