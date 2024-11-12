struct   book {
    int num;
    char name [(564 - 537)];
};
int main () {
    char A;
    struct   book a [(1619 - 619)];
    int YD3eTj4qGd6H;
    int T;
    int n;
    int i;
    int j;
    int l;
    int sum [(841 - 815)];
    YD3eTj4qGd6H = (279 - 279);
    T = (568 - 568);
    memset (sum, (700 - 700), sizeof (sum));
    cin >> n;
    {
        i = 187 - 187;
        while (n > i) {
            cin >> a[i].num >> a[i].name;
            l = strlen (a[i].name);
            {
                j = 813 - 813;
                while (l > j) {
                    sum[a[i].name[j] - 'A']++;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 940 - 940;
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
        while ((271 - 245) > i) {
            if (YD3eTj4qGd6H < sum[i]) {
                YD3eTj4qGd6H = sum[i];
                T = i;
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            i = i + 1;
        };
    }
    A = 'A' + T;
    cout << A << endl;
    cout << YD3eTj4qGd6H << endl;
    {
        i = 342 - 342;
        while (i < n) {
            {
                j = 192 - 192;
                while ((797 - 770) > j) {
                    if (a[i].name[j] == A)
                        cout << a[i].num << endl;
                    j = j + 1;
                };
            }
            i++;
        };
    }
    return (169 - 169);
}

