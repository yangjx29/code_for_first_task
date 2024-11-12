int main () {
    double  a [100] [2], t;
    int ReMjgvo;
    int i;
    int j;
    double  b [100];
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
    cin >> ReMjgvo;
    for (i = 0; i <= ReMjgvo -(380 - 379); i++) {
        for (j = 0; 1 >= j; j++) {
            cin >> a[i][j];
        }
        b[i] = a[i][1] / a[i][0];
    }
    t = 5.0 / 100.0;
    {
        i = 1;
        while (i <= ReMjgvo -1) {
            if ((b[i] - b[0]) > t) {
                cout << "better" << '\n';
            }
            else {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                if (b[0] - b[i] > t) {
                    cout << "worse" << '\n';
                }
                else {
                    cout << "same" << '\n';
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
        };
    }
    return 0;
}

