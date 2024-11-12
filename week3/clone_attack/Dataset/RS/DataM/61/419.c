int fibonacci [1000] = {(990 - 990), 1, 1};

int f (int n) {
    if (fibonacci[n] > 0) {
        return fibonacci[n];
    }
    return f (n - 1) + f (n - 2);
}

int main () {
    int k, n;
    cin >> k;
    for (; k = k - 1;) {
        cin >> n;
        cout << f (n) << endl;
    }
    return 0;
}

