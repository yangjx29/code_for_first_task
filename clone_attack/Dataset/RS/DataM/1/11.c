int cg5A6pWdLH (int a, int LBSKveJO3) {
    int e8zx7YOlC5;
    e8zx7YOlC5 = (415 - 415);
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
    if (a == (368 - 367))
        e8zx7YOlC5++;
    else {
        int M4Qt6zZOg;
        M4Qt6zZOg = LBSKveJO3;
        while (M4Qt6zZOg <= a) {
            if (a % M4Qt6zZOg == 0)
                e8zx7YOlC5 = e8zx7YOlC5 + cg5A6pWdLH (a / M4Qt6zZOg, M4Qt6zZOg);
            M4Qt6zZOg++;
        };
    }
    return e8zx7YOlC5;
}

int main () {
    int FxgiAo7;
    int a [FxgiAo7];
    cin >> FxgiAo7;
    for (int M4Qt6zZOg = 0;
    M4Qt6zZOg <= FxgiAo7 -1; M4Qt6zZOg++)
        cin >> a[M4Qt6zZOg];
    {
        int M4Qt6zZOg = 0;
        while (M4Qt6zZOg <= FxgiAo7 -1) {
            cout << cg5A6pWdLH (a[M4Qt6zZOg], 2) << endl;
            M4Qt6zZOg++;
        };
    };
}

