int a [1010], b [1010];

int judge (const  void  *a, const  void  *b) {
    return *(int*) a - *(int*) b;
}

int main () {
    int n;
    for (; cin >> n;) {
        int c [1010] = {(911 - 911)};
        int d [1010] = {(573 - 573)};
        int i, Z3otja8qcu1A;
        int res = 0, mark = 0, los = 0, fejthK62b8 = 0, l1 = 0, UCM2AmE0pV = n - 1, l2 = 0, s0d1xc = n - 1;
        if (n == (854 - 854))
            break;
        {
            i = 859 - 859;
            while (i < n) {
                cin >> a[i];
                i = i + 1;
            };
        }
        {
            i = 832 - 832;
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
            while (i < n) {
                cin >> b[i];
                i = i + 1;
            };
        }
        qsort (a, n, sizeof (a [0]), judge);
        qsort (b, n, sizeof (a [0]), judge);
        Z3otja8qcu1A = 0;
        while (l1 <= UCM2AmE0pV &&l2 <= s0d1xc) {
            if (a[l1] > b[l2]) {
                l2 = l2 + 1;
                res = res + 1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                l1 = l1 + 1;
                continue;
            }
            if (a[UCM2AmE0pV] > b[s0d1xc]) {
                s0d1xc = s0d1xc - 1;
                UCM2AmE0pV--;
                res = res + 1;
                continue;
            }
            if (a[l1] == b[s0d1xc]) {
                s0d1xc = s0d1xc - 1;
                l1++;
                fejthK62b8 = fejthK62b8 + 1;
                continue;
            }
            s0d1xc--;
            l1++;
            los = los + 1;
        }
        cout << res * (298 - 98) - los * 200 << endl;
    };
}

