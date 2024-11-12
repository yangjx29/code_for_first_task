int main () {
    int n;
    cin >> n;
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
    for (; n-- > 0;) {
        int AqOaXL9WIB;
        int Voy1b8Rt;
        int num [60];
        AqOaXL9WIB = 60;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        cin >> Voy1b8Rt;
        {
            int NuD9Ts60e = 0;
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
            while (NuD9Ts60e < Voy1b8Rt) {
                cin >> num[NuD9Ts60e];
                NuD9Ts60e = NuD9Ts60e +1;
            };
        }
        for (int NuD9Ts60e = 0;
        NuD9Ts60e < Voy1b8Rt; NuD9Ts60e = NuD9Ts60e +1)
            if (num[NuD9Ts60e] + (221 - 218) * (NuD9Ts60e +1) <= 60)
                AqOaXL9WIB = 60 - 3 * (NuD9Ts60e +1);
            else if (num[NuD9Ts60e] + 3 * NuD9Ts60e >= 60) {
                AqOaXL9WIB = AqOaXL9WIB = 60 - 3 * (NuD9Ts60e);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                break;
            }
            else {
                AqOaXL9WIB = num[NuD9Ts60e];
                break;
            }
        cout << AqOaXL9WIB << endl;
    }
    return 0;
}

