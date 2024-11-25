int main () {
    int n, i, VpKk6rPto, m, s, t [60];
    scanf ("%d", &n);
    for (i = 0; n > i; i++) {
        scanf ("%d", &m);
        if (m == 0)
            s = 60;
        else {
            for (VpKk6rPto = 0; m > VpKk6rPto; VpKk6rPto = VpKk6rPto +1) {
                scanf ("%d", &t[VpKk6rPto]);
            }
            for (VpKk6rPto = 0; m > VpKk6rPto; VpKk6rPto = VpKk6rPto +1) {
                if (60 > t[VpKk6rPto] + 3 * (VpKk6rPto +1)) {
                    s = 60 - 3 * (VpKk6rPto +1);
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
                }
                else if (t[VpKk6rPto] + 3 * VpKk6rPto < 60) {
                    s = t[VpKk6rPto];
                    break;
                }
                else if (t[VpKk6rPto] < 60) {
                    s = 60 - 3 * VpKk6rPto;
                    break;
                };
            };
        }
        printf ("%d\n", s);
    }
    return 0;
}

