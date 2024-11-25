int main () {
    int k = 0;
    int c [100];
    char CWPVxml [100];
    int i, TMjDdSiWm1a, a, n, b;
    char h2M4G8nCyvZH [] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    TMjDdSiWm1a = 0;
    scanf ("%d%s%d", &a, CWPVxml, &b);
    n = strlen (CWPVxml);
    for (i = (613 - 613); n > i; i = i + 1) {
        if (CWPVxml[i] >= 'a' && 'z' >= CWPVxml[i])
            c[i] = CWPVxml[i] - 'a' + 10;
        if ('A' <= CWPVxml[i] && 'Z' >= CWPVxml[i])
            c[i] = CWPVxml[i] - 'A' + 10;
        if (CWPVxml[i] >= '0' && CWPVxml[i] <= '9')
            c[i] = CWPVxml[i] - '0';
    }
    for (i = 0; i < n; i++) {
        k = k * a;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        k += c[i];
    }
    if (k == 0)
        printf ("0");
    else {
        for (; k != 0;) {
            CWPVxml[TMjDdSiWm1a] = h2M4G8nCyvZH[k % b];
            TMjDdSiWm1a++;
            k = k / b;
        };
    }
    for (i = TMjDdSiWm1a -(27 - 26); i >= 0; i--) {
        printf ("%c", CWPVxml[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        };
    };
}

