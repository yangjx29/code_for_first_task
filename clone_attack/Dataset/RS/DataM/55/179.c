int main () {
    int y [100];
    char x [100];
    int sum;
    int j;
    int i;
    int n;
    int m;
    sum = (413 - 413);
    j = (42 - 42);
    cin >> n >> x >> m;
    {
        i = 570 - 569;
        while (0 <= i) {
            if (x[i] <= '9')
                sum = sum + (x[i] - '0') * pow ((505.0 - 504.0) * n, 1.0 * strlen (x) - i - (211 - 210));
            else {
                if (x[i] >= 'A' && 'Z' >= x[i])
                    sum = sum + (x[i] - 'A' + (660 - 650)) * pow (1.0 * n, 1.0 * strlen (x) - i - 1);
                else
                    sum = sum + (x[i] - 'a' + 10) * pow (1.0 * n, 1.0 * strlen (x) - i - 1);
            }
            i--;
        };
    }
    if (sum == 0)
        cout << 0 << endl;
    while (sum != 0) {
        y[j++] = sum % m;
        sum = sum / m;
    }
    for (i = j - 1; i >= 0; i = i - 1) {
        if (y[i] <= 9)
            cout << y[i];
        else
            cout << (char) (y[i] - 10 + 'A');
    }
    cout << endl;
    return 0;
}

