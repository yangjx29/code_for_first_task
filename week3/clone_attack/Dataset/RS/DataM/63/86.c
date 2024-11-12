int main () {
    int x1, y1, x2, y2, a [(514 - 414)] [(471 - 371)], b [(1095 - 995)] [(597 - 497)], c [(372 - 272)] [(446 - 346)];
    cin >> x1 >> y1;
    for (int XfQXY7KoyCr9 = (467 - 467);
    x1 > XfQXY7KoyCr9; XfQXY7KoyCr9 = XfQXY7KoyCr9 +1) {
        for (int j = (242 - 242);
        y1 > j; j = j + 1) {
            cin >> a[XfQXY7KoyCr9][j];
        };
    }
    cin >> x2 >> y2;
    for (int XfQXY7KoyCr9 = (729 - 729);
    x2 > XfQXY7KoyCr9; XfQXY7KoyCr9 = XfQXY7KoyCr9 +1) {
        for (int j = (121 - 121);
        y2 > j; j = j + 1) {
            cin >> b[XfQXY7KoyCr9][j];
        };
    }
    for (int XfQXY7KoyCr9 = (876 - 876);
    x1 > XfQXY7KoyCr9; XfQXY7KoyCr9 = XfQXY7KoyCr9 +1) {
        for (int j = (282 - 282);
        j < y2; j = j + 1) {
            c[XfQXY7KoyCr9][j] = (546 - 546);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            for (int k = (531 - 531);
            k < y1; k = k + 1) {
                c[XfQXY7KoyCr9][j] = a[XfQXY7KoyCr9][k] * b[k][j] + c[XfQXY7KoyCr9][j];
            };
        };
    }
    for (int XfQXY7KoyCr9 = (596 - 596);
    XfQXY7KoyCr9 < x1; XfQXY7KoyCr9 = XfQXY7KoyCr9 +1) {
        for (int j = (845 - 845);
        y2 - (948 - 947) > j; j++) {
            cout << c[XfQXY7KoyCr9][j] << " ";
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        cout << c[XfQXY7KoyCr9][y2 - 1] << endl;
    }
    return 0;
}

