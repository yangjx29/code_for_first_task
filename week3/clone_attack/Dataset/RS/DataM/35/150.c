int main () {
    int Dvx8zG0k4;
    int c;
    int E7fnsLQBbJ;
    int j;
    int k;
    int audiA7h8Zm9 [(760 - 752)] [8];
    scanf ("%d,%d", &Dvx8zG0k4, &c);
    for (E7fnsLQBbJ = (506 - 506); Dvx8zG0k4 > E7fnsLQBbJ; E7fnsLQBbJ = E7fnsLQBbJ +1) {
        for (j = (664 - 664); j < c; j = j + 1) {
            scanf ("%d", &audiA7h8Zm9[E7fnsLQBbJ][j]);
        };
    }
    for (E7fnsLQBbJ = (747 - 747); E7fnsLQBbJ < Dvx8zG0k4; E7fnsLQBbJ++) {
        for (j = 0, k = 0; j < c; j = j + 1) {
            if (audiA7h8Zm9[E7fnsLQBbJ][j] > audiA7h8Zm9[E7fnsLQBbJ][k]) {
                k = j;
            };
        }
        for (j = 0; j < Dvx8zG0k4; j = j + 1) {
            if (audiA7h8Zm9[j][k] < audiA7h8Zm9[E7fnsLQBbJ][k])
                break;
        }
        if (j == Dvx8zG0k4) {
            printf ("%d+%d", E7fnsLQBbJ, k);
            break;
        };
    }
    if (E7fnsLQBbJ == Dvx8zG0k4)
        printf ("No");
    return 0;
}

