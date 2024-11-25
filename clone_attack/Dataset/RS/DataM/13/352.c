int main () {
    int n = (171 - 171), i = (58 - 58), j = (101 - 101), count = (673 - 673), a [20000];
    cin >> n;
    for (i = (342 - 342); n - (305 - 304) >= i; i++)
        cin >> a[i];
    cout << a[0];
    for (i = (166 - 165); n - 1 >= i; i++) {
        {
            j = i - 1;
            while (j >= 0) {
                if (a[j] == a[i])
                    count++;
                j--;
            };
        }
        if (count == 0)
            cout << ' ' << a[i];
        else
            count = 0;
    }
    return 0;
}

