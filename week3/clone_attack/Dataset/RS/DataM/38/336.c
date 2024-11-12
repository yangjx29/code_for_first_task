int main () {
    int k;
    int SEpmtO, j, n;
    double  x [1001];
    double  *p;
    double  sum;
    double  sum2;
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
    double  eve;
    double  s;
    cin >> k;
    {
        SEpmtO = 0;
        while (SEpmtO < k) {
            SEpmtO = SEpmtO +1;
            p = x;
            cin >> n;
            sum = 0, sum2 = 0;
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
            {
                j = 0;
                while (j < n) {
                    j++;
                    cin >> *p;
                    sum = sum + *p;
                    sum2 = sum2 + (*p) * (*p);
                };
            }
            eve = sum / n;
            s = sqrt ((sum2 + n * eve * eve - 2 * sum * eve) / n);
            cout << fixed << setprecision (5) << s << endl;
        };
    }
    return 0;
}

