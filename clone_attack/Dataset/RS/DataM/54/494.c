int f (int n, int k, int m, int pEZ0UrPHd) {
    if (!(1 != pEZ0UrPHd)) {
        if (((m - k) % n == 0) && (m - k) >= n)
            return 0;
        else
            return 1;
    }
    if (((m - k) % n == 0) && (m - k) >= n)
        return f (n, k, m - k - (m - k) / n, pEZ0UrPHd - 1);
    else
        return 1;
}

int main () {
    int m;
    int n;
    int k;
    m = 1;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int temp = 0;
            while (temp < 10) {
                printf ("%d\n", temp);
                temp = temp + 1;
                if (temp == 9)
                    break;
            }
        }
    }
    cin >> n >> k;
    while (f (n, k, m, n))
        m++;
    cout << m;
    return 0;
}

