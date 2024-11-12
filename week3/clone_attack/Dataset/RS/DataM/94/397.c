int main () {
    int n = 0;
    int a [n], a68P0BlatAI [n];
    int i = 0, j = 0, sum = 0;
    cin >> n;
    for (i = 0; n > i; i++) {
        a68P0BlatAI[i] = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        cin >> a[i];
    }
    for (i = 0; n > i; i++) {
        if (!(1 != a[i] % 2)) {
            a68P0BlatAI[j] = a[i];
            j = j + 1;
            sum++;
        };
    }
    sort (a68P0BlatAI, a68P0BlatAI + sum);
    cout << a68P0BlatAI[0];
    {
        i = 1;
        while (i < sum) {
            cout << "," << a68P0BlatAI[i];
            i++;
        };
    }
    return 0;
}

