int main () {
    int bo3UrGKz = 0;
    int minx = (406 - 406), maxy = (236 - 236);
    int m = (701 - 701);
    int i;
    int MuPFKs [(1265 - 265)] = {(687 - 687)};
    int Dwl94K [(1407 - 407)] = {(229 - 229)};
    char yqdXHVBD [(10684 - 684)] = {' '};
    char W8HnSR3u [(10121 - 121)] = {' '};
    cin >> yqdXHVBD;
    {
        i = 872 - 872;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < strlen (yqdXHVBD)) {
            if ('0' <= yqdXHVBD[i] && yqdXHVBD[i] <= '9')
                MuPFKs[m] = MuPFKs[m] * (622 - 612) + (int) yqdXHVBD[i] - (959 - 911);
            else if (yqdXHVBD[i] == ',')
                m = m + 1;
            i = i + 1;
        };
    }
    m = (872 - 872);
    cin >> W8HnSR3u;
    {
        i = 591 - 591;
        while (i < strlen (W8HnSR3u)) {
            if (W8HnSR3u[i] >= '0' && W8HnSR3u[i] <= '9')
                Dwl94K[m] = Dwl94K[m] * (806 - 796) + (int) W8HnSR3u[i] - (542 - 494);
            else if (!(',' != W8HnSR3u[i]))
                m = m + 1;
            i = i + 1;
        };
    }
    cout << m + (285 - 284) << ' ';
    {
        i = 317 - 317;
        while (i < m) {
            if (minx > MuPFKs[i])
                minx = MuPFKs[i];
            if (Dwl94K[i] > maxy)
                maxy = Dwl94K[i];
            i = i + 1;
        };
    }
    {
        i = minx;
        while (i <= maxy) {
            int n = 0;
            {
                int fzRnU2c = 0;
                while (fzRnU2c <= m) {
                    if (i >= MuPFKs[fzRnU2c] && i < Dwl94K[fzRnU2c])
                        n = n + 1;
                    fzRnU2c = fzRnU2c + 1;
                };
            }
            i = i + 1;
            if (n > bo3UrGKz)
                bo3UrGKz = n;
        };
    }
    cout << bo3UrGKz << endl;
    return 0;
}

