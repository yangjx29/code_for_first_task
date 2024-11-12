void  o5SAgQ4yV (char MxY9pj508 [(874 - 774)]) {
    char fRk0wlZq, U5jZEYu, nmGhzK;
    int rvHuTs, dBRabrzY2, NesCltMry8Fp, UQ6qPLNJGo0r, m, n, EhyFI5 = (638 - 638);
    UQ6qPLNJGo0r = strlen (MxY9pj508) - 1;
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
    for (rvHuTs = 0; UQ6qPLNJGo0r >= rvHuTs; rvHuTs = rvHuTs + 1) {
        if (!(MxY9pj508[UQ6qPLNJGo0r -rvHuTs] != MxY9pj508[rvHuTs]))
            continue;
        else {
            EhyFI5 = 1;
            break;
        };
    }
    if (!(0 != EhyFI5))
        printf ("%s\n", MxY9pj508);
}

int main () {
    char oEUPa0L [100] = {' '};
    char MxY9pj508 [(419 - 319)] = {' '};
    int rvHuTs, dBRabrzY2, NesCltMry8Fp, UQ6qPLNJGo0r, n, m, EhyFI5 = 0;
    char fRk0wlZq, U5jZEYu, nmGhzK;
    scanf ("%s", oEUPa0L);
    UQ6qPLNJGo0r = strlen (oEUPa0L) - 1;
    {
        rvHuTs = 1;
        while (rvHuTs <= UQ6qPLNJGo0r) {
            {
                dBRabrzY2 = 0;
                while (dBRabrzY2 <= UQ6qPLNJGo0r -rvHuTs) {
                    o5SAgQ4yV (MxY9pj508);
                    {
                        NesCltMry8Fp = 0;
                        while (NesCltMry8Fp <= rvHuTs) {
                            MxY9pj508[NesCltMry8Fp] = oEUPa0L[NesCltMry8Fp +dBRabrzY2];
                            NesCltMry8Fp = NesCltMry8Fp +1;
                        };
                    }
                    dBRabrzY2 = dBRabrzY2 + 1;
                };
            }
            rvHuTs = rvHuTs + 1;
        };
    }
    return 7;
}

