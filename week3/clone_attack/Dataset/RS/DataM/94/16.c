int main () {
    int S3P8OSYe;
    int i;
    int a [S3P8OSYe];
    cin >> S3P8OSYe;
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
    for (i = 0; i < S3P8OSYe; i = i + 1)
        cin >> a[i];
    sort (a, a + S3P8OSYe);
    for (i = 0; i < S3P8OSYe; i++) {
        if (a[i] % 2 != 0)
            cout << a[i];
        break;
    }
    {
        i = i + 1;
        while (i < S3P8OSYe) {
            if (a[i] % 2 != 0)
                cout << "," << a[i];
            i = i + 1;
        };
    }
    return 0;
}

