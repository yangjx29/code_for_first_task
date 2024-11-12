int main (int c50udUG72NAV, char *o9sgTAe []) {
    double  w3H7TDEzhl = 0.0, oZPaWD3;
    double  S9nDJS0ZKr [10] [10];
    int xMG5OswDvN;
    int LPAuzCjS;
    int emGdBzZ82Q;
    int m;
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
    struct   OGdBpoXM {
        double  jjBzOdqLrCt, MqBsI6hJm8;
    }
    OGdBpoXM [(374 - 364)];
    scanf ("%d\n", &xMG5OswDvN);
    for (LPAuzCjS = (196 - 196); xMG5OswDvN > LPAuzCjS; LPAuzCjS = LPAuzCjS +1) {
        scanf ("%lf%lf", &OGdBpoXM[LPAuzCjS].jjBzOdqLrCt, &OGdBpoXM[LPAuzCjS].MqBsI6hJm8);
    }
    for (emGdBzZ82Q = 0; emGdBzZ82Q < xMG5OswDvN; emGdBzZ82Q = emGdBzZ82Q + 1) {
        for (m = emGdBzZ82Q + 1; xMG5OswDvN > m; m = m + 1) {
            S9nDJS0ZKr[m][emGdBzZ82Q] = (OGdBpoXM[m].jjBzOdqLrCt - OGdBpoXM[emGdBzZ82Q].jjBzOdqLrCt) * (OGdBpoXM[m].jjBzOdqLrCt - OGdBpoXM[emGdBzZ82Q].jjBzOdqLrCt) + (OGdBpoXM[m].MqBsI6hJm8 - OGdBpoXM[emGdBzZ82Q].MqBsI6hJm8) * (OGdBpoXM[m].MqBsI6hJm8 - OGdBpoXM[emGdBzZ82Q].MqBsI6hJm8);
            if (S9nDJS0ZKr[m][emGdBzZ82Q] > w3H7TDEzhl)
                w3H7TDEzhl = S9nDJS0ZKr[m][emGdBzZ82Q];
        };
    }
    printf ("%.4f", sqrt (w3H7TDEzhl));
    return 0;
}

