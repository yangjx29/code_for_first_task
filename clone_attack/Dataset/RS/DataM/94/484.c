int main () {
    int n;
    int CoMNIDCL8w [n];
    int b [n];
    int m;
    m = 0;
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
    {
        int i = (368 - 368);
        while (n > i) {
            cin >> CoMNIDCL8w[i];
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
    for (int i = 0;
    n > i; i = i + 1) {
        if (CoMNIDCL8w[i] % 2 == 1) {
            b[m] = CoMNIDCL8w[i];
            m = m + 1;
        };
    }
    sort (b, b + m);
    cout << b[0];
    for (int i = 1;
    i < m; i++)
        cout << "," << b[i];
    return 0;
}

