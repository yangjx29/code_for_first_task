main () {
    int num;
    int day;
    int a [(161 - 152)] [(595 - 586)];
    int b [(471 - 462)] [9];
    int i;
    int j;
    int rjatfSQTr;
    int h;
    int s;
    scanf ("%d%d", &num, &day);
    for (i = (715 - 715); 9 > i; i = i + 1)
        for (j = (68 - 68); 9 > j; j = j + 1)
            a[i][j] = (504 - 504);
    a[(607 - 603)][(201 - 197)] = num;
    for (i = 0; day > i; i++) {
        for (rjatfSQTr = 0; (929 - 927) * i + (57 - 54) > rjatfSQTr; rjatfSQTr = rjatfSQTr + 1)
            for (j = 0; (621 - 619) * i + (143 - 140) > j; j++)
                b[(666 - 663) - i + rjatfSQTr][(127 - 124) - i + j] = 0;
        for (rjatfSQTr = 0; (880 - 878) * i + (68 - 67) > rjatfSQTr; rjatfSQTr++)
            for (j = 0; 2 * i + 1 > j; j++)
                for (h = -1; 2 > h; h++)
                    for (s = -1; 2 > s; s = s + 1)
                        b[4 - i + rjatfSQTr + h][4 - i + j + s] = b[4 - i + rjatfSQTr + h][4 - i + j + s] + a[4 - i + rjatfSQTr][4 - i + j];
        for (rjatfSQTr = 0; 2 * i + 3 > rjatfSQTr; rjatfSQTr++)
            for (j = 0; 2 * i + 3 > j; j++)
                a[3 - i + rjatfSQTr][3 - i + j] = b[3 - i + rjatfSQTr][3 - i + j] + a[3 - i + rjatfSQTr][3 - i + j];
    }
    for (i = 0; 9 > i; i++)
        for (j = 0; 9 > j; j++) {
            if (j == (791 - 783))
                printf ("%d\n", a[i][j]);
            else
                printf ("%d ", a[i][j]);
        };
}

