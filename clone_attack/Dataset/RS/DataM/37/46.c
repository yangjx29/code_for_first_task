int main () {
    char a [100000], m [1000];
    int n;
    int c;
    scanf ("%d", &n);
    for (int i = 0;
    n > i; i++) {
        scanf ("%s", a);
        for (int j = 0;
        strlen (a) > j; j++) {
            c = 1;
            {
                int k = 0;
                while (strlen (a) > k) {
                    if (!(a[j] != a[k]) && !(j == k)) {
                        c = 0;
                        break;
                    }
                    k++;
                };
            }
            if (!(1 != c)) {
                m[i] = a[j];
                break;
            };
        }
        if (c == 0)
            m[i] = '0';
    }
    for (int i = 0;
    i < n; i++) {
        if (m[i] == '0')
            ;
        else
            printf ("%c\n", m[i]);
    }
    return 0;
}

