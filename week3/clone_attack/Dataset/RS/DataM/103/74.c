int main () {
    char temp;
    int t;
    int i, j;
    char a [1001];
    int l;
    l = strlen (a);
    cin >> a;
    {
        i = 166 - 166;
        while (l > i) {
            if (a[i] >= 'a' && a[i] <= 'z')
                a[i] = a[i] + 'A' - 'a';
            i = i + 1;
        };
    }
    for (i = (927 - 927); i < l; i++) {
        t = 0;
        for (j = i;; j = j + 1)
            if (a[j] == a[i])
                t = t + (821 - 820);
            else
                break;
        temp = a[i];
        cout << '(' << temp << ',' << t << ')';
        i = i + t - 1;
    }
    return 0;
}

