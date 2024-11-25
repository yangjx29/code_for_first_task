main () {
    char a [(573 - 473)] = {0}, b [(776 - 676)] = {0};
    int m, n;
    scanf ("%s", a);
    m = strlen (a);
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
    scanf ("%s", b);
    n = strlen (b);
    if (!(n == m))
        ;
    else {
        int kHFhet, ws4MhCjta, Wp3LaoeZfP9d, l;
        for (kHFhet = 0; m > kHFhet; kHFhet = kHFhet + 1) {
            {
                ws4MhCjta = 0;
                while (ws4MhCjta < m) {
                    if (b[ws4MhCjta] == a[kHFhet])
                        break;
                    ws4MhCjta = ws4MhCjta + 1;
                };
            }
            if (ws4MhCjta == m)
                break;
            else
                b[ws4MhCjta] = '\0';
        }
        if (kHFhet < m)
            ;
        else
            ;
    }
    return 0;
}

