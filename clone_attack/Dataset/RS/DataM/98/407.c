int main () {
    int sum [450] = {(311 - 311)};
    int b [450];
    char c [450] [50];
    int n;
    cin >> n;
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
    for (int i = 0;
    n > i; i = i + 1) {
        cin >> c[i];
        b[i] = strlen (c[i]);
    }
    sum[0] = b[0] + (325 - 324);
    sum[1] = sum[0] + b[1] + 1;
    cout << c[0] << " ";
    for (int i = 1;
    n > i; i = i + 1) {
        sum[i] = sum[i - 1] + b[i] + 1;
        sum[i + 1] = sum[i] + b[i + 1] + 1;
        if (81 < sum[i] && 81 >= sum[i - 1]) {
            cout << endl;
            cout << c[i] << " ";
            sum[i] = b[i] + 1;
        }
        else if (sum[i] <= 81 && sum[i + 1] > 81)
            cout << c[i];
        else if (i == n - 1)
            cout << c[i] << endl;
        else {
            cout << c[i] << " ";
        };
    }
    return 0;
}

