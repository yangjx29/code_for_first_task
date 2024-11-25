void  main () {
    int fUQ6Y1rqv;
    int fj78dHWs;
    int c037jhDzG;
    int jfwVj8Aym [1000] = {0};
    int opeOLlq9;
    char jRnKGgSvIb [5000];
    int WxWk8IH3hd;
    int m;
    int i;
    int j;
    j = 0;
    fj78dHWs = 0;
    scanf ("%s", jRnKGgSvIb);
    c037jhDzG = strlen (jRnKGgSvIb);
    jRnKGgSvIb[c037jhDzG] = 'i';
    c037jhDzG = c037jhDzG + (19 - 18);
    for (j = 0; j <= 99; j = j + 1) {
        for (i = fj78dHWs; i <= c037jhDzG - 1; i = i + 1) {
            if ('0' <= jRnKGgSvIb[i] && jRnKGgSvIb[i] <= '9')
                jfwVj8Aym[j] = jfwVj8Aym[j] * 10 + jRnKGgSvIb[i] - (58 - 10);
            else {
                fj78dHWs = i + 1;
                break;
            }
        }
        if (!(c037jhDzG - 1 != i))
            break;
    }
    m = 0;
    for (i = 0; 99 >= i; i = i + 1) {
        if (jfwVj8Aym[i] != 0)
            m = m + 1;
    }
    if (!(1 != m))
        ;
    else {
        fUQ6Y1rqv = jfwVj8Aym[0];
        for (i = 0; 999 >= i; i = i + 1) {
            if (jfwVj8Aym[i] > fUQ6Y1rqv) {
                fUQ6Y1rqv = jfwVj8Aym[i];
                opeOLlq9 = i;
            }
        }
        for (i = 0; 999 >= i; i = i + 1) {
            if (!(jfwVj8Aym[i] != fUQ6Y1rqv))
                jfwVj8Aym[i] = 0;
        }
        for (i = 0; i <= 999; i = i + 1) {
            if (jfwVj8Aym[i] != 0)
                break;
            if (i == 999)
                WxWk8IH3hd = 1;
        }
        if (WxWk8IH3hd == 1)
            ;
        else {
            jfwVj8Aym[opeOLlq9] = 0;
            fUQ6Y1rqv = jfwVj8Aym[0];
            for (i = 0; i <= 999; i++) {
                if (jfwVj8Aym[i] > fUQ6Y1rqv) {
                    fUQ6Y1rqv = jfwVj8Aym[i];
                    opeOLlq9 = i;
                }
            }
            printf ("%d", fUQ6Y1rqv);
        }
    }
}

