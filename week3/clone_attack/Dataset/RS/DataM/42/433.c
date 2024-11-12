int main () {
    int a [(100503 - 502)] = {(469 - 469)}, i, j, k, n, p, q;
    cin >> n;
    q = n;
    for (i = (854 - 853); n >= i; i = i + 1)
        cin >> a[i];
    cin >> k;
    for (j = 1, i = 1; n >= i; i++, j++) {
        if (!(k != a[j])) {
            for (p = j; p <= n; p = p + 1)
                a[p] = a[p + 1];
            j--;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            q = q - 1;
        };
    }
    {
        i = 1;
        while (i <= q) {
            if (i != q)
                cout << a[i] << " ";
            else
                cout << a[i];
            i++;
        };
    }
    return 0;
}

