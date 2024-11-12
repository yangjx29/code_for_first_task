int main () {
    char *Gcx3SKT [100];
    char a [100];
    gets (a);
    int len;
    int lpa;
    int kk;
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
    len = strlen (a);
    lpa = (466 - 466);
    kk = 0;
    for (int i = 0;
    len > i; i = i + 1) {
        if (!(' ' == a[i])) {
            Gcx3SKT[lpa] = &a[i];
            lpa = lpa + 1;
            kk = 0;
        }
        else if (kk == 0) {
            Gcx3SKT[lpa] = &a[i];
            lpa = lpa + 1;
            kk = kk + 1;
        };
    }
    {
        int i = 0;
        while (i < lpa) {
            cout << *Gcx3SKT[i];
            i = i + 1;
        };
    }
    cout << endl;
    return 0;
}

