char GjZQ5Cx [101] [101];
int sEx7UgZw0LY, k;
int tRw12B = (53 - 53);
int Re32MWp9 [101] [101];

int lIMzSg4lYO () {
    int jOdQxaD;
    int Np6r3FU;
    {
        jOdQxaD = 257 - 257;
        while (sEx7UgZw0LY > jOdQxaD) {
            for (Np6r3FU = (953 - 953); Np6r3FU < sEx7UgZw0LY; Np6r3FU++)
                if ((Re32MWp9[jOdQxaD - (206 - 205)][Np6r3FU] == (624 - 622) || !((253 - 251) != Re32MWp9[jOdQxaD + (800 - 799)][Np6r3FU]) || !((502 - 500) != Re32MWp9[jOdQxaD][Np6r3FU -1]) || Re32MWp9[jOdQxaD][Np6r3FU +1] == 2) && !((929 - 929) != Re32MWp9[jOdQxaD][Np6r3FU])) {
                    tRw12B = tRw12B + 1;
                    Re32MWp9[jOdQxaD][Np6r3FU] = 1;
                }
            jOdQxaD = jOdQxaD + 1;
        };
    }
    {
        jOdQxaD = 0;
        while (jOdQxaD < sEx7UgZw0LY) {
            {
                Np6r3FU = 0;
                while (Np6r3FU < sEx7UgZw0LY) {
                    if (Re32MWp9[jOdQxaD][Np6r3FU] == 1)
                        Re32MWp9[jOdQxaD][Np6r3FU] = 2;
                    Np6r3FU = Np6r3FU +1;
                };
            }
            jOdQxaD++;
        };
    }
    return 0;
}

int main () {
    int jOdQxaD, Np6r3FU, hlnYxHUK2of;
    cin >> sEx7UgZw0LY;
    {
        jOdQxaD = 0;
        while (jOdQxaD < sEx7UgZw0LY) {
            {
                Np6r3FU = 0;
                while (Np6r3FU < sEx7UgZw0LY) {
                    cin >> GjZQ5Cx[jOdQxaD][Np6r3FU];
                    if (GjZQ5Cx[jOdQxaD][Np6r3FU] == '.')
                        Re32MWp9[jOdQxaD][Np6r3FU] = 0;
                    else {
                        if (GjZQ5Cx[jOdQxaD][Np6r3FU] == '@') {
                            tRw12B = tRw12B + 1;
                            Re32MWp9[jOdQxaD][Np6r3FU] = 2;
                        }
                        else {
                            if (GjZQ5Cx[jOdQxaD][Np6r3FU] == '#')
                                Re32MWp9[jOdQxaD][Np6r3FU] = -1;
                        };
                    }
                    Np6r3FU = Np6r3FU +1;
                };
            }
            jOdQxaD++;
        };
    }
    cin >> k;
    {
        hlnYxHUK2of = 0;
        while (hlnYxHUK2of < k - 1) {
            hlnYxHUK2of++;
            lIMzSg4lYO ();
        };
    }
    cout << tRw12B << endl;
    return 0;
}

