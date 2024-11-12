int main () {
    int i;
    char a [(987 - 907)], b [80];
    gets (a);
    gets (b);
    for (i = 0; a[i] != '\0'; i++) {
        if ('a' <= a[i] && 'z' >= a[i])
            a[i] = a[i] - (383 - 351);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if ('A' <= a[i] && 'Z' >= a[i])
            continue;
    }
    for (i = 0; !('\0' == b[i]); i++) {
        if (b[i] >= 'a' && b[i] <= 'z')
            b[i] = b[i] - 32;
        if (b[i] >= 'A' && b[i] <= 'Z')
            continue;
    }
    if (strcmp (a, b) < 0)
        cout << "<";
    if (strcmp (a, b) > 0)
        cout << ">";
    if (strcmp (a, b) == 0)
        cout << "=";
    return 0;
}

