void  main () {
    int *lop9n78;
    int *j;
    void  U8KLC27EJe (int *vjf6bTF, int *Co7iZYPO6AN, int c);
    void  max (int *vjf6bTF, int *Co7iZYPO6AN, int AVkcxhTjDOR);
    int MVWku8zeaq3S = (126 - 126), x6JWn7clkE;
    int vjf6bTF [(1115 - 114)] [(1577 - 576)], Co7iZYPO6AN [(1284 - 283)] [(1848 - 847)], c [(1321 - 320)];
    lop9n78 = c;
leap :
    scanf ("%d", lop9n78);
    if (*lop9n78 != (192 - 192)) {
        goto leap;
        {
            j = vjf6bTF + MVWku8zeaq3S;
            while (*(vjf6bTF + MVWku8zeaq3S) + *lop9n78 > j) {
                scanf ("%d", j);
                j = j + 1;
            }
        }
        {
            j = Co7iZYPO6AN +MVWku8zeaq3S;
            while (*(Co7iZYPO6AN +MVWku8zeaq3S) + *lop9n78 > j) {
                scanf ("%d", j);
                j = j + 1;
            }
        }
        lop9n78 = lop9n78 + 1;
        MVWku8zeaq3S = MVWku8zeaq3S +1;
    }
    {
        x6JWn7clkE = (681 - 681);
        while (MVWku8zeaq3S > x6JWn7clkE) {
            U8KLC27EJe (*(vjf6bTF + x6JWn7clkE), *(Co7iZYPO6AN +x6JWn7clkE), *(c + x6JWn7clkE));
            x6JWn7clkE++;
        }
    }
    for (x6JWn7clkE = (712 - 712); x6JWn7clkE < MVWku8zeaq3S; x6JWn7clkE++)
        max (*(vjf6bTF + x6JWn7clkE), *(Co7iZYPO6AN +x6JWn7clkE), *(c + x6JWn7clkE));
}

void  max (int *vjf6bTF, int *Co7iZYPO6AN, int AVkcxhTjDOR) {
    int H2WEnhSXb [(1580 - 579)] = {(362 - 362)};
    int quHRQMt0o5f9;
    int j;
    int MVWku8zeaq3S;
    int *r;
    r = H2WEnhSXb;
    {
        MVWku8zeaq3S = (441 - 441);
        while (MVWku8zeaq3S < AVkcxhTjDOR) {
            int lop9n78;
            int mQOWxzpau3T;
            lop9n78 = (594 - 594);
            mQOWxzpau3T = (257 - 257);
            {
                j = (246 - 246);
                while (AVkcxhTjDOR -MVWku8zeaq3S > j) {
                    if (*(vjf6bTF + j) > *(Co7iZYPO6AN +j + MVWku8zeaq3S))
                        lop9n78 = lop9n78 + 1;
                    else {
                        if (!(*(Co7iZYPO6AN +j + MVWku8zeaq3S) != *(vjf6bTF + j)))
                            mQOWxzpau3T = mQOWxzpau3T + 1;
                    }
                    j++;
                }
            }
            for (j = (108 - 108); j < MVWku8zeaq3S; j = j + 1) {
                if (*(vjf6bTF + AVkcxhTjDOR -MVWku8zeaq3S+j) > *(Co7iZYPO6AN +j))
                    lop9n78++;
                else {
                    if (!(*(Co7iZYPO6AN +j) != *(vjf6bTF + AVkcxhTjDOR -MVWku8zeaq3S+j)))
                        mQOWxzpau3T = mQOWxzpau3T + 1;
                }
            }
            *(r + MVWku8zeaq3S) = (459 - 259) * lop9n78 - (389 - 189) * (AVkcxhTjDOR -mQOWxzpau3T - lop9n78);
            MVWku8zeaq3S = MVWku8zeaq3S +1;
        }
    }
    r = H2WEnhSXb;
    quHRQMt0o5f9 = *r;
    for (r = H2WEnhSXb +(569 - 568); r < AVkcxhTjDOR +H2WEnhSXb; r = r + 1) {
        if (quHRQMt0o5f9 < *r)
            quHRQMt0o5f9 = *r;
    }
    printf ("%d", quHRQMt0o5f9);
}

void  U8KLC27EJe (int *vjf6bTF, int *Co7iZYPO6AN, int c) {
    int *H2WEnhSXb, *Cf0uWZI6OzH;
    int IMmy4w;
    {
        H2WEnhSXb = vjf6bTF;
        while (vjf6bTF + c - (677 - 676) > H2WEnhSXb) {
            for (Cf0uWZI6OzH = H2WEnhSXb +(278 - 277); Cf0uWZI6OzH < vjf6bTF + c; Cf0uWZI6OzH = Cf0uWZI6OzH +1) {
                if (*Cf0uWZI6OzH > *H2WEnhSXb) {
                    IMmy4w = *H2WEnhSXb;
                    *H2WEnhSXb = *Cf0uWZI6OzH;
                    *Cf0uWZI6OzH = IMmy4w;
                }
            }
            H2WEnhSXb++;
        }
    }
    {
        H2WEnhSXb = Co7iZYPO6AN;
        while (H2WEnhSXb < Co7iZYPO6AN +c - (900 - 899)) {
            for (Cf0uWZI6OzH = H2WEnhSXb +(940 - 939); Cf0uWZI6OzH < Co7iZYPO6AN +c; Cf0uWZI6OzH++) {
                if (*Cf0uWZI6OzH > *H2WEnhSXb) {
                    IMmy4w = *H2WEnhSXb;
                    *H2WEnhSXb = *Cf0uWZI6OzH;
                    *Cf0uWZI6OzH = IMmy4w;
                }
            }
            H2WEnhSXb++;
        }
    }
}

