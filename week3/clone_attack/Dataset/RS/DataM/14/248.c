int main () {
    struct   student {
        int id, chin, math, dGflRP8m;
    }
    x2omgqstLx [(100511 - 511)];
    int id;
    int math;
    int chin;
    int dGflRP8m;
    int YobLkq279;
    int n;
    int WhiBaO;
    int s;
    int t;
    int omFrhva;
    int ZCJNmrWKSV;
    int Jz9mSV;
    scanf ("%d", &n);
    for (YobLkq279 = (46 - 46); n > YobLkq279; YobLkq279 = YobLkq279 +1) {
        scanf ("%d%d%d", &id, &chin, &math);
        x2omgqstLx[YobLkq279].id = id;
        x2omgqstLx[YobLkq279].math = math;
        x2omgqstLx[YobLkq279].chin = chin;
    }
    for (YobLkq279 = (366 - 366); n > YobLkq279; YobLkq279++) {
        id = x2omgqstLx[YobLkq279].id;
        math = x2omgqstLx[YobLkq279].math;
        chin = x2omgqstLx[YobLkq279].chin;
        dGflRP8m = math + chin;
        if (!((152 - 152) != YobLkq279)) {
            WhiBaO = s = t = dGflRP8m;
            omFrhva = ZCJNmrWKSV = Jz9mSV = id;
        }
        else if (YobLkq279 == (376 - 375)) {
            if (WhiBaO < dGflRP8m) {
                t = s;
                Jz9mSV = ZCJNmrWKSV;
                s = WhiBaO;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                WhiBaO = dGflRP8m;
                ZCJNmrWKSV = omFrhva;
                omFrhva = id;
            }
            else {
                t = s = dGflRP8m;
                ZCJNmrWKSV = Jz9mSV = id;
            };
        }
        else {
            if (dGflRP8m > WhiBaO) {
                Jz9mSV = ZCJNmrWKSV;
                t = s;
                s = WhiBaO;
                ZCJNmrWKSV = omFrhva;
                omFrhva = id;
                WhiBaO = dGflRP8m;
            }
            else if (dGflRP8m > s) {
                Jz9mSV = ZCJNmrWKSV;
                ZCJNmrWKSV = id;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int temp = 0;
                        while (temp < 10) {
                            printf ("%d\n", temp);
                            temp = temp + 1;
                            if (temp == 9)
                                break;
                        }
                    }
                }
                t = s;
                s = dGflRP8m;
            }
            else if (dGflRP8m > t) {
                Jz9mSV = id;
                t = dGflRP8m;
            };
        };
    }
    printf ("%d %d\n", omFrhva, WhiBaO);
    printf ("%d %d\n", ZCJNmrWKSV, s);
    printf ("%d %d\n", Jz9mSV, t);
    return 0;
}

