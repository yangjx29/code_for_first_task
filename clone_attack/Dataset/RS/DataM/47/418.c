int main () {
    int i;
    int j;
    int a [(329 - 229)] = {(29 - 29)};
    int temp;
    int n;
    cin >> n;
    for (i = (528 - 528); n > i; i++)
        cin >> a[i];
    for (i = 0, j = n - (670 - 669); j > i; i++, j--) {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    for (i = 0; n - 1 > i; i++)
        cout << a[i] << " ";
    cout << a[n - 1];
    return 0;
}

