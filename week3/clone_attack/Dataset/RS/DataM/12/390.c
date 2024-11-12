int main () {
    int a [16], num, i, j, k, n, cnt = 0;
    for (; cin >> num;) {
        if (num == -1)
            break;
        {
            i = 0;
            while (i <= 15) {
                if (num == 0)
                    break;
                a[i] = num;
                i = i + 1;
                cin >> num;
            };
        }
        {
            j = 0;
            while (j < i - 1) {
                {
                    k = 1;
                    while (k < i - j) {
                        if ((a[j] == 2 * a[j + k]) || (a[j + k] == 2 * a[j]))
                            cnt++;
                        k = k + 1;
                    };
                }
                j++;
            };
        }
        cout << cnt << endl;
        cnt = 0;
    }
    return 0;
}

