int main () {
    int l;
    char str [20], sub [20], *max, *p, temp;
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
    while (cin >> str) {
        l = strlen (str);
        max = str;
        for (p = str; p <= str + l; p = p + 1) {
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
            if (*max < *p) {
                max = p;
            };
        }
        temp = *max;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        *max = 0;
        cin >> sub;
        cout << str << temp << sub << max + 1 << endl;
    }
    return 0;
}

