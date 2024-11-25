int main () {
    int sz [(446 - 441)] [(564 - 559)];
    int sHCs0jSaF5I7;
    int b;
    int SwcWB7;
    int n;
    int i;
    int CBZ2yX1fu [5];
    {
        sHCs0jSaF5I7 = 59 - 59;
        while (sHCs0jSaF5I7 < 5) {
            {
                b = 0;
                while (b < 5) {
                    scanf ("%d ", &sz[sHCs0jSaF5I7][b]);
                    b++;
                };
            }
            sHCs0jSaF5I7++;
        };
    }
    scanf ("%d %d", &SwcWB7, &n);
    if (0 <= SwcWB7 &&SwcWB7 <= (136 - 132) && 0 <= n && n < 5) {
        i = 0;
    }
    else {
    }
    if (i == 0) {
        {
            sHCs0jSaF5I7 = 0;
            while (sHCs0jSaF5I7 < 5) {
                CBZ2yX1fu[sHCs0jSaF5I7] = sz[SwcWB7][sHCs0jSaF5I7];
                sz[SwcWB7][sHCs0jSaF5I7] = sz[n][sHCs0jSaF5I7];
                sz[n][sHCs0jSaF5I7] = CBZ2yX1fu[sHCs0jSaF5I7];
                sHCs0jSaF5I7++;
            };
        }
        {
            sHCs0jSaF5I7 = 0;
            while (sHCs0jSaF5I7 < 5) {
                {
                    b = 0;
                    while (b < 5) {
                        if (b == 0) {
                            printf ("%d", sz[sHCs0jSaF5I7][b]);
                        }
                        else {
                            printf (" %d", sz[sHCs0jSaF5I7][b]);
                        }
                        b++;
                    };
                }
                sHCs0jSaF5I7++;
            };
        };
    }
    return 0;
}

