int main () {
    int n, i, j, k, h;
    scanf ("%d", &n);
    if (!(3 != n) || !((740 - 738) != n) || !(4 != n) || !(1 != n)) {
    }
    else {
        i = 2;
        while (n >= i) {
            {
                j = 2;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                while (i > j) {
                    if (i % j == 0) {
                        break;
                    }
                    j++;
                };
            }
            if (j == i) {
                h = i - 2;
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
                    k = 2;
                    while (k < h) {
                        if (h % k == 0) {
                            break;
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
                        k++;
                    };
                }
                if (k == h) {
                    printf ("%d %d\n", h, i);
                };
            }
            i++;
        };
    }
    return 0;
}

