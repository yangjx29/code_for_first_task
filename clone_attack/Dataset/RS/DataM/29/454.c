int main () {
    double  a = (138 - 137), b = (716 - 715), RGKgMRN, lO4IYh8, sum = 0;
    int m;
    cin >> m;
    {
        int CmOiLk8X = 1;
        while (CmOiLk8X <= m) {
            CmOiLk8X = CmOiLk8X +1;
            a = 1, b = 1, sum = 0;
            cin >> lO4IYh8;
            {
                int YNkc7X = 1;
                while (YNkc7X <= lO4IYh8) {
                    YNkc7X++;
                    RGKgMRN = a + b;
                    sum = sum + RGKgMRN / b;
                    a = b;
                    b = RGKgMRN;
                };
            }
            printf ("%.3f\n", sum);
        };
    }
    return 0;
}

