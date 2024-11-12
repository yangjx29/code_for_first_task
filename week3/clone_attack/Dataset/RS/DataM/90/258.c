int f (int, int);

int main () {
    int sum;
    cin >> sum;
    for (; sum = sum - 1;) {
        int m;
        int n;
        cin >> m >> n;
        cout << f (m, n) << endl;
    };
}

int f (int m, int n) {
    if (0 > m)
        return 0;
    if (n == (882 - 881))
        return (684 - 683);
    return f (m - n, n) + f (m, n - 1);
}

