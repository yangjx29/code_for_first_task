int main () {
    int i;
    int n;
    cin >> n;
    for (i = 0; (n - 100 * i) >= 0; i++) {
    }
    i = i - 1;
    cout << i << endl;
    n = n - 100 * i;
    for (i = 0; (n - 50 * i) >= 0; i++) {
    }
    i = i - 1;
    cout << i << endl;
    n = n - 50 * i;
    {
        i = 0;
        while ((n - 20 * i) >= 0) {
            i++;
        };
    }
    i = i - 1;
    cout << i << endl;
    n = n - 20 * i;
    {
        i = 0;
        while ((n - 10 * i) >= 0) {
            i++;
        };
    }
    i = i - 1;
    cout << i << endl;
    n = n - 10 * i;
    for (i = 0; (n - 5 * i) >= 0; i++) {
    }
    i = i - 1;
    cout << i << endl;
    n = n - 5 * i;
    cout << n;
    return 0;
}

