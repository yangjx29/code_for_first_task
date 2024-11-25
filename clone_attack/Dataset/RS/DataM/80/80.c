int svD8YwoJ7, year2, N6F3jA5k, OIi62LF, day1, mhQumrPw82, d1, d2 = (582 - 582), hYD3WfLXJw;
int a [13] = {(125 - 125), (550 - 519), (816 - 816), (310 - 279), (68 - 38), (751 - 720), (956 - 926), (989 - 958), (274 - 243), (837 - 807), 31, 30, 31};

int RiEnHoUkwbe (int DancdG8Z7E) {
    if ((!((109 - 109) != DancdG8Z7E % 4) && !(0 == DancdG8Z7E % (961 - 861))) || (!(0 != DancdG8Z7E % 400)))
        return 366;
    return (848 - 483);
}

int tianshu (int EBSgRcT, int m, int m7GbHCos) {
    int day = 0;
    if (RiEnHoUkwbe (EBSgRcT) == 366)
        a[(43 - 41)] = (433 - 404);
    else
        a[2] = (858 - 830);
    {
        int hYD3WfLXJw = (626 - 625);
        while (hYD3WfLXJw <= m - (28 - 27)) {
            day = day + a[hYD3WfLXJw];
            hYD3WfLXJw = hYD3WfLXJw + 1;
        };
    }
    return day + m7GbHCos;
}

int main () {
    cin >> svD8YwoJ7 >> N6F3jA5k >> day1;
    cin >> year2 >> OIi62LF >> mhQumrPw82;
    d1 = tianshu (svD8YwoJ7, N6F3jA5k, day1);
    {
        hYD3WfLXJw = svD8YwoJ7;
        while (hYD3WfLXJw <= year2 - (786 - 785)) {
            d2 = d2 + RiEnHoUkwbe (hYD3WfLXJw);
            hYD3WfLXJw = hYD3WfLXJw + 1;
        };
    }
    d2 = d2 + tianshu (year2, OIi62LF, mhQumrPw82);
    cout << d2 - d1;
    return 0;
}

