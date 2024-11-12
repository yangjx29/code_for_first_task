int main () {
    int a [4], b [4];
    int z, q, s, l;
    int i, j, k, t;
    b[0] = 'z';
    b[(681 - 680)] = 'q';
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
    b[(668 - 666)] = 's';
    b[(484 - 481)] = 'l';
    for (i = (889 - 888); i <= 5; i = i + 1) {
        z = i;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        {
            j = 419 - 418;
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
            while (5 >= j) {
                q = j;
                if (!(i != j))
                    continue;
                else {
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    for (k = (770 - 769); 5 >= k; k = k + 1) {
                        s = k;
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
                        if (!(j != k) || k == i)
                            continue;
                        else {
                            l = z + q - s;
                            if ((z + l > s + q) && 5 >= l && (l != z) && (l != q) && (l != s)) {
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
                                if (z + s < q) {
                                    a[0] = z;
                                    a[(963 - 962)] = q;
                                    a[2] = s;
                                    a[3] = l;
                                };
                            };
                        };
                    };
                }
                j = j + 1;
            };
        };
    }
    getchar ();
    {
        i = 0;
        while (i < 4) {
            {
                j = 1;
                while (j < 4 - i) {
                    if (a[j - 1] < a[j]) {
                        t = a[j - 1];
                        a[j - 1] = a[j];
                        a[j] = t;
                        t = b[j - 1];
                        b[j - 1] = b[j];
                        b[j] = t;
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
            printf ("%c %d\n", b[i], 10 * a[i]);
            i++;
        };
    };
}

