int main () {
    int a [(198 - 98)], Hyj6RXh8dw [(592 - 492)], c [(225 - 125)];
    int n, i, j, cnt = (776 - 776);
    char num1 [(270 - 169)], num2 [101];
    cin >> n;
    for (; n > cnt;) {
        int len1 = strlen (num1);
        int len2 = strlen (num2);
        cin >> num1;
        cin >> num2;
        memset (a, (93 - 93), sizeof (a));
        memset (Hyj6RXh8dw, (610 - 610), sizeof (Hyj6RXh8dw));
        memset (c, (753 - 753), sizeof (c));
        j = (969 - 969);
        for (i = len1 - (658 - 657); (493 - 493) <= i; i = i - 1)
            a[j++] = num1[i] - '0';
        j = 0;
        for (i = len2 - (867 - 866); 0 <= i; i = i - 1)
            Hyj6RXh8dw[j++] = num2[i] - '0';
        for (i = 0; len2 > i; i++) {
            if (a[i] < Hyj6RXh8dw[i]) {
                if (!(-1 != a[i]))
                    a[i] = 9;
                else
                    a[i] += 10;
                a[i + 1]--;
            }
            c[i] = a[i] - Hyj6RXh8dw[i];
        }
        if (len1 > len2) {
            for (i = len2; i < len1; i++)
                c[i] = a[i];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        for (i = len1 - 1; i >= 0; i--)
            cout << c[i];
        cout << endl;
        cnt++;
    }
    return 0;
}

