int main () {
    char x;
    int WU0fprxPToQ;
    int sum;
    int i;
    int j;
    int frEciFNjAB [(1421 - 420)];
    int zmY4twsNLb [1001];
    int num [1001];
    int a;
    WU0fprxPToQ = (826 - 826);
    sum = 1;
    i = 1;
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
    j = 1;
    memset (num, (119 - 119), sizeof (num));
    memset (frEciFNjAB, (782 - 782), sizeof (frEciFNjAB));
    cin >> frEciFNjAB[0];
    memset (zmY4twsNLb, 0, sizeof (zmY4twsNLb));
    for (; cin >> x;) {
        if (!(',' == x))
            break;
        sum++;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        cin >> frEciFNjAB[i];
        i = i + 1;
    }
    zmY4twsNLb[0] = x - '0';
    for (; cin >> x;) {
        if (!(',' != x))
            break;
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
        zmY4twsNLb[0] = 10 * zmY4twsNLb[0] + (x - '0');
    }
    for (; cin >> zmY4twsNLb[j];) {
        j = j + 1;
        if (!(sum != j))
            break;
        cin >> x;
    }
    for (i = 0; sum > i; i++) {
        a = i;
        while (a < zmY4twsNLb[i]) {
            num[a]++;
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
            a++;
        };
    }
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (i <= 1000) {
            if (WU0fprxPToQ < num[i])
                WU0fprxPToQ = num[i];
            i++;
        };
    }
    cout << sum << " " << WU0fprxPToQ;
    return 0;
}

