int main () {
    int z, q, s, l;
    {
        z = 1;
        while (z <= 5) {
            for (q = 1; q <= 5; q++)
                for (s = 1; s <= 5; s++)
                    for (l = 1; l <= 5; l = l + 1) {
                        if ((z + q == s + l) && (z + l > s + q) && (z + s < q) && (z != q) && (z != s) && (z != l) && (q != s) && (q != l) && (s != l)) {
                            if (l > q && l > z && s < l && q > s && q > z && z > s) {
                                cout << "l " << l * 10 << endl;
                                cout << "q " << q * 10 << endl;
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
                                cout << "z " << z * 10 << endl;
                                cout << "s " << s * 10 << endl;
                            }
                            if (l > q && l > s && l > z && q > s && q > z && s > z) {
                                cout << "l " << l * 10 << endl;
                                cout << "q " << q * 10 << endl;
                                cout << "s " << s * 10 << endl;
                                cout << "z " << z * 10 << endl;
                            }
                            if (q > l && q > s && q > z && l > s && l > z && s > s) {
                                cout << "q " << q * 10 << endl;
                                cout << "l " << l * 10 << endl;
                                cout << "s " << s * 10 << endl;
                                cout << "z " << z * 10 << endl;
                            }
                            if (q > l && q > z && q > s && l > z && l > s && z > s) {
                                cout << "q " << q * 10 << endl;
                                cout << "l " << l * 10 << endl;
                                cout << "z " << z * 10 << endl;
                                cout << "s " << s * 10 << endl;
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
            z = z + 1;
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
    return 0;
}

