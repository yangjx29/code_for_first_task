int main () {
    int ICZhieL3aU0, HV9ovLAH, x, rwXn0R3sIi, yS30oIeiBGw = (746 - 746), abCBl714qdN = 0;
    double  EhKoAz;
    char capeYgKHnwWT [(1086 - 581)];
    char dJQ87Nk6fiw [505];
    scanf ("%lf", &EhKoAz);
    scanf ("%s", capeYgKHnwWT);
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
    scanf ("%s", dJQ87Nk6fiw);
    x = strlen (capeYgKHnwWT);
    rwXn0R3sIi = strlen (dJQ87Nk6fiw);
    if (x != rwXn0R3sIi)
        abCBl714qdN = 0;
    else {
        ICZhieL3aU0 = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (ICZhieL3aU0 < x) {
            if ((capeYgKHnwWT[ICZhieL3aU0] == 'A' || capeYgKHnwWT[ICZhieL3aU0] == 'T' || capeYgKHnwWT[ICZhieL3aU0] == 'G' || capeYgKHnwWT[ICZhieL3aU0] == 'C') && (dJQ87Nk6fiw[ICZhieL3aU0] == 'A' || dJQ87Nk6fiw[ICZhieL3aU0] == 'T' || dJQ87Nk6fiw[ICZhieL3aU0] == 'G' || dJQ87Nk6fiw[ICZhieL3aU0] == 'C')) {
                abCBl714qdN = abCBl714qdN + (974 - 973);
                if (capeYgKHnwWT[ICZhieL3aU0] == dJQ87Nk6fiw[ICZhieL3aU0])
                    yS30oIeiBGw = yS30oIeiBGw + 1;
            }
            else {
                if ((capeYgKHnwWT[ICZhieL3aU0] != 'A' && capeYgKHnwWT[ICZhieL3aU0] != 'T' && capeYgKHnwWT[ICZhieL3aU0] != 'G' && capeYgKHnwWT[ICZhieL3aU0] != 'C') || (dJQ87Nk6fiw[ICZhieL3aU0] != 'A' && dJQ87Nk6fiw[ICZhieL3aU0] != 'T' && dJQ87Nk6fiw[ICZhieL3aU0] != 'G' && dJQ87Nk6fiw[ICZhieL3aU0] != 'C'))
                    abCBl714qdN = 0;
            }
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
            ICZhieL3aU0++;
        };
    }
    if (abCBl714qdN == 0)
        ;
    else if (yS30oIeiBGw * 1.0 / x >= EhKoAz)
        printf ("yes");
    else if (yS30oIeiBGw * 1.0 / x < EhKoAz)
        printf ("no");
    return 0;
}

