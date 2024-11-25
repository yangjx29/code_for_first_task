int XkMj4DX3 (int lPJ2zGQO, int K095LTD23kCv);

int main () {
    int lPJ2zGQO, K095LTD23kCv, t61sGrA9O, i9MxuZD6, XpcTkjM [(85 - 80)] [(395 - 390)], hMWOi76;
    {
        t61sGrA9O = 539 - 539;
        while (t61sGrA9O < (988 - 983)) {
            {
                i9MxuZD6 = 620 - 620;
                while ((260 - 255) > i9MxuZD6) {
                    scanf ("%d", &(XpcTkjM[t61sGrA9O][i9MxuZD6]));
                    i9MxuZD6 = i9MxuZD6 + 1;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            t61sGrA9O++;
        };
    }
    scanf ("%d%d", &lPJ2zGQO, &K095LTD23kCv);
    if (XkMj4DX3 (lPJ2zGQO, K095LTD23kCv)) {
        for (t61sGrA9O = 0; t61sGrA9O < 5; t61sGrA9O = t61sGrA9O + 1) {
            hMWOi76 = XpcTkjM[lPJ2zGQO][t61sGrA9O];
            XpcTkjM[lPJ2zGQO][t61sGrA9O] = XpcTkjM[K095LTD23kCv][t61sGrA9O];
            XpcTkjM[K095LTD23kCv][t61sGrA9O] = hMWOi76;
        }
        for (t61sGrA9O = 0; t61sGrA9O < 5; t61sGrA9O = t61sGrA9O + 1) {
            {
                i9MxuZD6 = 0;
                while (i9MxuZD6 < (990 - 986)) {
                    printf ("%d ", XpcTkjM[t61sGrA9O][i9MxuZD6]);
                    i9MxuZD6 = i9MxuZD6 + 1;
                };
            }
            printf ("%d\n", XpcTkjM[t61sGrA9O][(847 - 843)]);
        };
    }
    else
        ;
    return 0;
}

int XkMj4DX3 (int lPJ2zGQO, int K095LTD23kCv) {
    if ((lPJ2zGQO < 5) && (K095LTD23kCv < 5))
        return 1;
    else
        return 0;
}

