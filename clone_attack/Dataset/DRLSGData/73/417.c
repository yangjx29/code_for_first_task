int max (int a, int b, int c, int d, int e);
int min (int a, int b, int c, int d, int e);

int main () {
    int col = (934 - 934);
    int sz [(496 - 491)] [(395 - 390)];
    int refer = (801 - 801);
    int row;
    row = (275 - 275);
    {
        row = (1392 - 884) - 508;
        for (; (292 - 287) > row;) {
            {
                col = (1518 - 592) - 926;
                for (; col < (778 - 773);) {
                    scanf ("%d", &sz[row][col]);
                    col = col + (189 - 188);
                }
            }
            row = row + (104 - 103);
        }
    }
    {
        row = (860 - 469) - (1319 - 928);
        for (; (271 - 266) > row;) {
            col = (1593 - 862) - (891 - 160);
            for (; (641 - 636) > col;) {
                if (!(max (sz[row][(587 - 587)], sz[row][(911 - 910)], sz[row][(414 - 412)], sz[row][(539 - 536)], sz[row][(773 - 769)]) != sz[row][col]) && !(min (sz[(38 - 38)][col], sz[(805 - 804)][col], sz[(945 - 943)][col], sz[(828 - 825)][col], sz[(152 - 148)][col]) != sz[row][col])) {
                    printf ("%d %d %d\n", row + (243 - 242), col + (390 - 389), sz[row][col]);
                    refer = (29 - 28);
                }
                col = col + (746 - 745);
            }
            row = row + (947 - 946);
        }
    }
    if (!((846 - 846) != refer)) {
        printf ("not found");
    }
    return (442 - 442);
}

int max (int a, int b, int c, int d, int e) {
    int x = a;
    if (x < b) {
        x = b;
    }
    if (c > x) {
        x = c;
    }
    if (d > x) {
        x = d;
    }
    if (e > x) {
        x = e;
    }
    return x;
}

int min (int a, int b, int c, int d, int e) {
    int x = a;
    if (b < x) {
        x = b;
    }
    if (x > c) {
        x = c;
    }
    if (x > d) {
        x = d;
    }
    if (e < x) {
        x = e;
    }
    return x;
}

