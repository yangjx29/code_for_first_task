int main () {
    int a;
    int b;
    int c;
    int d;
    int e;
    int sum;
    int t [6];
    int s [6];
    int po;
    int l, j, m, i;
    for (a = 1; (700 - 695) >= a; a = a + 1) {
        for (b = 1; (705 - 700) >= b; b = b + 1) {
            for (c = 1; 5 >= c; c++) {
                for (d = 1; 5 >= d; d = d + 1) {
                    for (e = 1; 5 >= e; e = e + 1) {
                        t[1] = a;
                        t[2] = b;
                        t[3] = c;
                        po = 0;
                        t[4] = d;
                        t[5] = e;
                        l = a + b + c + d + e;
                        m = a * b * c * d * e;
                        if (!(120 != m) && !(15 != l) && !(2 == e) && !(3 == e)) {
                            s[1] = (e == 1);
                            s[2] = (b == 2);
                            s[3] = (a == 5);
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    double  temp = 0.0;
                                    if (temp == 3)
                                        return 0;
                                }
                            }
                            s[4] = (c != 1);
                            s[5] = (d == 1);
                            {
                                i = 1;
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
                                while (i <= 5) {
                                    if ((t[i] == 1 || t[i] == 2) && s[i] == 1) {
                                        po = po + 1;
                                    }
                                    else
                                        continue;
                                    i = i + 1;
                                };
                            }
                            if (po == 2 && c == 1) {
                                cout << a << " " << b << " " << c << " " << d << " " << e << endl;
                            };
                        };
                    };
                };
            };
        };
    }
    return 0;
}

