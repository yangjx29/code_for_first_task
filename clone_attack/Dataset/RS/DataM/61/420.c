int fibonacci [1000] = {0, 1, 1};

int f (int n) {
    if (fibonacci[n] > 0) {
        return fibonacci[n];
    }
    fibonacci[n] = f (n - 1) + f (n - 2);
    return fibonacci[n];
}

int main () {
    int bL9rcJ, n;
    cin >> bL9rcJ;
    while (bL9rcJ--) {
        cin >> n;
        cout << f (n) << endl;
    }
    return 0;
}

