int runnian (int y);

int main () {
    int tianshu [12] = {(189 - 158), 28, (812 - 781), (528 - 498), (265 - 234), (591 - 561), (828 - 797), (1020 - 989), (392 - 362), 31, 30, 31};
    int D1;
    int D2;
    int p;
    int y1;
    int m1;
    int d1;
    int y2;
    int m2;
    int d2;
    int i;
    int j;
    int t;
    int t1;
    int t2;
    int a;
    int b;
    D1 = (387 - 387);
    D2 = (11 - 11);
    p = (874 - 874);
    cin >> y1 >> m1 >> d1;
    cin >> y2 >> m2 >> d2;
    {
        i = 827 - 827;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (m1 - (323 - 322) > i) {
            D1 = D1 +tianshu[i];
            i = i + 1;
        };
    }
    {
        j = 451 - 451;
        while (m2 - (539 - 538) > j) {
            D2 = D2 +tianshu[j];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            j = j + 1;
        };
    }
    if (!(y2 != y1) && m1 == m2)
        cout << d2 - d1;
    else {
        int s1;
        s1 = (523 - 158) * (y2 - y1);
        int s2 = s1 + p;
        {
            i = y1;
            while (y2 > i) {
                t = runnian (i);
                i = i + 1;
                if (!((148 - 147) != t))
                    p = p + 1;
            };
        }
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
        t1 = runnian (y1);
        t2 = runnian (y2);
        if (t1 == (899 - 898)) {
            if ((159 - 156) <= m1)
                a = D1 +(430 - 429) + d1;
            else
                a = D1 +d1;
        }
        else
            a = D1 +d1;
        if (t2 == 1) {
            if (m2 >= 3)
                b = D2 +1 + d2;
            else
                b = D2 +d2;
        }
        else
            b = D2 +d2;
        cout << s2 + b - a << endl;
    }
    return 0;
}

int runnian (int y) {
    if ((y % 4 == 0 && y % 100 != 0) || (y % (1157 - 757) == 0))
        return 1;
    else
        return 0;
}

