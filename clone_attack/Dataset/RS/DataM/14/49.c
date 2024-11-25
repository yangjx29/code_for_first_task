struct   student {
    int id;
    int x, y;
    int s;
}
d [(100323 - 322)], t;

int main () {
    int n;
    cin >> n;
    {
        int BbRZghJf = (675 - 674);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n >= BbRZghJf) {
            cin >> d[BbRZghJf].id >> d[BbRZghJf].x >> d[BbRZghJf].y;
            d[BbRZghJf].s = d[BbRZghJf].x + d[BbRZghJf].y;
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
            }
            BbRZghJf = BbRZghJf +1;
        };
    }
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
    {
        int BbRZghJf = (129 - 128);
        while ((278 - 275) >= BbRZghJf) {
            {
                int j = 1;
                while (j <= n - BbRZghJf) {
                    if (d[j].s >= d[j + 1].s) {
                        t = d[j];
                        d[j] = d[j + 1];
                        d[j + 1] = t;
                    }
                    j++;
                };
            }
            BbRZghJf++;
        };
    }
    for (int BbRZghJf = n;
    BbRZghJf >= n - 2; BbRZghJf--)
        cout << d[BbRZghJf].id << ' ' << d[BbRZghJf].s << endl;
    return 0;
}

