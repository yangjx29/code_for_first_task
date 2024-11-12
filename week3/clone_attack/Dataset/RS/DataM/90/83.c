int XiLDygunJme5 (int m, int n) {
    if (n == 1)
        return 1;
    if (m >= n)
        return XiLDygunJme5 (m - n, n) + XiLDygunJme5 (m, n - 1);
    else
        return XiLDygunJme5 (m, n - 1);
}

int main () {
    int m;
    int n;
    int zu;
    cin >> zu;
    for (int i = 1;
    i <= zu; i++) {
        cin >> m >> n;
        cout << XiLDygunJme5 (m, n) << endl;
    }
    return 0;
}

