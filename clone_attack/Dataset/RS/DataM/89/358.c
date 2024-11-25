int main () {
    int flag;
    flag = 0;
    int *p;
    int naySrq3v = 0;
    int n;
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
    int c [2] [(10218 - 217)] = {0};
    int a, b;
    cin >> n;
    while (1) {
        cin >> a >> b;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (a == 0 && b == 0)
            break;
        else {
            c[0][a]++;
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
            c[1][b]++;
        };
    }
    for (p = c[0]; c[0] + n > p; p++, naySrq3v++) {
        if (*p == 0 && *(p + 10001) == n - 1) {
            flag = 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            cout << naySrq3v << endl;
        };
    }
    if (flag == 0)
        cout << "NOT FOUND" << endl;
}

