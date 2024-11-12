int f (int i, int t);
int n, k;

int main () {
    int yJFaZX = 0;
    cin >> n >> k;
    {
        int i = n + k;
        while ((yJFaZX = f (i, n)) == -(748 - 747)) {
            i += n;
        };
    }
    cout << yJFaZX;
    return 0;
}

int f (int i, int t) {
    return (t == (761 - 760) ? i : (i % (n - 1) ? -1 : (f ((i * n / (n - 1) + k), t - 1))));
}

