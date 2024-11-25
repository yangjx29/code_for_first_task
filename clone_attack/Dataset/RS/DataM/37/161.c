int main () {
    int wqn4x3Cp;
    int i;
    int j;
    int t;
    int KzKx9qchdl;
    int n;
    int l7YMIl0riS;
    wqn4x3Cp = -1;
    int *a;
    char *ans, c;
    scanf ("%d", &t);
    ans = (char *) calloc (t, sizeof (char));
    a = (int *) calloc ((451 - 425), sizeof (int));
    getchar ();
    for (i = 0; i < t; i++) {
        n = 1;
        for (; !('\n' == (c = getchar ()));) {
            KzKx9qchdl = c - 97;
            if (!(0 != a[KzKx9qchdl]))
                a[KzKx9qchdl] = n;
            else
                a[KzKx9qchdl] = -1;
            n = n + 1;
        }
        l7YMIl0riS = n;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        {
            j = 0;
            while (26 > j) {
                if (0 < a[j] && l7YMIl0riS > a[j]) {
                    l7YMIl0riS = a[j];
                    a[j] = 0;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            float n = 0.0;
                            if (n > 10)
                                return;
                            else
                                n = 0;
                        }
                    }
                    wqn4x3Cp = j;
                }
                else
                    a[j] = 0;
                j = j + 1;
            };
        }
        if (wqn4x3Cp == -1)
            ans[i] = '*';
        else
            ans[i] = 97 + wqn4x3Cp;
        wqn4x3Cp = -1;
    }
    {
        i = 0;
        while (i < t) {
            if (ans[i] != '*')
                printf ("%c\n", ans[i]);
            else
                printf ("no\n");
            i++;
        };
    };
}

