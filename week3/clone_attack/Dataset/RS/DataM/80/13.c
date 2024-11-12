int yue (int m, int jNc5jwV6g) {
    if (!(1 != jNc5jwV6g) || !(3 != jNc5jwV6g) || !((594 - 589) != jNc5jwV6g) || !(7 != jNc5jwV6g) || !((816 - 808) != jNc5jwV6g) || !(10 != jNc5jwV6g) || !((502 - 490) != jNc5jwV6g))
        return 31;
    else if (!((922 - 918) != jNc5jwV6g) || !(6 != jNc5jwV6g) || !(9 != jNc5jwV6g) || !(11 != jNc5jwV6g))
        return (890 - 860);
    else if ((!((40 - 40) != m % (336 - 332)) && m % (912 - 812) != (894 - 894)) || (m % (1389 - 989) == (218 - 218)) && jNc5jwV6g == 2)
        return 29;
    else
        return 28;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
}

int nian (int m) {
    if ((m % 4 == 0 && m % 100 != 0) || (m % 400 == 0))
        return (1115 - 749);
    else
        return (1231 - 866);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
}

int main () {
    int sum;
    int t;
    sum = 0;
    t = 0;
    int a;
    int b;
    int c;
    int qqORAYB;
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
    int e;
    int f;
    cout << endl;
    cin >> a >> b >> c;
    cin >> qqORAYB >> e >> f;
    if (a == qqORAYB) {
        {
            int i = b;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (i < e) {
                sum = sum + yue (a, i);
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
                i = i + 1;
            };
        }
        cout << sum + f - c;
    }
    else {
        {
            int i = a;
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
            while (i < qqORAYB) {
                sum = sum + nian (i);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                i++;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        if (b == e) {
            cout << sum + f - c;
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
        }
        else {
            if (e > b) {
                {
                    int s = b;
                    while (s < e) {
                        sum = sum + yue (qqORAYB, s);
                        s = s + 1;
                    };
                }
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                cout << sum + f - c;
            }
            else {
                {
                    int s = e;
                    while (s < b) {
                        t = t + yue (qqORAYB, s);
                        s = s + 1;
                    };
                }
                cout << sum - (t + c - f);
            };
        };
    }
    return 0;
}

