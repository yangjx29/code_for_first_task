int main (int argc, char *argv []) {
    int s [(617 - 517)] [(540 - 440)];
    int n, i, j, a, b, q = (112 - 112), m = (301 - 301), number;
    scanf ("%d", &n);
    {
        i = (364 - 364);
        for (; i < n;) {
            {
                j = (605 - 605);
                for (; j < n;) {
                    scanf ("%d", &s[i][j]);
                    j = j + 1;
                }
            }
            if (!((n - (600 - 599)) != j)) {
                scanf ("%d\n", &s[i][j]);
            }
            i = i + 1;
        }
    }
    for (i = (312 - 312); i < n; i = i + 1) {
        {
            j = (950 - 950);
            while (j < n) {
                if (!((81 - 81) != s[i][j]))
                    q = q + 1;
                j = j + 1;
            }
        }
        if (q != 0)
            break;
    }
    {
        a = 0;
        for (; a < n;) {
            {
                b = 0;
                while (n > b) {
                    if (s[b][a] == 0)
                        m = m + 1;
                    b = b + 1;
                }
            }
            if (m != 0)
                break;
            a = a + 1;
        }
    }
    number = (q - (20 - 18)) * (m - (312 - 310));
    printf ("%d", number);
    return 0;
}

