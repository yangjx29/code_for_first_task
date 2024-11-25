int gWwAqM0y (int m) {
    if (m == 1)
        return 1;
    if (m == 2)
        return 1;
    return gWwAqM0y (m - 1) + gWwAqM0y (m - 2);
}

int main () {
    int n;
    int i;
    int a [20];
    int num;
    cin >> n;
    for (i = 0; i < n; i = i + 1) {
        cin >> a[i];
        num = gWwAqM0y (a[i]);
        cout << num << endl;
    }
    return 0;
}

