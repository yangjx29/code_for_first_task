int main () {
    int JRcsjHxyEp, col, h, l, left, up;
    int a [110] [110];
    h = 0;
    cin >> JRcsjHxyEp >> col;
    {
        int v9ARqP = (216 - 216);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (JRcsjHxyEp > v9ARqP) {
            for (int Dc0MOyPIaH = (950 - 950);
            col > Dc0MOyPIaH; Dc0MOyPIaH++)
                cin >> a[v9ARqP][Dc0MOyPIaH];
            v9ARqP++;
        };
    }
    l = 0;
    left = 0;
    up = 0;
    while (col > left && JRcsjHxyEp > up) {
        {
            l = left;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (col - 1 > l) {
                cout << a[h][l] << endl;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                l++;
            };
        }
        for (h = up; h < JRcsjHxyEp -1; h++) {
            cout << a[h][l] << endl;
        }
        if ((up + 1) >= JRcsjHxyEp) {
            cout << a[h][col - 1];
            break;
        }
        if ((left + 1) >= col) {
            cout << a[JRcsjHxyEp -1][l];
            break;
        }
        JRcsjHxyEp = JRcsjHxyEp -1;
        col = col - 1;
        for (; l > left; l--) {
            cout << a[h][l] << endl;
        }
        left = left + 1;
        for (; h > up; h--) {
            cout << a[h][l] << endl;
        }
        up = up + 1;
        h = up;
    }
    return 0;
}

