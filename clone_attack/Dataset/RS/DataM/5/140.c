main () {
    float a, f;
    int x, y, b = 0, pyeuWf6jJm = 0;
    char nmXrCeVY [501];
    char d2 [501];
    scanf ("%f", &a);
    scanf ("%s", nmXrCeVY);
    scanf ("%s", d2);
    x = strlen (nmXrCeVY);
    y = strlen (d2);
    if (!(y == x))
        ;
    else {
        {
            int i = 0;
            while (x - 1 >= i) {
                if ((!('A' != nmXrCeVY[i]) || !('T' != nmXrCeVY[i]) || !('C' != nmXrCeVY[i]) || nmXrCeVY[i] == 'G') && (d2[i] == 'A' || d2[i] == 'T' || d2[i] == 'C' || d2[i] == 'G')) {
                    if (nmXrCeVY[i] == d2[i])
                        b = b + 1;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    };
                }
                else {
                    pyeuWf6jJm = 1;
                    break;
                }
                i++;
            };
        }
        f = (float) b / (float) x;
        if (pyeuWf6jJm == 0 && f > a)
            ;
        else {
            if (pyeuWf6jJm == 0 && f <= a)
                ;
            else
                printf ("error");
        };
    };
}

