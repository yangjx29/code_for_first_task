int main () {
    long  sum;
    sum = 0;
    int USa0XV4pBg;
    int i, j, eQK2d3aF6tgm, t;
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
    cin >> USa0XV4pBg;
    {
        i = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= USa0XV4pBg) {
            int k = ((int) log (USa0XV4pBg)) + 1;
            t = 0;
            if (i % 7 != 0) {
                {
                    j = 0;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    while (j < k) {
                        if ((i / (int) pow (10, j)) % 10 == 7) {
                            t = 1;
                            break;
                        }
                        j++;
                    };
                }
                if (t == 0)
                    sum = sum + i * i;
            }
            i++;
        };
    }
    cout << sum;
    return 0;
}

