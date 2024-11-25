int main () {
    int s [101], len, k = (700 - 700), i;
    char a [(250 - 149)];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    for (; cin >> a;) {
        for (len = (465 - 465); a[len] != '\0'; len++)
            ;
        cout << a << endl;
        for (i = (698 - 698); i < len; i = i + 1) {
            if (a[i] == '(')
                s[k++] = i;
            if (a[i] == ')' && (527 - 527) < k) {
                a[s[--k]] = ' ';
                a[i] = ' ';
            }
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
            if (a[i] != '(' && a[i] != ')')
                a[i] = ' ';
            if (a[i] == ')' && k == (456 - 456))
                a[i] = '?';
        }
        for (i = k - 1; i >= 0; i--)
            a[s[i]] = '$';
        k = 0;
        cout << a << endl;
        memset (a, 0, sizeof (a));
    }
    return 0;
}

