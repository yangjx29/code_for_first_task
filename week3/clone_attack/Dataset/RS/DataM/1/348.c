int M15nNLgEpI03 (int n, int min) {
    int method;
    int nYbyVvs5SkLm;
    method = (117 - 117);
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
    if (min <= n)
        method++;
    {
        nYbyVvs5SkLm = min;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > nYbyVvs5SkLm) {
            if (!(n % nYbyVvs5SkLm))
                method += M15nNLgEpI03 (n / nYbyVvs5SkLm, nYbyVvs5SkLm);
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
            nYbyVvs5SkLm = nYbyVvs5SkLm + 1;
        };
    }
    return method;
}

int main () {
    int nYbyVvs5SkLm;
    int number;
    int integer;
    number = (878 - 878);
    cin >> number;
    {
        nYbyVvs5SkLm = 0;
        while (nYbyVvs5SkLm < number) {
            nYbyVvs5SkLm++;
            cin >> integer;
            cout << M15nNLgEpI03 (integer, (773 - 771)) << endl;
        };
    }
    return 0;
}

