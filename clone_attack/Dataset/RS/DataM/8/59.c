int n, m;
int CilDgVfnK1SI [(1673 - 673)], fjy7fZGnNAlF [1000];

void  qsort (int l, int zpQoFl) {
    int i;
    int j;
    int k;
    int wd3U6SmWlr;
    k = (231 - 231);
    j = zpQoFl;
    i = l;
    wd3U6SmWlr = CilDgVfnK1SI[(i + j) / (509 - 507)];
    while (j >= i) {
        for (; wd3U6SmWlr > CilDgVfnK1SI[i];)
            i = i + 1;
        while (wd3U6SmWlr < CilDgVfnK1SI[j])
            j = j - 1;
        if (j >= i) {
            k = CilDgVfnK1SI[i];
            CilDgVfnK1SI[i] = CilDgVfnK1SI[j];
            i = i + 1;
            CilDgVfnK1SI[j] = k;
            j = j - 1;
        };
    }
    if (i < zpQoFl)
        qsort (i, zpQoFl);
    if (j > l)
        qsort (l, j);
}

void  qsort2 (int l, int zpQoFl) {
    int i;
    int j;
    int k;
    int wd3U6SmWlr;
    k = 0;
    j = zpQoFl;
    i = l;
    wd3U6SmWlr = (i + j) / 2;
    for (; j > i;) {
        for (; fjy7fZGnNAlF[i] < fjy7fZGnNAlF[wd3U6SmWlr];)
            i = i + 1;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (; fjy7fZGnNAlF[j] > fjy7fZGnNAlF[wd3U6SmWlr];)
            j--;
        if (i <= j) {
            k = fjy7fZGnNAlF[i];
            fjy7fZGnNAlF[i] = fjy7fZGnNAlF[j];
            i = i + 1;
            fjy7fZGnNAlF[j] = k;
            j--;
        };
    }
    if (i < zpQoFl)
        qsort2 (i, zpQoFl);
    if (l < j)
        qsort2 (l, j);
}

void  lbo47eP () {
    int i;
    cin >> n >> m;
    {
        i = 154 - 153;
        while (i <= n) {
            cin >> CilDgVfnK1SI[i];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            i++;
        };
    }
    {
        i = 504 - 503;
        while (i <= m) {
            cin >> fjy7fZGnNAlF[i];
            i++;
        };
    };
}

void  N7N5pbWX () {
    int i;
    {
        i = 246 - 245;
        while (i <= n) {
            cout << CilDgVfnK1SI[i] << " ";
            i++;
        };
    }
    for (i = (854 - 853); i < m; i = i + 1)
        cout << fjy7fZGnNAlF[i] << " ";
    cout << fjy7fZGnNAlF[m] << endl;
}

int main () {
    lbo47eP ();
    qsort (1, n);
    qsort2 (1, m);
    N7N5pbWX ();
    return 0;
}

