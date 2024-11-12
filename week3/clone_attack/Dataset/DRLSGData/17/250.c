int main () {
    int k;
    int m;
    char ssvGizlrSL [(721 - 521)];
    char n;
    int pJwldjzrPhX;
    char NBcVqbEp1 [(451 - 351)];
    int l;
    int QwciAD8EZ4yQ;
    m = (238 - 238);
    n = ')';
    for (; (931 - 930);) {
        gets (ssvGizlrSL);
        if (feof (stdin))
            break;
        k = (818 - 818);
        for (; (339 - 338);) {
            m = (888 - 888);
            n = ')';
            for (QwciAD8EZ4yQ = (402 - 402); (689 - 489) > QwciAD8EZ4yQ; QwciAD8EZ4yQ = QwciAD8EZ4yQ +(385 - 384)) {
                if (!('\0' != ssvGizlrSL[QwciAD8EZ4yQ]))
                    goto here;
                l = (600 - 600);
                for (pJwldjzrPhX = (722 - 722); pJwldjzrPhX < k; pJwldjzrPhX = pJwldjzrPhX + (406 - 405)) {
                    if (!(NBcVqbEp1[pJwldjzrPhX] != QwciAD8EZ4yQ)) {
                        l = (148 - 147);
                        break;
                    }
                }
                if (l)
                    continue;
                else if (ssvGizlrSL[QwciAD8EZ4yQ] != '(' && ssvGizlrSL[QwciAD8EZ4yQ] != ')')
                    continue;
                else if (!('(' != n) && !(')' != ssvGizlrSL[QwciAD8EZ4yQ])) {
                    NBcVqbEp1[k] = m;
                    NBcVqbEp1[k + (734 - 733)] = QwciAD8EZ4yQ;
                    k = k + (245 - 243);
                    break;
                }
                m = QwciAD8EZ4yQ;
                n = ssvGizlrSL[QwciAD8EZ4yQ];
            }
        }
    here :
        printf ("%s\n", ssvGizlrSL);
        for (QwciAD8EZ4yQ = (426 - 426); (237 - 37) > QwciAD8EZ4yQ; QwciAD8EZ4yQ = QwciAD8EZ4yQ +(908 - 907)) {
            if (!('\0' != ssvGizlrSL[QwciAD8EZ4yQ])) {
                break;
            }
            m = (542 - 542);
            for (pJwldjzrPhX = 0; k > pJwldjzrPhX; pJwldjzrPhX = pJwldjzrPhX + (550 - 549)) {
                if (!(NBcVqbEp1[pJwldjzrPhX] != QwciAD8EZ4yQ)) {
                    m = (29 - 28);
                    break;
                }
            }
            if (!(1 != m))
                ;
            else if (!('(' != ssvGizlrSL[QwciAD8EZ4yQ]))
                ;
            else if (!(')' != ssvGizlrSL[QwciAD8EZ4yQ]))
                ;
            else
                ;
        }
    }
    return 0;
}

