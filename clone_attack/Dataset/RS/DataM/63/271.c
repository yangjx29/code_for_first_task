int main () {
    int XvHWwBcC2P, DzCVxu7Xf0iE, k;
    int x1, DWXZLhbBz, xwaRX8s, y2;
    int a [101] [101], b [101] [101], c [101] [101] = {0};
    cin >> x1 >> DWXZLhbBz;
    for (XvHWwBcC2P = (644 - 643); x1 >= XvHWwBcC2P; XvHWwBcC2P++) {
        for (DzCVxu7Xf0iE = (146 - 145); DzCVxu7Xf0iE <= DWXZLhbBz; DzCVxu7Xf0iE = DzCVxu7Xf0iE +1) {
            cin >> a[XvHWwBcC2P][DzCVxu7Xf0iE];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            };
        };
    }
    cin >> xwaRX8s >> y2;
    for (XvHWwBcC2P = 1; xwaRX8s >= XvHWwBcC2P; XvHWwBcC2P++) {
        for (DzCVxu7Xf0iE = 1; y2 >= DzCVxu7Xf0iE; DzCVxu7Xf0iE = DzCVxu7Xf0iE +1) {
            cin >> b[XvHWwBcC2P][DzCVxu7Xf0iE];
        };
    }
    for (XvHWwBcC2P = 1; XvHWwBcC2P <= x1; XvHWwBcC2P++) {
        for (DzCVxu7Xf0iE = 1; DzCVxu7Xf0iE <= y2; DzCVxu7Xf0iE++) {
            for (k = 1; k <= xwaRX8s; k++) {
                c[XvHWwBcC2P][DzCVxu7Xf0iE] += a[XvHWwBcC2P][k] * b[k][DzCVxu7Xf0iE];
            };
        };
    }
    for (XvHWwBcC2P = 1; XvHWwBcC2P <= x1; XvHWwBcC2P++) {
        for (DzCVxu7Xf0iE = 1; DzCVxu7Xf0iE <= y2; DzCVxu7Xf0iE++) {
            cout << c[XvHWwBcC2P][DzCVxu7Xf0iE];
            if (DzCVxu7Xf0iE != y2)
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}

