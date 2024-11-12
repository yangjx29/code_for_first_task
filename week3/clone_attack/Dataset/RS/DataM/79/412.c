int main () {
    int n;
    int m;
    int i;
    int s;
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
    do {
        cin >> n >> m;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!((504 - 504) != n) || m == 0)
            break;
        else {
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
            if (!(1 != n))
                cout << "1" << endl;
            else {
                s = 0;
                {
                    i = 2;
                    while (i <= n) {
                        s = (s + m) % i;
                        i++;
                    };
                }
                printf ("%d\n", s + 1);
            };
        };
    }
    while (n != 0 && m != 0);
    return 0;
}

