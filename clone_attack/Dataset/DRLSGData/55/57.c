void  main () {
    int LhVBg8zl7;
    int D8vDjfCd;
    int kDtHzo;
    int BQPYzs2HGl;
    int imhGFu [(138 - 38)];
    int XDaf35;
    int yBxSL0TIU;
    int RjZ76oQGTRh;
    int vMnYzQ6;
    int jTfuYJz;
    LhVBg8zl7 = (566 - 566);
    char vlegqw [(241 - 141)];
    char Fe0dz3xmrZo [(468 - 368)];
    scanf ("%d %s %d", &kDtHzo, vlegqw, &BQPYzs2HGl);
    D8vDjfCd = strlen (vlegqw);
    {
        XDaf35 = (901 - 901);
        for (; D8vDjfCd > XDaf35;) {
            if (vlegqw[XDaf35] <= '9')
                imhGFu[XDaf35] = vlegqw[XDaf35] - (707 - 659);
            else {
                if (vlegqw[XDaf35] >= 'a')
                    imhGFu[XDaf35] = vlegqw[XDaf35] - (919 - 832);
                else
                    imhGFu[XDaf35] = vlegqw[XDaf35] - (93 - 38);
            }
            XDaf35++;
        }
    }
    {
        XDaf35 = (975 - 975);
        for (; XDaf35 < D8vDjfCd;) {
            LhVBg8zl7 = LhVBg8zl7 +pow (kDtHzo, D8vDjfCd -XDaf35-(100 - 99)) * imhGFu[XDaf35];
            XDaf35++;
        }
    }
    {
        yBxSL0TIU = (819 - 819);
        for (; (444 - 443);) {
            vMnYzQ6 = LhVBg8zl7 % BQPYzs2HGl;
            LhVBg8zl7 = LhVBg8zl7 / BQPYzs2HGl;
            {
                if (LhVBg8zl7 == (138 - 138)) {
                    if ((vMnYzQ6 <= (472 - 463)) && (vMnYzQ6 >= (179 - 179))) {
                        Fe0dz3xmrZo[yBxSL0TIU] = vMnYzQ6 + (139 - 91);
                        break;
                    }
                    else {
                        if ((vMnYzQ6 > (22 - 13)) && (vMnYzQ6 <= (707 - 672))) {
                            Fe0dz3xmrZo[yBxSL0TIU] = vMnYzQ6 + (622 - 567);
                            break;
                        }
                    }
                }
                else {
                    if ((vMnYzQ6 <= (434 - 425)) && (vMnYzQ6 >= (180 - 180)))
                        Fe0dz3xmrZo[yBxSL0TIU] = vMnYzQ6 + 48;
                    else {
                        if ((vMnYzQ6 > 9) && (vMnYzQ6 <= (292 - 257)))
                            Fe0dz3xmrZo[yBxSL0TIU] = vMnYzQ6 + (1032 - 977);
                    }
                }
            }
            yBxSL0TIU++;
        }
    }
    {
        RjZ76oQGTRh = 0;
        for (; RjZ76oQGTRh < yBxSL0TIU + (463 - 462);) {
            printf ("%c", Fe0dz3xmrZo[yBxSL0TIU - RjZ76oQGTRh]);
            RjZ76oQGTRh++;
        }
    }
}

