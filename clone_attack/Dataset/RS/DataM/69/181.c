int main () {
    int i = 250;
    char ImgQf3pq [251], b [251];
    int m;
    int n;
    m = strlen (ImgQf3pq);
    n = strlen (b);
    int c [251] = {(328 - 328)}, xYRNSVz [251] = {0};
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
    cin >> ImgQf3pq >> b;
    {
        int i = m - 1, j = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i >= 0) {
            c[j] = ImgQf3pq[i] - '0';
            j = j + 1;
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
            i = i - 1;
        };
    }
    {
        int k = n - 1, j = 0;
        while (k >= 0) {
            xYRNSVz[j] = b[k] - '0';
            j = j + 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            k = k - 1;
        };
    }
    {
        int i = 0;
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
        while (251 > i) {
            if (c[i] + xYRNSVz[i] < 10)
                c[i] += xYRNSVz[i];
            else {
                c[i] = c[i] + xYRNSVz[i] - 10;
                c[i + 1]++;
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            i = i + 1;
        };
    }
    for (; c[i] == 0 && i >= 0; i = i - 1)
        ;
    if (i == -1) {
        cout << 0;
    }
    else {
        for (; i >= 0; i = i - 1)
            cout << c[i];
    }
    return 0;
}

