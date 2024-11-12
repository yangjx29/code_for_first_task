void  main () {
    char c [31];
    char *p;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    gets (c);
    int GQqAm50nO, j, OdTb4c69Uxu;
    p = c;
    for (; *p != '\0'; p++) {
        if (((int) *p > 47 && 58 > (int) *p) && (47 < (int) *(p + 1) && 58 > (int) *(p + 1)))
            printf ("%c", *p);
        else if (((int) *p > 47 && (int) *p < 58) && ((int) *(p + 1) < 48 || (int) *(p + 1) > 57))
            printf ("%c\n", *p);
    };
}

