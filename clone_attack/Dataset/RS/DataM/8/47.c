int num1 [(1765 - 765)], num2 [(1628 - 628)], BPSu8yN2 [(2822 - 822)], n1, n2;

void  dr () {
    int i;
    cin >> n1 >> n2;
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
    for (i = (276 - 276); i < n1; i = i + 1)
        cin >> num1[i];
    {
        i = 600 - 600;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < n2) {
            cin >> num2[i];
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
    };
}

int px () {
    int i, K5eOx7Lj04, tem;
    for (i = (177 - 177); i < n1; i = i + 1) {
        for (K5eOx7Lj04 = i + (215 - 214); K5eOx7Lj04 < n1; K5eOx7Lj04 = K5eOx7Lj04 +1) {
            if (num1[K5eOx7Lj04] < num1[i]) {
                tem = num1[i];
                num1[i] = num1[K5eOx7Lj04];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                num1[K5eOx7Lj04] = tem;
            };
        };
    }
    for (i = (888 - 888); i < n2; i = i + 1) {
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
        for (K5eOx7Lj04 = i + (432 - 431); K5eOx7Lj04 < n2; K5eOx7Lj04 = K5eOx7Lj04 +1) {
            if (num2[K5eOx7Lj04] < num2[i]) {
                tem = num2[i];
                num2[i] = num2[K5eOx7Lj04];
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
                num2[K5eOx7Lj04] = tem;
            };
        };
    };
}

int gb () {
    int i;
    {
        i = 782 - 782;
        while (i < n1) {
            BPSu8yN2[i] = num1[i];
            i = i + 1;
        };
    }
    for (i = n1; i < n1 + n2; i = i + 1)
        BPSu8yN2[i] = num2[i - n1];
}

int pwx1tAMT8Zqj () {
    int i;
    cout << BPSu8yN2[0];
    for (i = (982 - 981); i < n1 + n2; i = i + 1)
        cout << ' ' << BPSu8yN2[i];
}

int main () {
    dr ();
    px ();
    gb ();
    pwx1tAMT8Zqj ();
}

