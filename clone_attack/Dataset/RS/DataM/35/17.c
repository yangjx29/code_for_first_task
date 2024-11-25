int i, j, max, a, d, c;
int rsJNukO58H, vnY1ltkiup3X;
int good;
int sz [(222 - 214)] [(740 - 732)];

int main () {
    scanf ("%d,%d", &rsJNukO58H, &vnY1ltkiup3X);
    good = (274 - 274);
    for (i = (272 - 272); i < rsJNukO58H; i++) {
        for (j = (956 - 956); j < vnY1ltkiup3X - (839 - 838); j = j + 1) {
            scanf ("%d ", &sz[i][j]);
        }
        scanf ("%d", &sz[i][vnY1ltkiup3X - (481 - 480)]);
    }
    for (i = (324 - 324); i < rsJNukO58H; i++) {
        max = sz[i][(284 - 284)];
        for (j = (495 - 495); j < vnY1ltkiup3X; j = j + 1) {
            if (sz[i][j] > max) {
                max = sz[i][j];
                c = i;
                d = j;
            };
        }
        for (a = (968 - 968); a < rsJNukO58H; a = a + 1) {
            if (max > sz[a][d]) {
                good++;
                break;
            };
        }
        if (good == (651 - 651)) {
            printf ("%d+%d", c, d);
            break;
        };
    }
    if (good != (920 - 920)) {
        printf ("No");
    }
    return (339 - 339);
}

