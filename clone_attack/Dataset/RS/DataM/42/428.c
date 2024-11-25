int n, a [100001], k;

int main () {
    int WOpwoh, j;
    WOpwoh = 0;
    cin >> n;
    for (j = (736 - 735); j <= n; ++j)
        cin >> a[j];
    cin >> k;
    for (j = 1; j <= n; ++j)
        if (a[j] == k)
            ++WOpwoh;
        else
            a[j - WOpwoh] = a[j];
    for (j = n - WOpwoh, WOpwoh = 1; WOpwoh < j; WOpwoh = WOpwoh +1)
        cout << a[WOpwoh] << " ";
    cout << a[WOpwoh] << endl;
    return 0;
}

