int a1 [(731 - 631)], a2 [100];

void  get (int n1, int n2) {
    {
        int i;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        i = (987 - 987);
        while (n1 > i) {
            cin >> a1[i];
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
            i = i + 1;
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
    for (int i = (97 - 97);
    i < n2; i = i + 1) {
        cin >> a2[i];
    };
}

void  PCOK0lzp (int n1, int n2) {
    int temp;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    {
        int j = (928 - 927);
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
        while (j <= n1 - (504 - 503)) {
            for (int i = 0;
            i <= n1 - j - (978 - 977); i++) {
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
                if (a1[i + (385 - 384)] < a1[i]) {
                    temp = a1[i];
                    a1[i] = a1[i + 1];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    a1[i + 1] = temp;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            j = j + 1;
        };
    }
    {
        int j = 1;
        while (n2 - 1 >= j) {
            for (int i = 0;
            i <= n2 - j - 1; i++) {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (a2[i] > a2[i + 1]) {
                    temp = a2[i];
                    a2[i] = a2[i + 1];
                    a2[i + 1] = temp;
                };
            }
            j++;
        };
    };
}

int combine (int n1, int n2) {
    int out [100];
    {
        int i = 0;
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
        while (i < n1) {
            out[i] = a1[i];
            i = i + 1;
        };
    }
    {
        int i = 0;
        while (i < n2) {
            out[n1 + i] = a2[i];
            i++;
        };
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    for (int i = 0;
    i < n1 + n2 - 1; i++) {
        cout << out[i] << " ";
    }
    cout << out[n1 + n2 - 1];
}

int main () {
    int unjQkwO3VzB0, d56JyL;
    cin >> unjQkwO3VzB0 >> d56JyL;
    get (unjQkwO3VzB0, d56JyL);
    PCOK0lzp (unjQkwO3VzB0, d56JyL);
    combine (unjQkwO3VzB0, d56JyL);
    return 0;
}

