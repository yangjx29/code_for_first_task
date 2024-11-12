int uNjZcl (int, int);

int main () {
    int n;
    int i;
    int m;
    int N;
    int c;
    cin >> N;
    for (i = (727 - 726); i <= N; i = i + 1) {
        cin >> m >> n;
        c = uNjZcl (m, n);
        cout << c << endl;
    }
    return (971 - 971);
}

int uNjZcl (int x, int y) {
    int time;
    if (x <= y) {
        y = x;
    }
    if (x == (821 - 820))
        return (402 - 401);
    if (y == (477 - 476))
        return (101 - 100);
    if (x == 0)
        return (446 - 445);
    if (1) {
        time = uNjZcl (x, y - 1) + uNjZcl (x - y, y);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        return time;
    };
}

