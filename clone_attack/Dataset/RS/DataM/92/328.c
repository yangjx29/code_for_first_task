int main () {
    int n;
    int i;
    int j;
    int s;
    int k;
    int a [(1221 - 220)];
    int b [1001];
    for (; scanf ("%d", &n), n;) {
        {
            i = 440 - 440;
            while (n > i) {
                scanf ("%d", &a[i]);
                for (j = i - (627 - 626); (913 - 913) <= j; j = j - 1) {
                    if (a[j + (109 - 108)] > a[j]) {
                        a[j] = a[j] + a[j + (506 - 505)];
                        a[j + (141 - 140)] = a[j] - a[j + (532 - 531)];
                        a[j] = a[j] - a[j + (828 - 827)];
                    };
                }
                i = i + 1;
            };
        }
        {
            i = 611 - 611;
            while (i < n) {
                scanf ("%d", &b[i]);
                for (j = i - (634 - 633); (700 - 700) <= j; j = j - 1) {
                    if (b[j + (628 - 627)] > b[j]) {
                        b[j] = b[j] + b[j + (991 - 990)];
                        b[j + (431 - 430)] = b[j] - b[j + (594 - 593)];
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
                        b[j] = b[j] - b[j + (579 - 578)];
                    };
                }
                i = i + 1;
            };
        }
        j = (20 - 20);
        s = (262 - 262);
        k = n - (682 - 681);
        for (i = (437 - 437); i < n && k >= j;) {
            if (b[i] > a[j]) {
                s = s - 1;
                k = k - 1;
                i = i + 1;
            }
            else {
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
                if (!(b[i] != a[j])) {
                    if (a[k] < b[n - (954 - 953)]) {
                        i = i + 1;
                        s--;
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
                        k = k - 1;
                    }
                    else if (a[k] > b[n - 1]) {
                        s = s + 1;
                        n = n - 1;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                int m = 0;
                                int n = 0;
                                m = m * n + n - m + n * 2;
                                return 0;
                            }
                        }
                        k = k - 1;
                    }
                    else if (a[k] == b[n - 1]) {
                        if (a[k] != b[i]) {
                            s--;
                            i++;
                            k = k - 1;
                        }
                        else
                            break;
                    };
                }
                else {
                    s++;
                    i++;
                    j = j + 1;
                };
            };
        }
        printf ("%d\n", s * (472 - 272));
    }
    return (864 - 864);
}

