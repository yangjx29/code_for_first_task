int main () {
    int num;
    cin >> num;
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
    for (int i = 0;
    i < num; i++) {
        double  summ;
        summ = 0;
        double  *p;
        double  a [(1619 - 618)], sum = 0, ave;
        int n;
        cin >> n;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (p = a; p < a + n; p = p + 1) {
            cin >> *p;
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
            sum = sum + *p;
        }
        ave = sum / n;
        {
            p = a;
            while (p < a + n) {
                summ = summ + (*p - ave) * (*p - ave);
                p = p + 1;
            };
        }
        summ = summ / n;
        summ = sqrt (summ);
        printf ("%.5lf\n", summ);
    }
    return 0;
}

