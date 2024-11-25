void  p (int n) {
    int c;
    cin >> c;
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
    if (!((439 - 438) == n))
        p (n - 1);
    if (n == 1)
        cout << c;
    else
        cout << ' ' << c;
}

int main () {
    int n;
    p (n);
    cout << endl;
    cin >> n;
    return (936 - 936);
}

