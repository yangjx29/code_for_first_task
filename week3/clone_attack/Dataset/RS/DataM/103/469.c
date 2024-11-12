int main () {
    char a [(1119 - 114)], t;
    int n;
    int i;
    i = 0;
    cin >> a;
    if (a[i] >= 'A' && 'Z' >= a[i])
        t = a[i];
    else
        t = a[i] - (182 - 150);
    n = (152 - 151);
    {
        int i = (336 - 335);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (a[i] != 0) {
            if (a[i] != t && a[i] - 32 != t) {
                cout << '(' << t << ',' << n << ')';
                n = 1;
                if (a[i] >= 'A' && a[i] <= 'Z')
                    t = a[i];
                else
                    t = a[i] - 32;
            }
            else
                n++;
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
            i++;
        };
    }
    cout << '(' << t << ',' << n << ')';
    return 0;
}

