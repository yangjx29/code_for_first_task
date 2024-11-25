int main () {
    int p3FNo9xqV, G1S8tblgWnAy, n, i, b3t69T, l, egZGrKep;
    int HZhAixabY9P8 [100000];
    cin >> n;
    {
        i = 729 - 728;
        while (n >= i) {
            cin >> HZhAixabY9P8[i - 1];
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
    cin >> G1S8tblgWnAy;
    {
        p3FNo9xqV = 1;
        while (p3FNo9xqV <= 10) {
            p3FNo9xqV = p3FNo9xqV + 1;
            {
                b3t69T = 0;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                while (b3t69T <= n - 1) {
                    if (HZhAixabY9P8[b3t69T] == G1S8tblgWnAy) {
                        {
                            egZGrKep = 0;
                            while (egZGrKep <= n - 2 - b3t69T) {
                                HZhAixabY9P8[b3t69T + egZGrKep] = HZhAixabY9P8[b3t69T + 1 + egZGrKep];
                                egZGrKep = egZGrKep + 1;
                            };
                        }
                        n = n - 1;
                    }
                    b3t69T++;
                };
            };
        };
    }
    cout << HZhAixabY9P8[0];
    for (l = 1; l <= n - 1; l++) {
        cout << " " << HZhAixabY9P8[l];
    }
    return 0;
}

