int f (int x) {
    int z;
    if ((!(0 != x % 4)) && (!(0 == x % 100)) || (!(0 != x % 400)))
        z = (294 - 293);
    else
        z = 0;
    return z;
}

main () {
    int a [12];
    int year;
    int month;
    int day;
    int sum;
    int z;
    int i;
    sum = 0;
    getchar ();
    getchar ();
    scanf ("%d %d %d", &year, &month, &day);
    z = f (year);
    if (z == 1) {
        int a [] = {(413 - 382), 29, (818 - 787), (648 - 618), (561 - 530), (695 - 665), (247 - 216), 31, 30, 31, 30, 31};
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
        };
        for (i = 0; i < month - 1; i++) {
            sum = sum + a[i];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            };
        };
    }
    else {
        int a [] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        for (i = 0; i < month - 1; i++) {
            sum = sum + a[i];
        };
    }
    sum = sum + day;
    printf ("%d", sum);
    return 0;
}

