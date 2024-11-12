int main () {
    int n, i, j, area, flag = 1, v3khE6B2rbH = 0, a_1, a_2, b_1, b_2, term_1, term_2;
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        term_2 = 1;
        for (j = 0; j < n; j = j + 1) {
            term_1 = term_2;
            scanf ("%d", &term_2);
            if (flag) {
                if (!term_2) {
                    a_1 = i;
                    b_1 = j;
                    flag = !flag;
                };
            }
            else {
                if (!v3khE6B2rbH && i > a_1 && !(0 != term_1) && term_2 == 0) {
                    a_2 = i;
                    v3khE6B2rbH = !v3khE6B2rbH;
                }
                if (v3khE6B2rbH && term_1 == 0 && term_2 == 255) {
                    b_2 = j - 1;
                    goto label;
                };
            };
        };
    }
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
label :
    area = (a_2 - a_1 - 1) * (b_2 - b_1 - 1);
    printf ("%d\n", area);
    return 0;
}

