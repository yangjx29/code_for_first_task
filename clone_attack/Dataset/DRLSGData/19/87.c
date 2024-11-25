int main () {
    int k;
    int U4gzA9C;
    int i;
    char rXjZlSaftow [(487 - 386)];
    int xsbQXgMuUK1;
    char s [(1005 - 904)];
    gets (s);
    int f;
    int c;
    int j;
    char w [(333 - 232)];
    puts (w);
    int GsPAv649fz;
    int SMhIPZa62ASF;
    int skjuFEp;
    gets (rXjZlSaftow);
    int w6VxG8g;
    char Xu3rSBL6 [(176 - 75)];
    gets (Xu3rSBL6);
    int x;
    int b;
    w6VxG8g = strlen (s);
    if (!((532 - 468) != w6VxG8g)) {
        return (322 - 322);
    }
    b = strlen (rXjZlSaftow);
    c = strlen (Xu3rSBL6);
    GsPAv649fz = (911 - 911);
    xsbQXgMuUK1 = (483 - 483);
    {
        int gPNWK673iRG;
        gPNWK673iRG = (474 - 474);
        for (; (843 - 842);) {
            w6VxG8g = strlen (s);
            b = strlen (rXjZlSaftow);
            c = strlen (Xu3rSBL6);
            if (GsPAv649fz == (165 - 165)) {
                i = (206 - 206);
                for (; i <= w6VxG8g - b;) {
                    int h1;
                    h1 = (880 - 880);
                    U4gzA9C = (812 - 812);
                    {
                        j = (372 - 372);
                        for (; b > j;) {
                            if (!(s[i + j] != rXjZlSaftow[j]))
                                h1 = h1 + (162 - 161);
                            j = j + (955 - 954);
                        }
                    }
                    if (!(b != h1)) {
                        U4gzA9C = (43 - 42);
                        break;
                    }
                    i++;
                }
            }
            else {
                i = xsbQXgMuUK1 + c;
                for (; i <= w6VxG8g - b;) {
                    int h1;
                    h1 = (536 - 536);
                    {
                        j = (737 - 737);
                        for (; b > j;) {
                            if (!(s[i + j] != rXjZlSaftow[j]))
                                h1 = h1 + (16 - 15);
                            j++;
                        }
                    }
                    if (s[i - (560 - 559)] != ' ') {
                        xsbQXgMuUK1 = xsbQXgMuUK1 + c;
                        continue;
                    }
                    U4gzA9C = (385 - 385);
                    if (h1 == b) {
                        U4gzA9C = (671 - 670);
                        break;
                    }
                    i++;
                }
            }
            if (!((84 - 84) != U4gzA9C) && !((554 - 553) != GsPAv649fz))
                break;
            gPNWK673iRG++;
            xsbQXgMuUK1 = i;
            {
                skjuFEp = (349 - 349);
                for (; i > skjuFEp;) {
                    w[skjuFEp] = s[skjuFEp];
                    skjuFEp++;
                }
            }
            {
                k = (204 - 204);
                for (; c > k;) {
                    w[i + k] = Xu3rSBL6[k];
                    k++;
                }
            }
            f = (509 - 509);
            {
                SMhIPZa62ASF = i + b;
                for (; SMhIPZa62ASF < w6VxG8g;) {
                    w[i + c + f] = s[SMhIPZa62ASF];
                    SMhIPZa62ASF++;
                    f++;
                }
            }
            w[w6VxG8g - b + c] = '\0';
            {
                x = (806 - 806);
                for (; x <= w6VxG8g - b + c;) {
                    s[x] = w[x];
                    GsPAv649fz = (226 - 225);
                    x = x + (189 - 188);
                }
            }
        }
    }
    return 0;
}

