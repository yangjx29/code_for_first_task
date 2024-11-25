int main () {
    int t;
    int n;
    int ZsVAckhyf, S5BR6jxv;
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
    char hlID7r [50] [15] = {""}, str_o [50] [15] = {""};
    scanf ("%d", &n);
    for (ZsVAckhyf = 0; n > ZsVAckhyf; ZsVAckhyf++)
        scanf ("%s", hlID7r[ZsVAckhyf]);
    for (ZsVAckhyf = 0; ZsVAckhyf < n; ZsVAckhyf++) {
        t = strlen (hlID7r[ZsVAckhyf]);
        if (!('i' != hlID7r[ZsVAckhyf][t - 3]) && !('n' != hlID7r[ZsVAckhyf][t - 2]))
            for (S5BR6jxv = 0; S5BR6jxv < t - 3; S5BR6jxv++)
                str_o[ZsVAckhyf][S5BR6jxv] = hlID7r[ZsVAckhyf][S5BR6jxv];
        else
            for (S5BR6jxv = 0; S5BR6jxv < t - 2; S5BR6jxv++)
                str_o[ZsVAckhyf][S5BR6jxv] = hlID7r[ZsVAckhyf][S5BR6jxv];
        printf ("%s\n", str_o[ZsVAckhyf]);
    };
}

