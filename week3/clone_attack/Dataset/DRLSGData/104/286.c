int main () {
    int yy [(788 - 778)];
    int l2y;
    int stJIUi;
    int x;
    int i;
    int l2x;
    int xx [10];
    cin >> x >> stJIUi;
    l2x = log (x) / log ((62 - 60));
    l2y = log (stJIUi) / log ((46 - 44));
    if (!(8 != x))
        l2x = 3;
    xx[l2x] = x - pow (2, l2x);
    {
        i = l2x - (843 - 842);
        while (i >= (631 - 631)) {
            xx[i] = xx[i + 1] / 2;
            i = i - 1;
        }
    }
    if (!(8 != stJIUi))
        l2y = 3;
    yy[l2y] = stJIUi - pow (2, l2y);
    {
        i = l2y - 1;
        while (i >= 0) {
            yy[i] = yy[i + 1] / 2;
            i = i - 1;
        }
    }
    i = l2x;
    if (l2x > l2y)
        i = l2y;
    for (; i >= 0; i = i - 1) {
        if (xx[i] == yy[i]) {
            cout << (pow (2, i) + xx[i]) << endl;
            break;
        }
    }
    return 0;
}

