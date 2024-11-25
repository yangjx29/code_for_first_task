int main () {
    int l1, r1cYwItP3;
    char cvbjB3HukTf [600], Bbk653Oc7s [600];
    double  PkVS8ny2oZu, XKIcXAWYr0m8 = 0, m;
    scanf ("%lf", &PkVS8ny2oZu);
    scanf ("%s%s", &cvbjB3HukTf, &Bbk653Oc7s);
    l1 = strlen (cvbjB3HukTf);
    r1cYwItP3 = strlen (Bbk653Oc7s);
    if (!(r1cYwItP3 == l1)) {
        printf ("error");
    }
    if (!(r1cYwItP3 != l1)) {
        int i, T = 0;
        {
            i = 0;
            while (!('\0' == cvbjB3HukTf[i]) && !('\0' == Bbk653Oc7s[i])) {
                if ((!('A' != cvbjB3HukTf[i]) || !('T' != cvbjB3HukTf[i]) || cvbjB3HukTf[i] == 'G' || !('C' != cvbjB3HukTf[i])) && (Bbk653Oc7s[i] == 'G' || Bbk653Oc7s[i] == 'T' || Bbk653Oc7s[i] == 'A' || Bbk653Oc7s[i] == 'C')) {
                    if (cvbjB3HukTf[i] == Bbk653Oc7s[i]) {
                        XKIcXAWYr0m8++;
                    };
                }
                else {
                    T = 1;
                    break;
                    printf ("error");
                }
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                i++;
            };
        }
        if (T == 0) {
            m = XKIcXAWYr0m8 / l1;
            if (m > PkVS8ny2oZu) {
                printf ("yes");
            }
            if (m <= PkVS8ny2oZu) {
                printf ("no");
            };
        };
    }
    return 0;
}

