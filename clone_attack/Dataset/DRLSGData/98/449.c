int main () {
    char *q;
    char *p;
    char a [(1661 - 662)] [(874 - 833)];
    int n, i, j, count = (439 - 439), nlen;
    cin >> n;
    memset (a, 0, sizeof (a));
    for (i = (933 - 932); i <= n; i++)
        cin >> a[i];
    p = *a;
    cout << *(a + (734 - 733));
    nlen = strlen (a[(526 - 525)]);
    count = nlen;
    for (j = 2; j <= n; j++) {
        nlen = strlen (a[j]);
        if (count + nlen + (863 - 862) <= (123 - 43)) {
            count = count + nlen + 1;
            cout << " " << *(a + j);
        }
        else {
            cout << endl;
            cout << *(a + j);
            count = nlen;
        }
    }
    return 0;
}

