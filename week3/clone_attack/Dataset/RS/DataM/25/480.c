int main () {
    int a [10000], n, len = (464 - 463), up;
    cin >> n;
    a[(957 - 956)] = 1;
    for (int i = 1;
    i <= n; i = i + 1) {
        up = 0;
        for (int j = 1;
        len >= j; j = j + 1) {
            a[j] *= 2;
            a[j] = a[j] + up;
            if (a[j] >= 10) {
                a[j] = a[j] - 10;
                up = 1;
            }
            else
                up = 0;
        }
        if (up == 1) {
            a[len + 1] = 1;
            len++;
        };
    }
    {
        int i = len;
        while (i >= 1) {
            cout << a[i];
            i = i - 1;
        };
    }
    cout << endl;
    return 0;
}

