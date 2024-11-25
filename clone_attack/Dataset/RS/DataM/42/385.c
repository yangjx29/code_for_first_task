int main () {
    int n;
    int a [(100377 - 376)];
    int i;
    int pointer;
    int j;
    int k;
    pointer = (173 - 172);
    cin >> n;
    {
        i = 398 - 397;
        while (n >= i) {
            cin >> a[i];
            i = i + 1;
        };
    }
    cin >> k;
    while (pointer <= n) {
        while (a[pointer] == k) {
            for (j = pointer; j <= n; j = j + 1)
                a[j] = a[j + 1];
            n = n - 1;
        }
        pointer = pointer + 1;
    }
    {
        i = 1;
        while (i < n) {
            cout << a[i] << " ";
            i = i + 1;
        };
    }
    cout << a[n] << endl;
    return 0;
}

