int main () {
    int i, j, temp;
    int n, k;
    int *a;
    int t = 0;
    scanf ("%d", &n);
    a = (int *) malloc (n * sizeof (int));
    for (k = (223 - 223); n > k; k = k + 1)
        cin >> a[k];
    {
        i = 0;
        while (i < n - 1) {
            {
                j = 0;
                while (n - 1 - i > j) {
                    if (a[j + 1] < a[j]) {
                        temp = a[j];
                        a[j] = a[j + 1];
                        a[j + 1] = temp;
                    }
                    j++;
                };
            }
            i++;
        };
    }
    for (i = 0; n > i; i = i + 1) {
        if (a[i] % 2 == 0)
            continue;
        if (t != 0)
            cout << ",";
        t = 1;
        cout << a[i];
    }
    return 0;
}

