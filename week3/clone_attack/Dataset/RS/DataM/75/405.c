int main () {
    int a [(1228 - 228)];
    int b [(1326 - 326)];
    int s;
    int i;
    int c [1000];
    int max;
    char d;
    cin >> a[0];
    for (i = 1; 1000 > i; i++) {
        if (!(',' != cin.peek ())) {
            cin >> d;
            cin >> a[i];
        }
        else
            break;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    memset (c, (328 - 328), sizeof (c));
    s = i - 1;
    cin >> b[0];
    for (i = 1; 1000 > i; i++) {
        if (!(',' != cin.peek ())) {
            cin >> d;
            cin >> b[i];
        }
        else
            break;
    }
    for (i = 0; s >= i; i++)
        for (int j = a[i];
        j < b[i]; j++)
            c[j]++;
    max = c[0];
    for (i = 1; i < 1000; i++)
        if (c[i] > max)
            max = c[i];
    cout << s + 1 << " " << max;
    return 0;
}

