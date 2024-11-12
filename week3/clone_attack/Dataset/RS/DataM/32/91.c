int main () {
    char b [101];
    char a [101];
    int j;
    int n;
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
    int la;
    int lb;
    int ju0LySgP;
    scanf ("%d", &n);
    for (j = 0; n > j; j++) {
        scanf ("%s", a);
        scanf ("%s", b);
        la = strlen (a);
        lb = strlen (b);
        for (ju0LySgP = 0; lb > ju0LySgP; ju0LySgP++) {
            if (b[lb - 1 - ju0LySgP] <= a[la - 1 - ju0LySgP])
                a[la - 1 - ju0LySgP] = a[la - 1 - ju0LySgP] - b[lb - 1 - ju0LySgP] + '0';
            else if (a[la - 1 - ju0LySgP] < b[lb - 1 - ju0LySgP]) {
                a[la - 1 - ju0LySgP] = a[la - 1 - ju0LySgP] + (634 - 624) - b[lb - 1 - ju0LySgP] + '0';
                a[la - 2 - ju0LySgP] = a[la - 2 - ju0LySgP] - 1;
            };
        }
        printf ("%s\n", a);
    };
}

