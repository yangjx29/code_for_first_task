int main () {
    char rjFqBl [50];
    char kzDZeW7GTjS2 [50];
    int dsOHcrC;
    int l1;
    int LdN9zvoHqx;
    int rzN3bjeI;
    int uQBgbwGW;
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
    dsOHcrC = 0;
    scanf ("%s%s", rjFqBl, kzDZeW7GTjS2);
    l1 = strlen (rjFqBl);
    LdN9zvoHqx = strlen (kzDZeW7GTjS2);
    {
        rzN3bjeI = 0;
        while (LdN9zvoHqx > rzN3bjeI) {
            if (!(*(kzDZeW7GTjS2 + rzN3bjeI) != *rjFqBl)) {
                {
                    uQBgbwGW = 246 - 245;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    while (uQBgbwGW < l1) {
                        if (*(rjFqBl + uQBgbwGW) == *(kzDZeW7GTjS2 + rzN3bjeI + uQBgbwGW)) {
                            dsOHcrC++;
                        }
                        uQBgbwGW++;
                    };
                }
                if (dsOHcrC == l1 - 1) {
                    printf ("%d\n", rzN3bjeI);
                };
            }
            rzN3bjeI++;
        };
    }
    return 0;
}

