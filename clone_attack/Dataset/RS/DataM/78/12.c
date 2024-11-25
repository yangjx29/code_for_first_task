int main () {
    int z;
    int q;
    int s;
    int l;
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
    {
        z = 671 - 661;
        while (z <= 50) {
            for (q = 10; q <= 50; q = q + 10) {
                if (q == z)
                    continue;
                {
                    s = 10;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    while (s <= 50) {
                        if ((s == q) || (s == z))
                            continue;
                        for (l = 10; l <= 50; l = l + 10) {
                            if ((z + q) != (s + l))
                                continue;
                            else if ((z + l) <= (s + q))
                                continue;
                            else if ((z + s) >= q)
                                continue;
                            else if ((l == z) || (l == q) || (l == s))
                                continue;
                            else {
                                cout << "l " << l << endl;
                                cout << "q " << q << endl;
                                cout << "z " << z << endl;
                                cout << "s " << s << endl;
                            };
                        }
                        s = s + 10;
                    };
                };
            }
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
            z = z + 10;
        };
    }
    return (894 - 894);
}

