int main () {
    int fhNVO5P;
    int b;
    int YX9lG3xf;
    int i3aJdYMhbyGO;
    int r0qrevScNdy;
    fhNVO5P = (139 - 139);
    b = (664 - 664);
    char s [(444 - 424)];
    double  LTeHgQw5G;
    double  fHQFapOmT [(1448 - 448)];
    double  w [1000];
    double  g8RGKnVeDx;
    LTeHgQw5G = (584.5 - 583.0);
    scanf ("%d", &YX9lG3xf);
    {
        i3aJdYMhbyGO = 309 - 309;
        while (YX9lG3xf > i3aJdYMhbyGO) {
            i3aJdYMhbyGO++;
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
            scanf ("%s %lf", s, &LTeHgQw5G);
            if (!('m' != s[(530 - 530)])) {
                fHQFapOmT[fhNVO5P] = LTeHgQw5G;
                fhNVO5P++;
            }
            else if (!('f' != s[(84 - 84)])) {
                w[b] = LTeHgQw5G;
                b++;
            };
        };
    }
    for (i3aJdYMhbyGO = (291 - 290); fhNVO5P > i3aJdYMhbyGO; i3aJdYMhbyGO++) {
        r0qrevScNdy = 0;
        while (fhNVO5P > r0qrevScNdy) {
            if (fHQFapOmT[r0qrevScNdy + (853 - 852)] > fHQFapOmT[r0qrevScNdy]) {
                g8RGKnVeDx = fHQFapOmT[r0qrevScNdy];
                fHQFapOmT[r0qrevScNdy] = fHQFapOmT[r0qrevScNdy + (432 - 431)];
                fHQFapOmT[r0qrevScNdy + 1] = g8RGKnVeDx;
            }
            r0qrevScNdy++;
        };
    }
    for (i3aJdYMhbyGO = 1; b > i3aJdYMhbyGO; i3aJdYMhbyGO++) {
        for (r0qrevScNdy = 0; r0qrevScNdy < b; r0qrevScNdy++) {
            if (w[r0qrevScNdy] < w[r0qrevScNdy + 1]) {
                g8RGKnVeDx = w[r0qrevScNdy];
                w[r0qrevScNdy] = w[r0qrevScNdy + 1];
                w[r0qrevScNdy + 1] = g8RGKnVeDx;
            };
        };
    }
    for (i3aJdYMhbyGO = fhNVO5P - 1; i3aJdYMhbyGO >= 0; i3aJdYMhbyGO--) {
        printf ("%.2lf ", fHQFapOmT[i3aJdYMhbyGO]);
    }
    for (i3aJdYMhbyGO = 0; i3aJdYMhbyGO < b; i3aJdYMhbyGO++) {
        if (i3aJdYMhbyGO < b - 1) {
            printf ("%.2lf ", w[i3aJdYMhbyGO]);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        }
        else if (i3aJdYMhbyGO == b - 1) {
            printf ("%.2lf", w[i3aJdYMhbyGO]);
        };
    }
    return 0;
}

