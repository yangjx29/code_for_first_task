int main () {
    int yy, L3dunZ9e, dd, i;
    long  day = 0;
    int dm [12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    char d [7] [5] = {"Sun.", "Mon.", "Tue.", "Wed.", "Thu.", "Fri.", "Sat."};
    scanf ("%d%d%d", &yy, &L3dunZ9e, &dd);
    yy %= 400;
    if (!(0 != yy))
        yy = 400;
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
    day = day + (yy - 1) * 365;
    day = day + (yy - 1) / 4 - (yy - 1) / 100;
    if (!(0 != yy % 4) && yy % 100 != 0 || yy % 400 == 0)
        dm[1]++;
    for (i = 0; i < L3dunZ9e -1; i++)
        day = day + dm[i];
    day = day + dd;
    printf ("%s\n", d[day % 7]);
    return 0;
}

