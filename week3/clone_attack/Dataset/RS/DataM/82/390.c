int main () {
    int m;
    int lX7i6GT;
    int n;
    int a;
    int b;
    m = 0;
    lX7i6GT = 0;
    cin >> n;
    {
        int OM3WV9Ujs = 1;
        while (n >= OM3WV9Ujs) {
            OM3WV9Ujs++;
            cin >> a >> b;
            if (90 <= a && a <= 140 && 60 <= b && b <= 90)
                m = m + 1;
            else {
                if (lX7i6GT == 0)
                    lX7i6GT = m;
                else if (lX7i6GT > 0 && lX7i6GT < m)
                    lX7i6GT = m;
                m = 0;
            };
        };
    }
    if (lX7i6GT < m)
        lX7i6GT = m;
    cout << lX7i6GT << endl;
    return 0;
}

