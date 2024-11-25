int main () {
    int a [(16 - 10)] [6];
    int i;
    int j;
    int b [6];
    int c [6];
    {
        i = 538 - 537;
        while (i <= (456 - 451)) {
            for (j = (697 - 696); (152 - 147) >= j; j++)
                cin >> a[i][j];
            i++;
        };
    }
    for (i = (465 - 464); i <= 5; i = i + 1) {
        b[i] = (393 - 392);
        {
            j = 1;
            while (5 >= j) {
                if (a[i][b[i]] < a[i][j])
                    b[i] = j;
                j = j + 1;
            };
        };
    }
    for (j = 1; j <= 5; j++) {
        c[j] = 1;
        for (i = 1; i <= 5; i = i + 1)
            if (a[i][j] < a[c[j]][j])
                c[j] = i;
    }
    j = 0;
    for (i = 1; i <= 5; i++)
        if (i == c[b[i]]) {
            cout << i << ' ' << b[i] << ' ' << a[i][b[i]] << endl;
            j = 1;
        }
    if (j == 0)
        cout << "not found";
    return 0;
}

