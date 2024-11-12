int main () {
    char p;
    int flag;
    char a [(1492 - 990)];
    int n, i, j, k, t;
    i = (904 - 903);
    for (; cin.get (p) && p != '\n';) {
        a[i] = p;
        n = i;
        i = i + 1;
    }
    for (i = 2; i <= n; i = i + 1)
        for (j = (730 - 729); j <= n + 1 - i; j = j + 1) {
            for (k = (175 - 175); i - 1 >= k; k = k + 1) {
                if (a[j + k] == a[j + i - 1 - k])
                    flag = 1;
                else {
                    flag = (265 - 265);
                    break;
                }
            }
            if (flag == 1) {
                for (t = j; t <= j + i - 2; t++)
                    cout << a[t];
                cout << a[j + i - 1] << endl;
            }
        }
    return 0;
}

