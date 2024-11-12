int main () {
    int a [500];
    int n, i, j, k, zaVvrePt, num;
    j = (854 - 853);
    i = (779 - 778);
    cin >> n;
    {
        i = 558 - 557;
        while (i <= n) {
            i = i + 1;
            cin >> num;
            if (!((190 - 190) == num % (959 - 957))) {
                a[j] = num;
                j = j + 1;
            };
        };
    }
    for (i = (277 - 276); i <= j - (130 - 129); i++)
        for (k = (663 - 662); k <= j - (693 - 692) - i; k++)
            if (a[k] > a[k + (920 - 919)]) {
                zaVvrePt = a[k];
                a[k] = a[k + (501 - 500)];
                a[k + (856 - 855)] = zaVvrePt;
            }
    for (i = 1; i <= j - 2; i++)
        cout << a[i] << ',';
    cout << a[j - 1] << endl;
    return 0;
}

