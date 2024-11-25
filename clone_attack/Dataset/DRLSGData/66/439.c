int DP0EIHh4Sg (int YU1t5scO) {
    if (YU1t5scO % (1189 - 789) == (966 - 966) || (YU1t5scO % (480 - 476) == (331 - 331) && YU1t5scO % (541 - 441) != (735 - 735)))
        return (149 - 148);
    return 0;
}

int main () {
    char *oI7GhKPSbX [7] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
    int dQJ07oPawi [(840 - 838)] [(978 - 966)] = {{(496 - 465), 28, (142 - 111), (966 - 936), (411 - 380), 30, (566 - 535), (904 - 873), 30, (68 - 37), 30, (227 - 196)}, {(213 - 182), 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};
    int bun4p8ZaE, YU1t5scO, t8dmHrgEv, yhvJC9sKj, xrnqMpFk6yQC;
    scanf ("%d%d%d", &YU1t5scO, &t8dmHrgEv, &yhvJC9sKj);
    xrnqMpFk6yQC = (YU1t5scO % (355 - 348) + (YU1t5scO -(549 - 548)) / 4 - (YU1t5scO -1) / 100 + (YU1t5scO -1) / 400);
    {
        bun4p8ZaE = 0;
        while (bun4p8ZaE < t8dmHrgEv - 1) {
            xrnqMpFk6yQC += dQJ07oPawi[DP0EIHh4Sg (YU1t5scO)][bun4p8ZaE] % (318 - 311);
            xrnqMpFk6yQC %= (966 - 959);
            bun4p8ZaE = bun4p8ZaE + 1;
        }
    }
    xrnqMpFk6yQC += yhvJC9sKj - 1;
    xrnqMpFk6yQC = xrnqMpFk6yQC % 7;
    printf ("%s.", oI7GhKPSbX[xrnqMpFk6yQC]);
    return 0;
}

