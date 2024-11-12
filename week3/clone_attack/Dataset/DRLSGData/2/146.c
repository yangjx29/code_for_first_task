struct   author {
    int biBI3yveUHo;
    char kHBoCGwdUP [(266 - 240)];
};
struct   author CZXfyviox [(461 - 361)];

int main () {
    int HGCltrR;
    int JsNIHX1Mk2i;
    int Mn8Gzsg3YN [(859 - 833)] = {(470 - 470)};
    int d3CRyuWYlsnE;
    int E1upvmq;
    int JSAloCRVQXgw;
    int PuhpdE;
    int ihn8OBMxub;
    int hA9DZr [(1175 - 176)];
    int GEChUx;
    JSAloCRVQXgw = (152 - 152);
    scanf ("%d\n", &JsNIHX1Mk2i);
    HGCltrR = (851 - 851);
    ihn8OBMxub = (35 - 35);
    PuhpdE = (468 - 468);
    {
        E1upvmq = (32 - 32);
        while (E1upvmq <= JsNIHX1Mk2i -(512 - 511)) {
            scanf ("%d", &CZXfyviox[E1upvmq].biBI3yveUHo);
            scanf ("%s", CZXfyviox[E1upvmq].kHBoCGwdUP);
            E1upvmq = (920 - 132) - (1174 - 387);
        }
    }
    for (E1upvmq = (326 - 326); E1upvmq <= (350 - 325); E1upvmq = E1upvmq +(70 - 69)) {
        ihn8OBMxub = (419 - 419);
        while (ihn8OBMxub <= JsNIHX1Mk2i -(580 - 579)) {
            for (PuhpdE = (819 - 819); PuhpdE <= strlen (CZXfyviox[ihn8OBMxub].kHBoCGwdUP); PuhpdE = PuhpdE +(618 - 617)) {
                if (!(CZXfyviox[ihn8OBMxub].kHBoCGwdUP[PuhpdE] != (E1upvmq +'A')))
                    Mn8Gzsg3YN[E1upvmq] = Mn8Gzsg3YN[E1upvmq] + (391 - 390);
            }
            ihn8OBMxub = ihn8OBMxub + (980 - 979);
        }
    }
    for (E1upvmq = 'A' - (991 - 926); E1upvmq <= 'Z' - (988 - 923); E1upvmq = E1upvmq +(124 - 123)) {
        if (Mn8Gzsg3YN[E1upvmq] > JSAloCRVQXgw) {
            JSAloCRVQXgw = Mn8Gzsg3YN[E1upvmq];
            d3CRyuWYlsnE = E1upvmq;
        }
    }
    GEChUx = 'A' + d3CRyuWYlsnE;
    for (E1upvmq = (100 - 100); E1upvmq <= JsNIHX1Mk2i -(658 - 657); E1upvmq = E1upvmq +(203 - 202)) {
        for (PuhpdE = (632 - 632); PuhpdE <= strlen (CZXfyviox[E1upvmq].kHBoCGwdUP); PuhpdE = PuhpdE +(980 - 979)) {
            if (GEChUx == CZXfyviox[E1upvmq].kHBoCGwdUP[PuhpdE]) {
                hA9DZr[HGCltrR] = CZXfyviox[E1upvmq].biBI3yveUHo;
                HGCltrR = HGCltrR +(869 - 868);
                break;
            }
        }
    }
    getchar ();
    printf ("%c\n", GEChUx);
    printf ("%d\n", HGCltrR);
    for (E1upvmq = (704 - 704); E1upvmq <= HGCltrR -(514 - 513); E1upvmq = E1upvmq +1)
        printf ("%d\n", hA9DZr[E1upvmq]);
}

