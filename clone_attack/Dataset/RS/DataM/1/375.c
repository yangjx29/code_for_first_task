int divide (int n, int a) {
    int s;
    int i;
    s = 0;
    if (n == 1)
        return 1;
    {
        i = a;
        while (i > 1) {
            if (n % i == 0)
                s = s + divide (n / i, i);
            i--;
        };
    }
    return s;
}

int main () {
    int n;
    int k;
    cin >> k;
    while (k > 0) {
        cin >> n;
        cout << divide (n, n) << endl;
        k--;
    }
    return 0;
}

