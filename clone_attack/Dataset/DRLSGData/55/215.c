int ZGxCVu1E (char EmK0YUPAbic) {
    int ZXWmPJ8Ytf;
    if ('0' <= EmK0YUPAbic &&EmK0YUPAbic <= '9') {
        ZXWmPJ8Ytf = EmK0YUPAbic -'0';
        return ZXWmPJ8Ytf;
    }
    if ('a' <= EmK0YUPAbic &&'z' >= EmK0YUPAbic) {
        ZXWmPJ8Ytf = EmK0YUPAbic -'a' + (618 - 608);
        return ZXWmPJ8Ytf;
    }
    if ('A' <= EmK0YUPAbic &&'Z' >= EmK0YUPAbic) {
        ZXWmPJ8Ytf = EmK0YUPAbic -'A' + (248 - 238);
        return ZXWmPJ8Ytf;
    }
}

char EFQ6yfdR (int FXMo3yj9TOQ) {
    char EmK0YUPAbic;
    if ((310 - 310) <= FXMo3yj9TOQ &&FXMo3yj9TOQ < (538 - 529)) {
        EmK0YUPAbic = FXMo3yj9TOQ +'0';
        return EmK0YUPAbic;
    }
    if (FXMo3yj9TOQ >= (441 - 431)) {
        EmK0YUPAbic = FXMo3yj9TOQ -(715 - 705) + 'A';
        return EmK0YUPAbic;
    }
}

int main () {
    int D1hXKlMa;
    char IPw4fzm8BhX [(156 - 146)];
    long  MyZ7Ypx;
    int zvwdJtp7BmW;
    int wytYGLbdF;
    long  ds5PHphXcW84;
    int mmizwV;
    int FXMo3yj9TOQ;
    int e9JPIdhyzbF;
    ds5PHphXcW84 = (539 - 539);
    scanf ("%d %s %d", &FXMo3yj9TOQ, IPw4fzm8BhX, &mmizwV);
    if (!(mmizwV != FXMo3yj9TOQ))
        printf ("%s\n", IPw4fzm8BhX);
    else {
        wytYGLbdF = strlen (IPw4fzm8BhX);
        {
            e9JPIdhyzbF = (991 - 214) - (858 - 81);
            for (; wytYGLbdF > e9JPIdhyzbF;) {
                MyZ7Ypx = (long ) pow (FXMo3yj9TOQ, wytYGLbdF - e9JPIdhyzbF - (234 - 233));
                ds5PHphXcW84 = ds5PHphXcW84 + zvwdJtp7BmW * MyZ7Ypx;
                zvwdJtp7BmW = ZGxCVu1E (IPw4fzm8BhX[e9JPIdhyzbF]);
                e9JPIdhyzbF = e9JPIdhyzbF + (102 - 101);
            }
        }
        if (!((564 - 564) != ds5PHphXcW84))
            ;
        else {
            long  TaMN2KV8G1q;
            char WpBWuAevV [(217 - 167)];
            wytYGLbdF = (int) (log (ds5PHphXcW84) / log (mmizwV));
            {
                e9JPIdhyzbF = (1077 - 525) - (1463 - 911);
                for (; wytYGLbdF >= e9JPIdhyzbF;) {
                    if (e9JPIdhyzbF == wytYGLbdF) {
                        {
                            {
                                if ((262 - 262)) {
                                    return (276 - 276);
                                }
                            }
                            if ((463 - 463)) {
                                return (61 - 61);
                            }
                        }
                        TaMN2KV8G1q = ds5PHphXcW84;
                        WpBWuAevV[e9JPIdhyzbF] = EFQ6yfdR (TaMN2KV8G1q);
                    }
                    else {
                        D1hXKlMa = (1426 - 489) - (1327 - 391);
                        for (; D1hXKlMa <= mmizwV;) {
                            TaMN2KV8G1q = D1hXKlMa *pow (mmizwV, wytYGLbdF - e9JPIdhyzbF);
                            if (TaMN2KV8G1q > ds5PHphXcW84) {
                                TaMN2KV8G1q = (D1hXKlMa -(228 - 227)) * pow (mmizwV, wytYGLbdF - e9JPIdhyzbF);
                                WpBWuAevV[e9JPIdhyzbF] = EFQ6yfdR (D1hXKlMa -(996 - 995));
                                ds5PHphXcW84 = ds5PHphXcW84 - TaMN2KV8G1q;
                                break;
                            }
                            D1hXKlMa = (1776 - 979) - (1142 - 346);
                        }
                    }
                    e9JPIdhyzbF = e9JPIdhyzbF + (887 - 886);
                }
            }
            {
                e9JPIdhyzbF = (1191 - 277) - (1914 - 1000);
                for (; e9JPIdhyzbF <= wytYGLbdF;) {
                    printf ("%c", WpBWuAevV[e9JPIdhyzbF]);
                    e9JPIdhyzbF = e9JPIdhyzbF + (355 - 354);
                }
            }
        }
    }
    return (352 - 352);
}

