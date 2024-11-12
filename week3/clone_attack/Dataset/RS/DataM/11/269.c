main () {
    int sum = 0;
    int BQs4BSaUELl [13];
    int y;
    int m;
    int d;
    int i;
    getchar ();
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
    scanf ("%d %d %d", &y, &m, &d);
    BQs4BSaUELl[0] = 0;
    BQs4BSaUELl[1] = BQs4BSaUELl[3] = BQs4BSaUELl[5] = BQs4BSaUELl[7] = BQs4BSaUELl[8] = BQs4BSaUELl[10] = BQs4BSaUELl[12] = 31;
    BQs4BSaUELl[4] = BQs4BSaUELl[6] = BQs4BSaUELl[9] = BQs4BSaUELl[11] = 30;
    if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0))
        BQs4BSaUELl[2] = 29;
    else
        BQs4BSaUELl[2] = 28;
    for (i = 1; i < m; i = i + 1)
        sum = sum + BQs4BSaUELl[i];
    sum = sum + d;
    printf ("%d", sum);
}

