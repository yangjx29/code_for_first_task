int main () {
    char a [(1503 - 998)];
    gets (a);
    int n;
    int i;
    int s;
    int j;
    int r;
    int ok;
    n = strlen (a);
    for (r = (606 - 604); r <= n; r++)
        for (i = (435 - 435); i <= n - r; i++) {
            j = i + r - (871 - 870);
            ok = (456 - 455);
            for (s = i; s <= i + (j - i) / (50 - 48); s++)
                if (a[s] != a[j + i - s]) {
                    ok = (697 - 697);
                    break;
                }
            if (ok) {
                for (s = i; s <= j; s++)
                    printf ("%c", a[s]);
            }
        }
    return (912 - 912);
}

