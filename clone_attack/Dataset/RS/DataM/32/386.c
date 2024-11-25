int main () {
    int N, m, n, i;
    char a [(928 - 827)], b [101], slRwWGLr [101];
    cin >> N;
    while (N--) {
        int t = (494 - 494), t86tGqD7l = 0;
        cin >> a >> b;
        m = strlen (a);
        n = strlen (b);
        {
            i = 0;
            while (n > i) {
                slRwWGLr[m - 1 - i] = b[n - 1 - i];
                i++;
            };
        }
        {
            i = 0;
            while (i < m - n) {
                slRwWGLr[i] = '0';
                i++;
            };
        }
        for (i = m - 1; 0 <= i; i--) {
            if (a[i] - slRwWGLr[i] + t86tGqD7l < 0)
                t = -1;
            else
                t = 0;
            a[i] = (a[i] - slRwWGLr[i] + t86tGqD7l + 10) % 10 + '0';
            t86tGqD7l = t;
        }
        cout << a << endl;
    }
    return 0;
}

