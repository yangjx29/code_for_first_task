int factor (int a, int f) {
    if (!(f != a))
        return (854 - 853);
    if (f > a)
        return (290 - 290);
    if (a % f == 0)
        return factor (a, f + (187 - 186)) + factor (a / f, f);
    else
        return factor (a, f + 1);
}

int main () {
    int LcADuQY;
    int a;
    cin >> LcADuQY;
    for (; LcADuQY > 0;) {
        cin >> a;
        cout << factor (a, 2) << endl;
        LcADuQY = LcADuQY -1;
    };
}

