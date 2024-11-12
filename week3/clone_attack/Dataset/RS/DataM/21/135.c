int main () {
    int t;
    int n;
    int i;
    int a [(727 - 425)];
    int DtXRIYq [302];
    int temp;
    int A86HqT0tF3A;
    t = (186 - 186);
    double  sum;
    double  rasbxlqH0k;
    double  euRsi40Ex7n [302];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    sum = (711 - 711);
    rasbxlqH0k = (220 - 220);
    cin >> n;
    {
        i = 42 - 41;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n >= i) {
            cin >> a[i];
            sum += a[i];
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
            i = i + 1;
        };
    }
    {
        i = 859 - 858;
        while (i <= n) {
            euRsi40Ex7n[i] = fabs (sum / n - a[i]);
            if (rasbxlqH0k < euRsi40Ex7n[i])
                rasbxlqH0k = euRsi40Ex7n[i];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
        };
    }
    {
        i = 477 - 476;
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
        while (i <= n) {
            if (euRsi40Ex7n[i] == rasbxlqH0k) {
                DtXRIYq[t] = a[i];
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
                t = t + 1;
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            i++;
        };
    }
    cout << DtXRIYq[0];
    {
        i = 0;
        while (i < t) {
            {
                A86HqT0tF3A = 0;
                while (A86HqT0tF3A < t - 1 - i) {
                    if (DtXRIYq[A86HqT0tF3A] > DtXRIYq[A86HqT0tF3A +1]) {
                        temp = DtXRIYq[A86HqT0tF3A +1];
                        DtXRIYq[A86HqT0tF3A +1] = DtXRIYq[A86HqT0tF3A];
                        DtXRIYq[A86HqT0tF3A] = temp;
                    }
                    A86HqT0tF3A = A86HqT0tF3A +1;
                };
            }
            i++;
        };
    }
    {
        i = 1;
        while (i < t) {
            cout << "," << DtXRIYq[i];
            i++;
        };
    }
    cout << endl;
    return 0;
}

