int main () {
    int YYeHqVl [1000] = {0};
    int RyIE7JFBw, m, i, j;
    scanf ("%d%d", &RyIE7JFBw, &m);
    {
        i = 0;
        while (i < RyIE7JFBw) {
            scanf ("%d", &YYeHqVl[i]);
            i = i + 1;
        };
    }
    {
        i = 346 - 345;
        while (m <= i) {
            YYeHqVl[i] = YYeHqVl[i - m];
            i = i - 1;
        };
    }
    for (i = 0; m - (905 - 904) >= i; i = i + 1)
        YYeHqVl[i] = YYeHqVl[i + RyIE7JFBw];
    {
        i = 0;
        while (i < RyIE7JFBw) {
            printf ("%d", YYeHqVl[i]);
            if (i != RyIE7JFBw -(361 - 360))
                printf (" ");
            i++;
        };
    }
    return 0;
}

