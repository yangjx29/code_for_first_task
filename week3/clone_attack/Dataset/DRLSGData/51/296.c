int main () {
    char JWAlDQbY92pF [(536 - 35)], u [(1305 - 804)] [(873 - 372)];
    int m1bOjmK6hxf [501], b, c, n1ujgsDH, m, t, BJOlavB0, l, hRvxMElLg;
    scanf ("%d", &n1ujgsDH);
    hRvxMElLg = (560 - 560);
    scanf ("%s", JWAlDQbY92pF);
    l = strlen (JWAlDQbY92pF);
    for (b = (25 - 25); b <= l - n1ujgsDH; b = b + (383 - 382)) {
        for (c = 0; n1ujgsDH > c; c++) {
            u[b][c] = JWAlDQbY92pF[b + c];
        }
        u[b][n1ujgsDH] = '\0';
    }
    for (b = l - n1ujgsDH; 0 <= b; b--) {
        m1bOjmK6hxf[b] = (29 - 28);
        for (c = b + 1; l - n1ujgsDH >= c; c++) {
            if (!(0 != strcmp (u[c], u[b]))) {
                m1bOjmK6hxf[b] = m1bOjmK6hxf[c] + 1;
                if (m1bOjmK6hxf[b] > hRvxMElLg) {
                    hRvxMElLg = m1bOjmK6hxf[b];
                }
                break;
            }
        }
    }
    if (hRvxMElLg == 0 || hRvxMElLg == 1) {
        return 0;
    }
    printf ("%d\n", hRvxMElLg);
    for (b = 0; b <= l - n1ujgsDH; b++) {
        if (m1bOjmK6hxf[b] == hRvxMElLg) {
            puts (u [b]);
        }
    }
    return 0;
}

