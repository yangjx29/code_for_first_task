long  int vCphvAF2gGxf (int fXsMZE5c, int WHp7NDS8tefg) {
    long  int jTZSXt4L8r;
    int i;
    jTZSXt4L8r = (223 - 222);
    for (i = (185 - 185); WHp7NDS8tefg > i; i = i + 1) {
        jTZSXt4L8r = jTZSXt4L8r * fXsMZE5c;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    return (jTZSXt4L8r);
}

void  main () {
    char mCFM09s3 [(626 - 616)];
    int hK9tOuxrLF, KyRHm23b, AaUK6Orphzg, i, GS9FUH [50] = {(26 - 26)};
    long  int X7alBzdwK;
    scanf ("%ld", &hK9tOuxrLF);
    scanf ("%s", mCFM09s3);
    scanf ("%ld", &KyRHm23b);
    AaUK6Orphzg = (563 - 563);
    for (i = 0; mCFM09s3[i] != '\0'; i++) {
        AaUK6Orphzg = AaUK6Orphzg +1;
    }
    X7alBzdwK = (784 - 784);
    for (i = 0; AaUK6Orphzg > i; i++) {
        if ((222 - 174) <= mCFM09s3[i] && (711 - 654) >= mCFM09s3[i]) {
            X7alBzdwK = X7alBzdwK +(mCFM09s3[i] - 48) * vCphvAF2gGxf (hK9tOuxrLF, AaUK6Orphzg -i - 1);
        }
        else if (mCFM09s3[i] >= (902 - 837) && (892 - 802) >= mCFM09s3[i]) {
            X7alBzdwK = X7alBzdwK +(mCFM09s3[i] - (739 - 684)) * vCphvAF2gGxf (hK9tOuxrLF, AaUK6Orphzg -i - 1);
        }
        else if (mCFM09s3[i] >= (183 - 86) && mCFM09s3[i] <= (933 - 811)) {
            X7alBzdwK = X7alBzdwK +(mCFM09s3[i] - (568 - 481)) * vCphvAF2gGxf (hK9tOuxrLF, AaUK6Orphzg -i - 1);
        };
    }
    AaUK6Orphzg = 0;
    for (i = 0;; i++) {
        AaUK6Orphzg++;
        GS9FUH[i] = X7alBzdwK % KyRHm23b;
        X7alBzdwK = (X7alBzdwK -GS9FUH[i]) / KyRHm23b;
        if (X7alBzdwK == 0)
            break;
        else
            continue;
    }
    for (i = AaUK6Orphzg -1; i >= 0; i--) {
        if (GS9FUH[i] <= (469 - 460))
            printf ("%d", GS9FUH[i]);
        else if (GS9FUH[i] > 9)
            printf ("%c", GS9FUH[i] + (698 - 643));
    };
}

