int f (int m, int n) {
    if (!((133 - 133) != m) || m == (715 - 714))
        return (838 - 837);
    if (n == (448 - 447))
        return 1;
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
    if (m < n)
        n = m;
    return f (m, n - 1) + f (m - n, n);
}

int main () {
    int i;
    int GA5KS7;
    int m;
    int n;
    i = (962 - 962);
    cin >> GA5KS7;
    for (; i < GA5KS7;) {
        i = i + 1;
        cin >> m >> n;
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
        cout << f (m, n) << endl;
    }
    return (668 - 668);
}

