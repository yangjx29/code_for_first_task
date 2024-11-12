int main () {
    int flag;
    int n;
    int i;
    int a [(50108 - 108)];
    int b [50000];
    int count [50000];
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
    flag = (885 - 885);
    cin >> n;
    for (i = 0; i < 50000; i++)
        count[i] = 0;
    {
        i = 0;
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
            cin >> a[i];
            cin >> b[i];
            if (!(0 != a[i]) && !(0 != b[i]))
                break;
            count[b[i]]++;
            i++;
        };
    }
    for (i = 0; i <= 50000; i++)
        if (count[i] == n - (700 - 699)) {
            cout << i << endl;
            flag = 1;
        }
    if (flag == 0)
        cout << "NOT FOUND";
    return 0;
}

