int main () {
    char ar4npCOMx9c [4];
    char h;
    int xx3TwREf0;
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
    int uNJTwRAQSkX [4], i, j, nZuseBVMgh;
    {
        xx3TwREf0 = 130 - 129;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (xx3TwREf0 <= 5) {
            {
                q = 1;
                while (q <= 5) {
                    {
                        s = 1;
                        while (s <= 5) {
                            for (l = 1; l <= 5; l++)
                                if ((xx3TwREf0 + q) == (s + l) && (xx3TwREf0 + l) > (s + q) && (xx3TwREf0 + s) < q) {
                                    uNJTwRAQSkX[(43 - 43)] = xx3TwREf0 * 10;
                                    ar4npCOMx9c[(576 - 576)] = 'z';
                                    uNJTwRAQSkX[1] = q * 10;
                                    uNJTwRAQSkX[(380 - 378)] = s * 10;
                                    uNJTwRAQSkX[(340 - 337)] = l * 10;
                                    ar4npCOMx9c[1] = 'q';
                                    ar4npCOMx9c[2] = 's';
                                    ar4npCOMx9c[(412 - 409)] = 'l';
                                }
                            s++;
                        };
                    }
                    q = q + 1;
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
            xx3TwREf0++;
        };
    }
    {
        i = 0;
        while (i < 3) {
            {
                j = 0;
                while (j < 3 - i) {
                    if (uNJTwRAQSkX[j] < uNJTwRAQSkX[j + 1]) {
                        nZuseBVMgh = uNJTwRAQSkX[j];
                        uNJTwRAQSkX[j] = uNJTwRAQSkX[j + 1];
                        uNJTwRAQSkX[j + 1] = nZuseBVMgh;
                        h = ar4npCOMx9c[j];
                        ar4npCOMx9c[j] = ar4npCOMx9c[j + 1];
                        ar4npCOMx9c[j + 1] = h;
                    }
                    j++;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < 4) {
            cout << ar4npCOMx9c[i] << " " << uNJTwRAQSkX[i] << endl;
            i = i + 1;
        };
    }
    return 0;
}

