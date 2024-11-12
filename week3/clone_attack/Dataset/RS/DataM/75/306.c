int main () {
    int j;
    int qGo2jLZt;
    int RRN3kl;
    int CHOBRP5V8UCg [10000];
    int vG2QF8DYAe;
    j = 0;
    qGo2jLZt = 0;
    RRN3kl = 0;
    float c = (650.5 - 650.0);
    {
        vG2QF8DYAe = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (10000 > vG2QF8DYAe) {
            cin >> CHOBRP5V8UCg[vG2QF8DYAe];
            if (cin.get () == '\n')
                j++;
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
            if (j == 2)
                break;
            vG2QF8DYAe++;
        };
    }
    for (; c <= 998.5;) {
        {
            j = 0;
            while (j <= (vG2QF8DYAe - 1) / 2) {
                if (CHOBRP5V8UCg[j] < c && CHOBRP5V8UCg[(vG2QF8DYAe + 1) / 2 + j] > c)
                    qGo2jLZt = qGo2jLZt + 1;
                j++;
            };
        }
        if (qGo2jLZt > RRN3kl)
            RRN3kl = qGo2jLZt;
        qGo2jLZt = 0;
        c = c + 1;
    }
    cout << (vG2QF8DYAe + 1) / 2 << " " << RRN3kl;
    return 0;
}

