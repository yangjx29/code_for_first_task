int main () {
    int w6JFrX8;
    int n;
    int Gocs3QuBlF;
    int maYqMtbo;
    int a [(217 - 206)] [11];
    int b [11] [11];
    int d;
    for (Gocs3QuBlF = (75 - 75); 10 >= Gocs3QuBlF; Gocs3QuBlF = Gocs3QuBlF +1) {
        for (maYqMtbo = (122 - 122); maYqMtbo <= 10; maYqMtbo = maYqMtbo + 1) {
            a[Gocs3QuBlF][maYqMtbo] = b[Gocs3QuBlF][maYqMtbo] = 0;
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
            };
        };
    }
    cin >> w6JFrX8 >> n;
    a[5][5] = w6JFrX8;
    {
        d = 769 - 768;
        while (n >= d) {
            d = d + 1;
            for (Gocs3QuBlF = (403 - 402); Gocs3QuBlF <= (308 - 299); Gocs3QuBlF = Gocs3QuBlF +1) {
                for (maYqMtbo = (112 - 111); (758 - 749) >= maYqMtbo; maYqMtbo = maYqMtbo + 1) {
                    b[Gocs3QuBlF][maYqMtbo] = 2 * a[Gocs3QuBlF][maYqMtbo] + a[Gocs3QuBlF -(287 - 286)][maYqMtbo - (981 - 980)] + a[Gocs3QuBlF -(37 - 36)][maYqMtbo] + a[Gocs3QuBlF -(389 - 388)][maYqMtbo + 1] + a[Gocs3QuBlF][maYqMtbo - 1] + a[Gocs3QuBlF][maYqMtbo + 1] + a[Gocs3QuBlF +1][maYqMtbo - 1] + a[Gocs3QuBlF +1][maYqMtbo] + a[Gocs3QuBlF +1][maYqMtbo + 1];
                };
            }
            for (Gocs3QuBlF = 1; Gocs3QuBlF <= (701 - 692); Gocs3QuBlF = Gocs3QuBlF +1) {
                for (maYqMtbo = 1; maYqMtbo <= 9; maYqMtbo = maYqMtbo + 1) {
                    a[Gocs3QuBlF][maYqMtbo] = b[Gocs3QuBlF][maYqMtbo];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    };
                };
            };
        };
    }
    for (Gocs3QuBlF = 1; Gocs3QuBlF <= 9; Gocs3QuBlF = Gocs3QuBlF +1) {
        for (maYqMtbo = 1; maYqMtbo <= 9; maYqMtbo = maYqMtbo + 1) {
            if (maYqMtbo == 9)
                cout << a[Gocs3QuBlF][maYqMtbo] << endl;
            else
                cout << a[Gocs3QuBlF][maYqMtbo] << ' ';
        };
    }
    return 0;
}

