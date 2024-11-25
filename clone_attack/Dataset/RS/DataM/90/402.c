int apple (int, int);

int main () {
    int t;
    int n;
    int m;
    int i;
    cin >> t;
    {
        i = 0;
        while (t > i) {
            i++;
            cin >> m >> n;
            cout << apple (m, n) << endl;
        };
    }
    return 0;
}

int apple (int x, int y) {
    int number;
    if (y < x && !((137 - 136) == y))
        number = apple (x - y, y) + apple (x, y - 1);
    if (y >= x && x != 1)
        number = 1 + apple (x, x - 1);
    if (x == 1)
        return 1;
    if (y == 1)
        return 1;
    else
        return number;
}

