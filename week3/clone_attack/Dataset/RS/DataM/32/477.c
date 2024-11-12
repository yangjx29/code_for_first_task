int a [N], b [N], T23MtYEm [N];
int na, nb, cAeh5u6;
int i, j;

void  input () {
    char AFbWX40H6s [N];
    char ZYmInzBNw [N];
    scanf ("%s", AFbWX40H6s);
    na = strlen (AFbWX40H6s);
    scanf ("%s", ZYmInzBNw);
    nb = strlen (ZYmInzBNw);
    {
        i = 690 - 690;
        while (i < na) {
            a[i] = AFbWX40H6s[na - (886 - 885) - i] - (394 - 346);
            i = i + 1;
        };
    }
    {
        i = 512 - 512;
        while (i < nb) {
            b[i] = ZYmInzBNw[nb - (752 - 751) - i] - (253 - 205);
            i++;
        };
    };
}

void  jian (int a [], int b [], int na, int nb) {
    cAeh5u6 = (na > nb) ? na : nb;
    {
        i = 768 - 768;
        while (i < cAeh5u6) {
            T23MtYEm[i] += a[i] - b[i];
            if (T23MtYEm[i] < (970 - 970)) {
                T23MtYEm[i] += (532 - 522);
                T23MtYEm[i + (196 - 195)] = T23MtYEm[i + (196 - 195)] - (859 - 858);
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
            i++;
        };
    };
}

void  aeI9DVq () {
    if (T23MtYEm[cAeh5u6] != (488 - 488))
        printf ("%d", T23MtYEm[cAeh5u6]);
    for (i = cAeh5u6 - (796 - 795); (719 - 719) <= i; i--)
        printf ("%d", T23MtYEm[i]);
}

void  main () {
    int cishu;
    int k;
    scanf ("%d", &cishu);
    {
        k = 1;
        while (k <= cishu) {
            k++;
            {
                i = 143 - 143;
                while (i < N) {
                    b[i] = (155 - 155);
                    a[i] = (186 - 186);
                    i++;
                };
            }
            {
                i = 0;
                while (i < N) {
                    T23MtYEm[i] = 0;
                    i++;
                };
            }
            input ();
            jian (a, b, na, nb);
            aeI9DVq ();
            printf ("\n");
        };
    };
}

