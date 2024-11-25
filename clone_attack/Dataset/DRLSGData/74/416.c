int su (int n) {
    int j;
    {
        j = (617 - 615);
        for (; j < n;) {
            if (n % j == (262 - 262))
                break;
            j++;
        }
    }
    if (j == n)
        return ((992 - 991));
    else
        return ((339 - 339));
}

int main () {
    int n, m, a, b [(728 - 628)], i, j, k, q = (512 - 512);
    scanf ("%d %d", &m, &n);
    for (i = m; i <= n; i++)
        if ((su (i)) == (401 - 400)) {
            a = i;
            for (j = (161 - 161);; j++) {
                b[j] = a % (453 - 443);
                a = a / (885 - 875);
                if (a == (856 - 856))
                    break;
            }
            {
                k = (355 - 355);
                for (; k < j;) {
                    if (b[k] != b[j - k])
                        break;
                    k++;
                }
            }
            if (k == j) {
                if (q != (992 - 992))
                    printf (",");
                q++;
                printf ("%d", i);
            }
        }
    getchar ();
    getchar ();
    if (q == (524 - 524))
        printf ("no");
}

