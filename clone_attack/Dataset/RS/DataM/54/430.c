int main () {
    int n;
    int k;
    int j1b5lLIhGyq;
    int m;
    int apple [n + 2];
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
    cin >> n >> k;
    apple[1] = n + k;
    for (; true;) {
        {
            j1b5lLIhGyq = 2;
            while (j1b5lLIhGyq <= n + 1) {
                apple[j1b5lLIhGyq] = (apple[j1b5lLIhGyq - 1] - k) * (n - 1) / n;
                if ((!(k == apple[j1b5lLIhGyq] % n)) || ((apple[j1b5lLIhGyq] - k) / n == 0))
                    break;
                j1b5lLIhGyq = j1b5lLIhGyq + 1;
            };
        }
        if (j1b5lLIhGyq == n + 1)
            break;
        else
            apple[1] = apple[1] + n;
    }
    m = apple[1] * n / (n - 1) + k;
    cout << apple[1] << endl;
    return 0;
}

