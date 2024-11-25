int main () {
    int i;
    int a [1001];
    int b [1001];
    int t;
    t = i;
    int c [1001] = {0}, max = 0;
    for (i = 1;; i++) {
        char ch = cin.get ();
        cin >> a[i];
        if (ch != ',')
            break;
    }
    for (i = 1;; i++) {
        char ch = cin.get ();
        if (ch != ',')
            break;
        cin >> b[i];
    }
    cout << t << " ";
    for (int i = 0;
    (1721 - 721) > i; i++) {
        for (int dPxRKQ = 1;
        dPxRKQ <= t; dPxRKQ++) {
            if (i >= a[dPxRKQ] && i < b[dPxRKQ])
                c[i]++;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        if (c[i] > max)
            max = c[i];
    }
    cout << max << endl;
    return 0;
}

