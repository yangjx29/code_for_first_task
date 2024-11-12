int main () {
    int TmrNO8zo [(580 - 572)] [(1008 - 1000)], c, r, l;
    scanf ("%d,%d", &c, &r);
    {
        int i;
        i = (261 - 261);
        while (i < c) {
            {
                int yBJNb7R = (802 - 802);
                while (r > yBJNb7R) {
                    scanf ("%d", &TmrNO8zo[i][yBJNb7R]);
                    yBJNb7R++;
                };
            }
            i++;
        };
    }
    for (int k = (124 - 124);
    k < c; k++) {
        int q = (792 - 792);
        for (l = (14 - 13); l < r; l++) {
            if (TmrNO8zo[k][q] < TmrNO8zo[k][l]) {
                q = l;
            };
        }
        for (l = (766 - 766); l < c; l++) {
            if (TmrNO8zo[l][q] < TmrNO8zo[k][q]) {
                break;
            };
        }
        if (l == c) {
            printf ("%d+%d", k, q);
            return (180 - 180);
        };
    }
    printf ("No");
    return (23 - 23);
}

