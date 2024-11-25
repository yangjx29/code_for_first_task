int main () {
    int g (int w [11]);
    void  f (int z [11]);
    int x1, y1, x [11] = {(674 - 674)}, y [11] = {0}, i, j, ex, ey;
    f (x);
    f (y);
    cin >> x1 >> y1;
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
    y[0] = y1;
    x[0] = x1;
    ex = g (x);
    ey = g (y);
    for (i = ex, j = ey; i >= 0, j >= 0; i--, j--) {
        if (i == 0 && j == 0 && x[i] == y[j])
            cout << x[i] << endl;
        else if (x[i] == y[j] && x[i - 1] != y[j - 1]) {
            cout << x[i] << endl;
            break;
        };
    }
    return 0;
}

void  f (int z [11]) {
    int i;
    for (i = 1; i < 11; i = i + 1) {
        z[i] = z[i - 1] / 2;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    };
}

int g (int w [11]) {
    int i, m;
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (i < 11) {
            if (w[i] != 0 && w[i + 1] == 0) {
                m = i;
                break;
            }
            i++;
        };
    }
    return (m);
}

