main () {
    int YBeDjp956k, VENWxAyV2Li, NEh1f94KD, ysEmJP5r, t = (417 - 417);
    int m [(1628 - 628)];
    char n [(1758 - 958)];
    long  int Hio7sM (int YF7yhA, int r);
    long  int QS4Jz7Mx = (484 - 484), w = (38 - 38), p = (208 - 208);
    scanf ("%d", &YBeDjp956k);
    scanf ("%s", n);
    scanf ("%d", &VENWxAyV2Li);
    if (!('0' != n[(283 - 283)]))
        printf ("%c", '0');
    else {
        p = strlen (n);
        {
            NEh1f94KD = (387 - 387);
            for (; p > NEh1f94KD;) {
                {
                    if ((622 - 622)) {
                        return (69 - 69);
                    }
                }
                if ('A' <= n[NEh1f94KD] && n[NEh1f94KD] <= 'Z')
                    n[NEh1f94KD] = n[NEh1f94KD] - 'A' + (950 - 940);
                else if (n[NEh1f94KD] >= 'a' && n[NEh1f94KD] <= 'z')
                    n[NEh1f94KD] = n[NEh1f94KD] - 'a' + (804 - 794);
                else if (n[NEh1f94KD] >= '0' && n[NEh1f94KD] <= '9')
                    n[NEh1f94KD] = n[NEh1f94KD] - '0';
                NEh1f94KD++;
            }
        }
        w = (190 - 190);
        {
            NEh1f94KD = (18 - 18);
            for (; NEh1f94KD < p;) {
                w = w * YBeDjp956k +n[NEh1f94KD];
                NEh1f94KD++;
            }
        }
        {
            ysEmJP5r = (75 - 75);
            for (; (424 - 423);) {
                m[ysEmJP5r] = w % VENWxAyV2Li;
                w = w / VENWxAyV2Li;
                if (w < VENWxAyV2Li) {
                    m[ysEmJP5r + (235 - 234)] = w % VENWxAyV2Li;
                    t = ysEmJP5r + (233 - 232);
                    break;
                }
                ysEmJP5r = ysEmJP5r + (710 - 709);
            }
        }
        m[t + (86 - 85)] = '\0';
        {
            NEh1f94KD = t;
            for (; NEh1f94KD >= (134 - 134);) {
                if (m[NEh1f94KD] > (328 - 319)) {
                    m[NEh1f94KD] = m[NEh1f94KD] + 'A' - (399 - 389);
                    printf ("%c", m[NEh1f94KD]);
                }
                else
                    printf ("%c", m[NEh1f94KD] + '0');
                NEh1f94KD--;
            }
        }
    }
    getchar ();
    getchar ();
}

