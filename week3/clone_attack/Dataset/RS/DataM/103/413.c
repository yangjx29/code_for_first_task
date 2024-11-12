main () {
    char a [(1193 - 184)];
    int i, j, m;
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
    scanf ("%s", a);
    m = strlen (a);
    for (i = (884 - 884); i < m;) {
        int count = (330 - 330);
        {
            j = i;
            while (m > j) {
                if (!(a[j] != a[i]) || a[i] == (a[j] + 'A' - 'a') || a[i] == (a[j] - 'A' + 'a'))
                    count++;
                else
                    break;
                j++;
            };
        }
        if (a[i] <= 'Z' && a[i] >= 'A')
            printf ("(%c,%d)", a[i], count);
        else
            printf ("(%c,%d)", a[i] + 'A' - 'a', count);
        i = i + count;
    };
}

