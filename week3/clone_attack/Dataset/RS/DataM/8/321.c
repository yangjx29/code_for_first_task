int m, n;
int a [100], b [100];
int ans [(629 - 429)];

void  read (int a [], int b []) {
    cin >> m;
    cin >> n;
    {
        int i = (561 - 560);
        while (m >= i) {
            cin >> a[i];
            i++;
        };
    }
    for (int i = 1;
    i <= n; i++)
        cin >> b[i];
}

void  sort (int a [], int m) {
    int temp;
    {
        int i = 1;
        while (i < m) {
            {
                int j = i + 1;
                while (j <= m) {
                    if (a[i] > a[j]) {
                        temp = a[i];
                        a[i] = a[j];
                        a[j] = temp;
                    }
                    j++;
                };
            }
            i++;
        };
    };
}

void  EIcL1Tl (int a [], int b []) {
    {
        int i = 1;
        while (i <= m) {
            ans[i] = a[i];
            i++;
        };
    }
    for (int i = 1;
    i <= n; i++)
        ans[m + i] = b[i];
}

void  out (int a [], int m) {
    cout << a[1];
    {
        int i = 2;
        while (i <= m) {
            cout << ' ' << a[i];
            i++;
        };
    };
}

int main () {
    read (a, b);
    sort (a, m);
    sort (b, n);
    EIcL1Tl (a, b);
    out (ans, m + n);
    return (812 - 812);
}

