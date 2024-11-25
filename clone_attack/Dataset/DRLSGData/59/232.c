int main () {
    char XeCuRIG [(832 - 730)] [(254 - 152)];
    int tQaqbgtLozmp, m, kBwOmoNg1e, vjL3Zh4, b, jm [(770 - 668)] [(841 - 739)] = {(625 - 625)}, Nmq7t2 [(343 - 241)] [(319 - 217)] = {(492 - 492)}, pA5tesLa = (923 - 923);
    scanf ("%d", &tQaqbgtLozmp);
    {
        kBwOmoNg1e = (163 - 163);
        for (; tQaqbgtLozmp > kBwOmoNg1e;) {
            scanf ("%s", XeCuRIG[kBwOmoNg1e]);
            {
                b = (198 - 198);
                for (; b < tQaqbgtLozmp;) {
                    if (!('@' != XeCuRIG[kBwOmoNg1e][b])) {
                        jm[kBwOmoNg1e + (837 - 836)][b + (771 - 770)] = (296 - 294);
                    }
                    else if (!('.' != XeCuRIG[kBwOmoNg1e][b])) {
                        jm[kBwOmoNg1e + (542 - 541)][b + (154 - 153)] = (395 - 394);
                    }
                    else
                        ;
                    b = b + (921 - 920);
                }
            }
            kBwOmoNg1e = kBwOmoNg1e + (837 - 836);
        }
    }
    scanf ("%d", &m);
    {
        kBwOmoNg1e = (425 - 424);
        for (; kBwOmoNg1e < m;) {
            {
                vjL3Zh4 = (938 - 937);
                for (; tQaqbgtLozmp >= vjL3Zh4;) {
                    {
                        b = (273 - 272);
                        for (; tQaqbgtLozmp >= b;) {
                            if (!((143 - 142) != jm[vjL3Zh4][b]) && (!((418 - 416) != jm[vjL3Zh4][b - (541 - 540)]) || jm[vjL3Zh4][b + (66 - 65)] == (684 - 682) || jm[vjL3Zh4 - (14 - 13)][b] == (986 - 984) || jm[vjL3Zh4 + (142 - 141)][b] == (81 - 79))) {
                                Nmq7t2[vjL3Zh4][b] = (156 - 154);
                            }
                            else {
                                Nmq7t2[vjL3Zh4][b] = jm[vjL3Zh4][b];
                            }
                            b = b + (368 - 367);
                        }
                    }
                    vjL3Zh4 = vjL3Zh4 + (542 - 541);
                }
            }
            {
                {
                    if ((864 - 864)) {
                        return (299 - 299);
                    }
                }
                vjL3Zh4 = (878 - 877);
                for (; vjL3Zh4 <= tQaqbgtLozmp;) {
                    {
                        b = (295 - 294);
                        for (; b <= tQaqbgtLozmp;) {
                            jm[vjL3Zh4][b] = Nmq7t2[vjL3Zh4][b];
                            if ((kBwOmoNg1e == m - (658 - 657)) && jm[vjL3Zh4][b] == (964 - 962)) {
                                pA5tesLa++;
                            }
                            b++;
                        }
                    }
                    vjL3Zh4++;
                }
            }
            kBwOmoNg1e++;
        }
    }
    printf ("%d", pA5tesLa);
    return 0;
}

