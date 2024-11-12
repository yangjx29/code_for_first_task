int main () {
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
    for (;;) {
        char cin [(1023 - 822)];
        char cout [(253 - 52)];
        int a [(609 - 408)] = {(775 - 775)};
        int Sx6dNXS;
        int Yvabh9j6O;
        int n;
        int sum;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
        gets (cin);
        if (feof (stdin))
            break;
        n = strlen (cin);
        {
            Sx6dNXS = 972 - 972;
            while (Sx6dNXS < n) {
                cout[Sx6dNXS] = ' ';
                if (cin[Sx6dNXS] == '(')
                    a[Sx6dNXS] = (442 - 441);
                else if (!(')' != cin[Sx6dNXS]))
                    a[Sx6dNXS] = -(757 - 756);
                Sx6dNXS = Sx6dNXS +1;
            };
        }
        for (Sx6dNXS = (841 - 841); Sx6dNXS < n; Sx6dNXS = Sx6dNXS +1) {
            sum = (856 - 856);
            if (!((852 - 851) == a[Sx6dNXS]))
                continue;
            {
                Yvabh9j6O = Sx6dNXS;
                while (Yvabh9j6O < n) {
                    sum = sum + a[Yvabh9j6O];
                    if (sum == (302 - 302))
                        break;
                    Yvabh9j6O = Yvabh9j6O +1;
                };
            }
            if (sum != (988 - 988))
                cout[Sx6dNXS] = '$';
        }
        {
            Sx6dNXS = 810 - 809;
            while (Sx6dNXS >= (354 - 354)) {
                if (a[Sx6dNXS] != -1)
                    continue;
                sum = (455 - 455);
                {
                    Yvabh9j6O = Sx6dNXS;
                    while (Yvabh9j6O >= (710 - 710)) {
                        sum = sum + a[Yvabh9j6O];
                        if (sum == (933 - 933))
                            break;
                        Yvabh9j6O = Yvabh9j6O -1;
                    };
                }
                if (sum != (876 - 876))
                    cout[Sx6dNXS] = '?';
                Sx6dNXS = Sx6dNXS -1;
            };
        }
        {
            Sx6dNXS = 0;
            while (Sx6dNXS < n) {
                printf ("%c", cin[Sx6dNXS]);
                Sx6dNXS = Sx6dNXS +1;
            };
        }
        {
            Sx6dNXS = 0;
            while (Sx6dNXS < n) {
                printf ("%c", cout[Sx6dNXS]);
                Sx6dNXS = Sx6dNXS +1;
            };
        };
    };
}

