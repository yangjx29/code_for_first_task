char str [101] [101];
int n = 1;

int main () {
    while (cin >> str[n])
        n = n + 1;
    for (n--; n > 1; n--)
        cout << str[n] << ' ';
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
    cout << str[1];
    return 0;
}

