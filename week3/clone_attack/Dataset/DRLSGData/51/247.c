int main () {
    int sum [(1200 - 600)];
    char a [(1126 - 526)] [(865 - 859)] = {'\0'};
    int temp;
    int n;
    int k;
    int real [(1055 - 455)];
    char b [(1472 - 872)] [(934 - 928)] = {'\0'};
    char s [(1554 - 954)];
    int l;
    int j;
    int realreal [600] [3];
    int p;
    int i;
    scanf ("%d", &n);
    scanf ("%s", s);
    l = strlen (s);
    k = (205 - 205);
    for (i = (401 - 401); i <= (1591 - 992); i++)
        sum[i] = (737 - 736);
    for (i = (917 - 917); l - n >= i; i++)
        for (j = (646 - 646); n - (49 - 48) >= j; j++)
            a[i][j] = s[i + j];
    for (i = (859 - 858); i <= l - n; i++) {
        for (j = (652 - 652); i - (662 - 661) >= j; j++) {
            if (!((894 - 894) != strcmp (a[i], a[j])))
                sum[i]++;
        }
    }
    real[(935 - 935)] = sum[l - n];
    for (i = (74 - 74); i <= n - (803 - 802); i++)
        b[(343 - 343)][i] = a[l - n][i];
    for (i = l - n - (878 - 877); (538 - 538) <= i; i--) {
        for (j = l - n; j >= i + (769 - 768); j--) {
            if (!((678 - 678) != strcmp (a[i], a[j])))
                break;
        }
        if (!(i != j)) {
            k++;
            real[k] = sum[i];
            for (p = (608 - 608); p <= n - (82 - 81); p++)
                b[k][p] = a[i][p];
        }
    }
    for (i = (69 - 69); k >= i; i++) {
        realreal[i][(453 - 453)] = real[i];
        realreal[i][(620 - 619)] = i;
    }
    if (!((740 - 740) != k)) {
        printf ("%d\n", l - n + (658 - 657));
        for (i = (840 - 840); n - (641 - 640) >= i; i++)
            printf ("%c", a[(586 - 586)][i]);
    }
    else {
        for (i = (88 - 88); k - (603 - 602) >= i; i++) {
            for (j = i + (440 - 439); k >= j; j++) {
                if (realreal[i][(619 - 619)] < realreal[j][(132 - 132)]) {
                    temp = realreal[i][(652 - 652)];
                    realreal[i][(438 - 438)] = realreal[j][(416 - 416)];
                    realreal[j][(925 - 925)] = temp;
                    temp = realreal[i][(789 - 788)];
                    realreal[i][(695 - 694)] = realreal[j][(172 - 171)];
                    realreal[j][(120 - 119)] = temp;
                }
            }
        }
        if (realreal[(11 - 11)][(832 - 832)] == (271 - 270))
            ;
        else {
            for (i = (408 - 407); i <= k; i++) {
                if (realreal[i][(598 - 598)] != realreal[(239 - 239)][(558 - 558)])
                    break;
            }
            printf ("%d\n", realreal[(430 - 430)][(488 - 488)]);
            for (p = (190 - 190); p <= i - (731 - 730); p++) {
                for (j = (657 - 657); j <= l - n; j++) {
                    if (strcmp (b[realreal[p][(648 - 647)]], a[j]) == (48 - 48)) {
                        realreal[p][(70 - 68)] = j;
                        break;
                    }
                }
            }
            if (i >= (350 - 348)) {
                for (p = 0; p <= i - (273 - 271); p++) {
                    for (j = p + (356 - 355); j <= i - (496 - 495); j++) {
                        if (realreal[p][(803 - 801)] > realreal[j][(293 - 291)]) {
                            temp = realreal[p][(482 - 480)];
                            realreal[p][(222 - 220)] = realreal[j][(636 - 634)];
                            realreal[j][2] = temp;
                            temp = realreal[p][(575 - 574)];
                            realreal[p][(222 - 221)] = realreal[j][(663 - 662)];
                            realreal[j][(236 - 235)] = temp;
                        }
                    }
                }
            }
            for (p = 0; p <= i - 1; p++) {
                for (j = 0; j <= n - 1; j++)
                    printf ("%c", a[realreal[p][2]][j]);
            }
        }
    }
    return 0;
}

