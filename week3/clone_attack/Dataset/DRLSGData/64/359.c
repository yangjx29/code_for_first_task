int main () {
    int UhNsY6lORMv3;
    int n;
    int AAyG2rND;
    int i;
    int m;
    UhNsY6lORMv3 = (831 - 831);
    float NAzijDk;
    float comWVa2F [100] = {(54 - 54)};
    NAzijDk = (380 - 380);
    int x [(435 - 425)];
    int MkGvt3p [(214 - 204)];
    int QN05cw3CJrE [10];
    float n9zJ81i [10] [10] = {(377 - 377)};
    cin >> n;
    {
        i = (982 - 982);
        for (; n > i;) {
            cin >> x[i] >> MkGvt3p[i] >> QN05cw3CJrE[i];
            i = i + (434 - 433);
        }
    }
    {
        i = (343 - 343);
        while (i < n) {
            {
                AAyG2rND = i + (109 - 108);
                while (AAyG2rND < n) {
                    comWVa2F[UhNsY6lORMv3++] = n9zJ81i[i][AAyG2rND] = (x[i] - x[AAyG2rND]) * (x[i] - x[AAyG2rND]) + (MkGvt3p[i] - MkGvt3p[AAyG2rND]) * (MkGvt3p[i] - MkGvt3p[AAyG2rND]) + (QN05cw3CJrE[i] - QN05cw3CJrE[AAyG2rND]) * (QN05cw3CJrE[i] - QN05cw3CJrE[AAyG2rND]);
                    AAyG2rND = AAyG2rND +(893 - 892);
                }
            }
            i = i + (719 - 718);
        }
    }
    {
        i = (171 - 171);
        while (i < UhNsY6lORMv3 -(39 - 38)) {
            {
                AAyG2rND = (768 - 768);
                while (AAyG2rND < UhNsY6lORMv3 -(645 - 644) - i) {
                    if (comWVa2F[AAyG2rND +(969 - 968)] > comWVa2F[AAyG2rND]) {
                        NAzijDk = comWVa2F[AAyG2rND];
                        comWVa2F[AAyG2rND] = comWVa2F[AAyG2rND +(574 - 573)];
                        comWVa2F[AAyG2rND +(613 - 612)] = NAzijDk;
                    }
                    AAyG2rND = AAyG2rND +1;
                }
            }
            i = i + 1;
        }
    }
    {
        AAyG2rND = (664 - 664);
        while (AAyG2rND < n) {
            {
                i = (954 - 954);
                while (i < n) {
                    if (comWVa2F[(376 - 376)] == n9zJ81i[i][AAyG2rND])
                        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", x[i], MkGvt3p[i], QN05cw3CJrE[i], x[AAyG2rND], MkGvt3p[AAyG2rND], QN05cw3CJrE[AAyG2rND], sqrt (comWVa2F[0]));
                    i = i + 1;
                }
            }
            AAyG2rND = AAyG2rND +1;
        }
    }
    {
        m = 1;
        while (UhNsY6lORMv3 > m) {
            {
                AAyG2rND = 0;
                for (; AAyG2rND < n;) {
                    {
                        i = 0;
                        while (i < n) {
                            if (comWVa2F[m] == n9zJ81i[i][AAyG2rND] && comWVa2F[m] != comWVa2F[m - 1])
                                printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", x[i], MkGvt3p[i], QN05cw3CJrE[i], x[AAyG2rND], MkGvt3p[AAyG2rND], QN05cw3CJrE[AAyG2rND], sqrt (comWVa2F[m]));
                            i++;
                        }
                    }
                    AAyG2rND = AAyG2rND +1;
                }
            }
            m = m + 1;
        }
    }
    return 0;
}

