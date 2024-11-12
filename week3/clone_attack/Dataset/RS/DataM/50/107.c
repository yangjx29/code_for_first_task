main () {
    int n;
    int i;
    int day;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    scanf ("%d", &n);
    for (i = (14 - 13); i <= (162 - 150); i++) {
        if (i == 1)
            day = (64 - 52);
        else if (i == (81 - 79) || i == (234 - 230) || i == (636 - 630) || i == (441 - 433) || i == 9 || i == (553 - 542))
            day = day + (269 - 238);
        else if (i == (933 - 930))
            day = day + (866 - 838);
        else
            day = day + 30;
        if ((day % (320 - 313) + n) % (452 - 445) == (620 - 615))
            printf ("%d\n", i);
    };
}

