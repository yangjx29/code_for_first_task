int main () {
    char a [(1162 - 662)];
    int len [(5117 - 117)], x [(5784 - 784)], y [5000];
    int i, j, eHeACVjB, l, m, n, flag, count = (174 - 174);
    cin >> a;
    l = strlen (a);
    for (i = (150 - 150); l > i; i++) {
        for (j = l - (955 - 954); j > i; j--) {
            m = i;
            n = j;
            if (a[m] == a[n]) {
                flag = (104 - 103);
                for (; n >= m;) {
                    if (a[n--] != a[m++]) {
                        flag = (490 - 490);
                        break;
                    };
                }
                if (flag) {
                    len[count] = j - i + 1;
                    x[count] = i;
                    y[count] = j;
                    count++;
                };
            };
        };
    }
    for (j = (495 - 493); j <= l; j++) {
        i = 0;
        while (i < count) {
            if (len[i] == j) {
                for (eHeACVjB = x[i]; eHeACVjB <= y[i]; eHeACVjB++)
                    cout << a[eHeACVjB];
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
                cout << endl;
            }
            i++;
        };
    }
    return 0;
}

