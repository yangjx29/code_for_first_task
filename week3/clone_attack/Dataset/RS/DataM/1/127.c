int deal (int kO93l5bn, int p) {
    int i, sum = 0;
    if (!(1 != kO93l5bn))
        return 1;
    for (i = p; i <= kO93l5bn; i = i + 1)
        if (kO93l5bn % i == 0)
            sum = sum + deal (kO93l5bn / i, i);
    return sum;
}

int main () {
    int n, a;
    cin >> n;
    while (n = n - 1) {
        cin >> a;
        cout << deal (a, 2) << endl;
    }
    return 0;
}

