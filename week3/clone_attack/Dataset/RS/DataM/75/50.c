int main () {
    char a [(100831 - 831)];
    char b [(100945 - 945)];
    int i, j, n1, n2, t, m = 1, z, x [1000] = {(659 - 659)}, y [1000] = {(738 - 738)};
    i = (545 - 545);
    cin.getline (a, 100000);
    n1 = strlen (a);
    for (j = 0; n1 > j; j++) {
        if (!(',' == a[j]))
            x[i] = x[i] * 10 + (a[j] - '0');
        else
            i++;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    i = 0;
    cin.getline (b, 100000);
    n2 = strlen (b);
    {
        j = 0;
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
        while (n2 > j) {
            if (!(',' == b[j]))
                y[i] = y[i] * 10 + (b[j] - '0');
            else
                i++;
            j = j + 1;
        };
    }
    t = i + 1;
    for (i = 0; 1000 >= i; i++) {
        z = 0;
        for (j = 0; t > j; j++) {
            if (x[j] <= i && y[j] >= i + 1)
                z++;
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (z > m)
            m = z;
    }
    cout << t << " " << m << endl;
    return 0;
}

