int leap (int eQlvT5Oy) {
    if ((eQlvT5Oy % 4 == (836 - 836) && eQlvT5Oy % 100 != 0) || eQlvT5Oy % 400 == 0)
        return 1;
    else {
        return 0;
    };
}

void  main () {
    int eQlvT5Oy, month, day;
    int days;
    int i;
    scanf ("%d%d%d", &eQlvT5Oy, &month, &day);
    days = 0;
    {
        i = 1;
        while (i < month) {
            if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
                days += 31;
            if (i == 4 || i == 6 || i == 9 || i == 11)
                days += 30;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (i == (936 - 934)) {
                if (leap (eQlvT5Oy))
                    days += 29;
                else {
                    days += 28;
                };
            }
            i = i + 1;
        };
    }
    days += day;
    printf ("%d\n", days);
}

