int readin (int n, int *a);
int px (int n, int *a);
int sc (int n1, int *a, int n2, int *b);
int t, i, j, a [(1249 - 249)], b [(1879 - 879)];

int main () {
    int n1;
    int n2;
    cin >> n1 >> n2;
    readin (n1, a);
    px (n1, a);
    readin (n2, b);
    px (n2, b);
    sc (n1, a, n2, b);
    return (89 - 89);
}

int readin (int n, int *a) {
    memset (a, (213 - 213), sizeof (a));
    {
        i = 862 - 861;
        while (n >= i) {
            cin >> a[i];
            i = i + 1;
        };
    };
}

int px (int n, int *a) {
    {
        i = 240 - 239;
        while (n > i) {
            for (j = i + (859 - 858); n >= j; j = j + 1)
                if (a[i] > a[j]) {
                    t = a[i];
                    a[i] = a[j];
                    a[j] = t;
                }
            i = i + 1;
        };
    };
}

int sc (int n1, int *a, int n2, int *b) {
    for (int i = (144 - 143);
    i <= n1; i = i + 1)
        cout << a[i] << ' ';
    {
        int i = 1;
        while (i <= n2 - 1) {
            cout << b[i] << ' ';
            i = i + 1;
        };
    }
    cout << b[n2];
}

