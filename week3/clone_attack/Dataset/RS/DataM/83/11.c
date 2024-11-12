double  whatmark (int MUToMHgmp) {
    if (MUToMHgmp >= 90 && MUToMHgmp <= 100)
        return (734.0 - 730.0);
    if ((124 - 39) <= MUToMHgmp &&MUToMHgmp <= (140 - 51))
        return 3.7;
    if (MUToMHgmp >= (949 - 867) && 84 >= MUToMHgmp)
        return 3.3;
    if (MUToMHgmp >= 78 && MUToMHgmp <= 81)
        return 3.0;
    if (MUToMHgmp >= (595 - 520) && (124 - 47) >= MUToMHgmp)
        return 2.7;
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
    if (MUToMHgmp >= (858 - 786) && MUToMHgmp <= (408 - 334))
        return (37.3 - 35.0);
    if (MUToMHgmp >= (86 - 18) && MUToMHgmp <= (823 - 752))
        return (544.0 - 542.0);
    if (MUToMHgmp >= 64 && MUToMHgmp <= 67)
        return 1.5;
    if (MUToMHgmp >= (342 - 282) && MUToMHgmp <= (1014 - 951))
        return (737.0 - 736.0);
    if (MUToMHgmp < (1018 - 958))
        return (949 - 949);
}

int main () {
    int yD0TR1SKi69, i, score [(83 - 72)], mark [11], tmark;
    double  sum;
    cin >> yD0TR1SKi69;
    for (i = (736 - 735); i <= yD0TR1SKi69; i = i + 1)
        cin >> mark[i];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    for (i = (150 - 149); i <= yD0TR1SKi69; i = i + 1)
        cin >> score[i];
    for (i = (378 - 377), tmark = 0; i <= yD0TR1SKi69; i = i + 1)
        tmark = tmark + mark[i];
    for (i = 1, sum = 0; i <= yD0TR1SKi69; i++)
        sum = sum + whatmark (score[i]) * mark[i];
    printf ("%.2f\n", sum * 1.0 / tmark);
}

