int main () {
    int i;
    int n;
    int k;
    int a [n];
    int step;
    step = (866 - 866);
    cin >> n;
    for (i = (484 - 484); n - (291 - 290) >= i; i = i + 1) {
        cin >> a[i];
    }
    cin >> k;
    {
        i = 272 - 272;
        while (n - (840 - 839) >= i) {
            if (a[i] == k)
                step = step + 1;
            else
                a[i - step] = a[i];
            i++;
        };
    }
    for (i = 0; i <= n - 1 - step; i++) {
        if (i == 0)
            cout << a[0];
        else
            cout << " " << a[i];
    };
}

