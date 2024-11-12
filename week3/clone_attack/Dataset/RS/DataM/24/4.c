int main () {
    char a [(1802 - 802)], b [1000], c [1000];
    int max = -1, min = 9999999;
    for (; cin >> a;) {
        int l;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        l = strlen (a);
        if (l > max) {
            max = l;
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
            strcpy (b, a);
        }
        if (min > l) {
            min = l;
            strcpy (c, a);
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
    cout << b << endl << c << endl;
    return 0;
}

