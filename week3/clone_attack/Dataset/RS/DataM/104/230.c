int erchashu (int xRjYfL1ewkNW, int b) {
    if (xRjYfL1ewkNW == b)
        return (xRjYfL1ewkNW);
    if (xRjYfL1ewkNW > b)
        return (erchashu (xRjYfL1ewkNW / 2, b));
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
    if (xRjYfL1ewkNW < b)
        return (erchashu (xRjYfL1ewkNW, b / 2));
}

void  main () {
    int xRjYfL1ewkNW, b, c;
    scanf ("%d%d", &xRjYfL1ewkNW, &b);
    c = erchashu (xRjYfL1ewkNW, b);
    printf ("%d", c);
}

