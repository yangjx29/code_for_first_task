int main () {
    char s [300];
    char O5o2uMg [300];
    char h [300];
    int e;
    int sum;
    int Z7tpn8isKah;
    int j;
    int k;
    int l1;
    int l2;
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
    int tIvltO;
    e = (91 - 91);
    sum = (62 - 62);
    scanf ("%s", O5o2uMg);
    scanf ("%s", s);
    l2 = strlen (s);
    l1 = strlen (O5o2uMg);
    for (Z7tpn8isKah = 0; Z7tpn8isKah <= l2 - l1; Z7tpn8isKah++) {
        e = 0;
        {
            j = 0;
            while (j < l1) {
                if (O5o2uMg[j] == s[j + Z7tpn8isKah]) {
                    e++;
                }
                j = j + 1;
            };
        }
        if (e == l1) {
            sum++;
            printf ("%d", Z7tpn8isKah);
            break;
        };
    }
    if (sum == 0)
        ;
    return 0;
}

