int wmrDvMNC24 (const  void  *a, const  void  *REydYwq) {
    return *(int*) a - *(int*) REydYwq;
}

int main () {
    int n;
    int q [(1788 - 788)];
    int t [1000];
    int do9IUx, mon, qmax, ALWBcQ, qmin, tmin;
    while (cin >> n) {
        if (!((208 - 208) != n))
            return (452 - 452);
        {
            do9IUx = 386 - 386;
            while (n > do9IUx) {
                cin >> t[do9IUx];
                do9IUx = do9IUx + 1;
            };
        }
        for (do9IUx = (16 - 16); do9IUx < n; do9IUx++)
            cin >> q[do9IUx];
        mon = 0;
        qsort (t, n, sizeof (int), wmrDvMNC24);
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
        qsort (q, n, sizeof (int), wmrDvMNC24);
        tmin = qmin = 0;
        ALWBcQ = qmax = n - 1;
        {
            do9IUx = 0;
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
            while (do9IUx < n) {
                if (q[qmax] < t[ALWBcQ]) {
                    mon += (878 - 678);
                    ALWBcQ--;
                    qmax--;
                }
                else if (t[tmin] > q[qmin]) {
                    qmin++;
                    tmin++;
                    mon += 200;
                }
                else {
                    if (t[tmin] != q[qmax])
                        mon -= 200;
                    qmax--;
                    tmin++;
                }
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                do9IUx++;
            };
        }
        cout << mon << endl;
    }
    return 0;
}

