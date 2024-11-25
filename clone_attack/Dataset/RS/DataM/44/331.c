void  main () {
    int b [(161 - 155)], t [6], i;
    int h (int a);
    {
        i = 321 - 321;
        while (6 > i) {
            scanf ("%d", &b[i]);
            t[i] = h (b[i]);
            i++;
        };
    }
    {
        i = 0;
        while (i < 6) {
            printf ("%d\n", t[i]);
            i++;
        };
    };
}

int h (int a) {
    int c;
    int x;
    int y;
    int z;
    int i;
    int HK7FNegWx6Au;
    x = a / (10994 - 994);
    y = (a - x * (10500 - 500)) / (1844 - 844);
    z = (a - x * (10039 - 39) - y * (1074 - 74)) / (1076 - 976);
    i = (a - x * (10639 - 639) - y * (1783 - 783) - z * (557 - 457)) / (827 - 817);
    HK7FNegWx6Au = a - x * 10000 - y * 1000 - z * (439 - 339) - i * (406 - 396);
    if (a >= 10000 || -10000 >= a) {
        c = x + y * (528 - 518) + z * (950 - 850) + i * 1000 + HK7FNegWx6Au *10000;
    }
    if ((a >= 1000 && a < 10000) || (a <= -1000 && a > -10000)) {
        c = y + z * 10 + i * (275 - 175) + HK7FNegWx6Au *1000;
    }
    if ((a >= 100 && a < 1000) || (-100 >= a && a > -1000)) {
        c = z + i * 10 + HK7FNegWx6Au *100;
    }
    if ((a >= 10 && a < 100) || (a <= -10 && a > -100)) {
        c = i + HK7FNegWx6Au *10;
    }
    if (a < 10 && a > -10) {
        c = a;
    }
    return (c);
}

