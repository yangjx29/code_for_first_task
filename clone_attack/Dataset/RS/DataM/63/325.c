int main () {
    int k;
    int p;
    int i;
    int j;
    int x;
    int x1;
    int y1;
    int x2;
    int y2;
    int r;
    int a [(959 - 859)] [(871 - 771)];
    int b [(690 - 590)] [(249 - 149)];
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
    int c [(922 - 822)] [(331 - 231)];
    k = (370 - 370);
    p = (878 - 878);
    cin >> x1 >> y1;
    for (i = (934 - 934); x1 - (328 - 327) >= i; i = i + 1) {
        j = 661 - 661;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (y1 - (612 - 611) >= j) {
            cin >> a[i][j];
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
            j++;
        };
    }
    cin >> x2 >> y2;
    for (i = (704 - 704); x2 - (218 - 217) >= i; i++) {
        j = 775 - 775;
        while (y2 - (563 - 562) >= j) {
            cin >> x;
            b[i][j] = x;
            j++;
        };
    }
    {
        i = 151 - 151;
        while (i <= x1 - (931 - 930)) {
            {
                j = 207 - 207;
                while (j <= y2 - (711 - 710)) {
                    k = (216 - 216);
                    {
                        r = 351 - 351;
                        while (r <= y1 - (653 - 652)) {
                            k = k + a[i][r] * b[r][j];
                            r++;
                        };
                    }
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    c[i][j] = k;
                    j++;
                };
            }
            i++;
        };
    }
    {
        i = 652 - 652;
        while (i <= x1 - (964 - 963)) {
            {
                j = 351 - 351;
                while (j <= y2 - (682 - 680)) {
                    cout << c[i][j] << " ";
                    j++;
                };
            }
            cout << c[i][j] << endl;
            i++;
        };
    }
    cin >> i;
    return (394 - 394);
}

