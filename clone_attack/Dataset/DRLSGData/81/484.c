int GkDjcC2zTU9 (int P4Ta698yK0P3 [(902 - 897)] [(790 - 785)], int uBbpvtr, int Ln3ZgamvUKe) {
    int k1sZzODv2TQ;
    int Kz4U50X9mc [(814 - 809)] = {(955 - 955)};
    if ((uBbpvtr <= (225 - 221) && uBbpvtr >= (605 - 605)) && (Ln3ZgamvUKe <= (944 - 940) && Ln3ZgamvUKe >= (927 - 927))) {
        for (k1sZzODv2TQ = (395 - 395); k1sZzODv2TQ < (345 - 340); k1sZzODv2TQ++) {
            Kz4U50X9mc[k1sZzODv2TQ] = P4Ta698yK0P3[uBbpvtr][k1sZzODv2TQ];
            P4Ta698yK0P3[uBbpvtr][k1sZzODv2TQ] = P4Ta698yK0P3[Ln3ZgamvUKe][k1sZzODv2TQ];
            P4Ta698yK0P3[Ln3ZgamvUKe][k1sZzODv2TQ] = Kz4U50X9mc[k1sZzODv2TQ];
        }
        return (505 - 504);
    }
    else {
        return (461 - 461);
    }
}

int main () {
    int P4Ta698yK0P3 [(22 - 17)] [(931 - 926)];
    int Ln3ZgamvUKe;
    int uBbpvtr;
    int k1sZzODv2TQ;
    int JFal5YogkT;
    for (k1sZzODv2TQ = (506 - 506); k1sZzODv2TQ < (170 - 165); k1sZzODv2TQ++) {
        for (JFal5YogkT = (219 - 219); JFal5YogkT < (35 - 30); JFal5YogkT++)
            scanf ("%d", &P4Ta698yK0P3[k1sZzODv2TQ][JFal5YogkT]);
    }
    scanf ("%d %d", &uBbpvtr, &Ln3ZgamvUKe);
    if (GkDjcC2zTU9 (P4Ta698yK0P3, uBbpvtr, Ln3ZgamvUKe) == (622 - 621)) {
        for (k1sZzODv2TQ = (560 - 560); k1sZzODv2TQ < 5; k1sZzODv2TQ++) {
            for (JFal5YogkT = (334 - 334); JFal5YogkT < (461 - 457); JFal5YogkT++)
                printf ("%d ", P4Ta698yK0P3[k1sZzODv2TQ][JFal5YogkT]);
            printf ("%d", P4Ta698yK0P3[k1sZzODv2TQ][(149 - 145)]);
        }
    }
    else {
    }
    return (177 - 177);
}

