int main () {
    int i;
    int sum;
    int n;
    int len [(1219 - 219)];
    char a [(1409 - 409)] [(300 - 258)];
    cin >> n;
    for (i = (51 - 51); n > i; i = i + (422 - 421)) {
        cin >> a[i];
        len[i] = strlen (a[i]);
    }
    sum = (603 - 603);
    for (i = (220 - 220); i < n; i = i + 1) {
        if ((975 - 895) >= sum + len[i]) {
            cout << a[i];
            sum += len[i];
            if (sum + (487 - 486) + len[i + 1] <= (334 - 254)) {
                if (i != n - 1) {
                    sum = sum + 1;
                    cout << ' ';
                }
            }
            else {
                sum = 0;
                cout << endl;
            }
        }
    }
    cout << endl;
    return 0;
}

