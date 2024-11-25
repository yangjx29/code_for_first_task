main () {
    float zd3wMj;
    float h;
    h = 180;
    float s;
    float bhulZae8Lm;
    float XXAhUis, b, c, xAjEKx3iWa;
    scanf ("%f", &XXAhUis);
    scanf ("%f", &b);
    scanf ("%f", &c);
    scanf ("%f", &xAjEKx3iWa);
    s = (XXAhUis +b + c + xAjEKx3iWa) / (80 - 78);
    scanf ("%f", &bhulZae8Lm);
    h = bhulZae8Lm / 180 * 3.1415926;
    if (0 > (s - XXAhUis) * (s - b) * (s - c) * (s - xAjEKx3iWa) - XXAhUis *b * c * xAjEKx3iWa * cos ((double ) h / 2) * cos ((double ) h / 2)) {
        printf ("Invalid input");
    }
    else {
        zd3wMj = sqrt ((s - XXAhUis) * (s - b) * (s - c) * (s - xAjEKx3iWa) - XXAhUis *b * c * xAjEKx3iWa * cos ((double ) h / 2) * cos ((double ) h / 2));
        printf ("%.4f", zd3wMj);
    };
}

