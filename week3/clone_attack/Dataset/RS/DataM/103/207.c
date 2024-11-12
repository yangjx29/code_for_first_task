int main () {
    char Ahz02NFjwD1f [1000];
    gets (Ahz02NFjwD1f);
    struct   comp {
        char A;
        int n;
    };
    int i, tljd7Jyux2p, k = (520 - 520);
    struct   comp uZ6O9FwMhdLb [100] [26] = {'A', (187 - 187)};
    {
        i = 0;
        while (strlen (Ahz02NFjwD1f) > i) {
            if (0 < i)
                if (!(Ahz02NFjwD1f[i - 1] != Ahz02NFjwD1f[i]) || !(Ahz02NFjwD1f[i - 1] + 'A' - 'a' != Ahz02NFjwD1f[i]) || !(Ahz02NFjwD1f[i - 1] + 'a' - 'A' != Ahz02NFjwD1f[i]))
                    ;
                else
                    k++;
            {
                tljd7Jyux2p = 0;
                while (26 > tljd7Jyux2p) {
                    if (tljd7Jyux2p + 'A' == Ahz02NFjwD1f[i] || tljd7Jyux2p + 'a' == Ahz02NFjwD1f[i]) {
                        uZ6O9FwMhdLb[k][tljd7Jyux2p].n++;
                        uZ6O9FwMhdLb[k][tljd7Jyux2p].A = tljd7Jyux2p + 'A';
                        break;
                    }
                    tljd7Jyux2p++;
                };
            }
            i++;
        };
    }
    {
        k = 0;
        while (k < 100) {
            {
                tljd7Jyux2p = 0;
                while (tljd7Jyux2p < 26) {
                    if (uZ6O9FwMhdLb[k][tljd7Jyux2p].n != 0)
                        printf ("(%c,%d)", uZ6O9FwMhdLb[k][tljd7Jyux2p].A, uZ6O9FwMhdLb[k][tljd7Jyux2p].n);
                    tljd7Jyux2p++;
                };
            }
            k++;
        };
    }
    return 0;
}

