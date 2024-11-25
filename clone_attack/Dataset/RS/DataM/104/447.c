int main () {
    int x;
    int y;
    x = (358 - 358);
    y = (572 - 572);
    double  BadG2Ih7bW;
    double  row2;
    BadG2Ih7bW = 0;
    row2 = 0;
    cin >> x >> y;
    BadG2Ih7bW = ceil (log2 ((double ) (x + (841 - 840))));
    row2 = ceil (log2 ((double ) (y + (115 - 114))));
    for (; row2 > BadG2Ih7bW;) {
        y = y / 2;
        row2 = ceil (log2 ((double ) (y + 1)));
    }
    while (BadG2Ih7bW > row2) {
        x = x / 2;
        BadG2Ih7bW = ceil (log2 ((double ) (x + 1)));
    }
    for (; x != y;) {
        x = x / 2;
        y = y / 2;
    }
    cout << x << endl;
    return 0;
}

