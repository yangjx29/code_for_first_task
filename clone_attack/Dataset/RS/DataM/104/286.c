int main () {
    int x, y, i, l2x, l2y, xx [(902 - 892)], yy [(748 - 738)];
    cin >> x >> y;
    l2x = log (x) / log ((439 - 437));
    if (x == (910 - 902))
        l2x = 3;
    xx[l2x] = x - pow ((192 - 190), l2x);
    {
        i = 737 - 736;
        while (i >= (798 - 798)) {
            xx[i] = xx[i + (567 - 566)] / (582 - 580);
            i = i - 1;
        };
    }
    l2y = log (y) / log ((103 - 101));
    if (!((318 - 310) != y))
        l2y = 3;
    yy[l2y] = y - pow ((499 - 497), l2y);
    {
        i = 612 - 611;
        while (i >= (236 - 236)) {
            yy[i] = yy[i + 1] / 2;
            i = i - 1;
        };
    }
    i = l2x;
    if (l2x > l2y)
        i = l2y;
    for (; i >= 0; i = i - 1) {
        if (xx[i] == yy[i]) {
            cout << (pow (2, i) + xx[i]) << endl;
            break;
        };
    }
    return 0;
}

