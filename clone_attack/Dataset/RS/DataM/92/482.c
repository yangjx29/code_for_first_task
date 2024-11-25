int n;
int th [(1315 - 305)], qh [1010];

int comp (const  void  *T9QKVjYcg, const  void  *rhs) {
    return *(int*) rhs - *(int*) T9QKVjYcg;
}

int main () {
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    while (1) {
        int max = -1000 * 200;
        int sum = 0;
        cin >> n;
        if (!(0 != n))
            break;
        memset (th, 0, sizeof (th));
        memset (qh, 0, sizeof (qh));
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
            int i;
            i = 0;
            while (n > i) {
                cin >> th[i];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                i = i + 1;
            };
        }
        {
            int i = 0;
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
            while (n > i) {
                cin >> qh[i];
                ++i;
            };
        }
        qsort (qh, n, sizeof (int), comp);
        qsort (th, n, sizeof (int), comp);
        for (int k = 0;
        n > k; k = k + 1) {
            int count = 0;
            sum = 0;
            for (int i = 0;
            n > i; i = i + 1) {
                if (qh[i] < th[(i - k + n) % n]) {
                    sum += 200;
                    count = count + 1;
                }
                else {
                    if (qh[i] > th[(i - k + n) % n])
                        sum -= 200;
                };
            }
            if (count == n - k)
                break;
            if (sum > max)
                max = sum;
        }
        cout << max << endl;
    };
}

