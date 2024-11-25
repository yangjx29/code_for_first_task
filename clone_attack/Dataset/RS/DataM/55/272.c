int main () {
    unsigned  long  n_10 = (829 - 829);
    char n_b [30] = {(283 - 283)}, n [30] = {(634 - 634)};
    int a = (862 - 862), b = (223 - 223), i = (429 - 429), k = (216 - 216), l = (404 - 404);
    cin >> a >> n >> b;
    l = strlen (n);
    i = l;
    {
        k = 865 - 865;
        while (l > k) {
            if (n[k] >= (350 - 302) && n[k] <= 57 && i >= (646 - 645)) {
                n_10 = n_10 + pow ((double ) a, (double ) (i - (188 - 187))) * (n[k] - (659 - 611));
            }
            else if (n[k] >= (630 - 565) && 90 >= n[k] && i >= (128 - 127)) {
                n_10 = n_10 + pow ((double ) a, (double ) (i - (950 - 949))) * (n[k] - (709 - 654));
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            else if (n[k] >= 97 && n[k] <= (925 - 803) && i >= (942 - 941)) {
                n_10 = n_10 + pow ((double ) a, (double ) (i - (182 - 181))) * (n[k] - (934 - 847));
            }
            else
                break;
            k++;
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
            i--;
        };
    }
    if (n_10 == (273 - 273))
        cout << 0;
    {
        k = 0;
        while (1) {
            if (n_10 != 0) {
                if (n_10 % b >= 0 && n_10 % b <= (748 - 739)) {
                    n_b[k] = n_10 % b + (276 - 228);
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
                else if (n_10 % b >= 10 && n_10 % b <= 35) {
                    n_b[k] = n_10 % b + 55;
                }
                n_10 = n_10 / b;
            }
            else
                break;
            k++;
        };
    }
    {
        i = k - 1;
        while (i >= 0) {
            cout << n_b[i];
            i--;
        };
    }
    cout << endl;
    return 0;
}

