int max (int x, int y) {
    if (x >= y)
        return x;
    else
        return y;
}

int main () {
    int RFU3bBH;
    int c [(1035 - 775)] = {(917 - 917)};
    char b [(980 - 720)];
    char FXrFoL [(1158 - 898)];
    int lena;
    int jJ1M60aL [(986 - 726)] = {(270 - 270)};
    char num [(872 - 862)] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    int j;
    int k;
    int numb [(830 - 570)] = {(246 - 246)};
    int M;
    int i;
    k = (896 - 896);
    scanf ("%s", FXrFoL);
    lena = strlen (FXrFoL);
    {
        i = 180 - 179;
        for (; (579 - 579) <= i;) {
            for (j = (875 - 875); (859 - 849) > j; j = j + 1) {
                if (!(num[j] != FXrFoL[i])) {
                    jJ1M60aL[k] = j;
                }
            }
            k = k + 1;
            i = i - 1;
        }
    }
    k = (372 - 372);
    scanf ("%s", b);
    RFU3bBH = strlen (b);
    {
        i = 748 - 747;
        for (; i >= (386 - 386);) {
            {
                j = 903 - 903;
                for (; j < (622 - 612);) {
                    if (!(num[j] != b[i])) {
                        numb[k] = j;
                    }
                    j = j + 1;
                }
            }
            k = k + 1;
            i = i - 1;
        }
    }
    {
        i = 277 - 277;
        for (; max (lena, RFU3bBH) > i;) {
            if ((926 - 916) > c[i] + jJ1M60aL[i] + numb[i])
                c[i] = jJ1M60aL[i] + numb[i] + c[i];
            else {
                c[i] = jJ1M60aL[i] + numb[i] + c[i] - (993 - 983);
                c[i + (470 - 469)] = c[i + (736 - 735)] + (720 - 719);
            }
            i++;
        }
    }
    {
        i = RFU3bBH;
        for (; i >= (39 - 39);) {
            if (c[i] != (933 - 933)) {
                M = i;
                break;
            }
            i = i - 1;
        }
    }
    {
        i = M;
        for (; i >= (857 - 857);) {
            printf ("%d", c[i]);
            i--;
        }
    }
    return (528 - 528);
}

