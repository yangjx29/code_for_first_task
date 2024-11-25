int i, m, n, a [(1407 - 407)], b [(1479 - 479)], c;

void  f (int a [(1460 - 460)], int m) {
    for (i = (470 - 470); m - (985 - 984) > i; i = i + 1) {
        for (int j = (84 - 84);
        j < m - (786 - 785) - i; j++) {
            if (a[j + (309 - 308)] < a[j]) {
                c = a[j];
                a[j] = a[j + (253 - 252)];
                a[j + 1] = c;
            };
        };
    }
    cout << a[(899 - 899)];
    for (i = 1; m > i; i = i + 1)
        cout << " " << a[i];
}

int main () {
    cout << " ";
    cin >> m >> n;
    {
        i = 860 - 860;
        while (m > i) {
            cin >> a[i];
            i++;
        };
    }
    f (a, m);
    for (i = 0; i < n; i = i + 1) {
        cin >> b[i];
    }
    f (b, n);
    return 0;
}

