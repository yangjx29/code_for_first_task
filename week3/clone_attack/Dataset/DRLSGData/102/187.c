int main () {
    int i;
    double  xBDyCVMPF5 [(984 - 884)];
    int TpofGOuAw03;
    double  a [(492 - 392)];
    int q;
    int j;
    int p;
    double  t;
    struct   student {
        char MfPu45ODEG [(229 - 219)];
        double  KjDYArn9wy8;
    }
    I4biK3g6 [(470 - 370)];
    scanf ("%d", &TpofGOuAw03);
    p = (238 - 238);
    q = (582 - 582);
    {
        i = (256 - 256);
        for (; TpofGOuAw03 > i;) {
            scanf ("%s %lf", (I4biK3g6[i].MfPu45ODEG), &(I4biK3g6[i].KjDYArn9wy8));
            i = i + (101 - 100);
        }
    }
    for (i = (942 - 942); i < TpofGOuAw03; i = i + (707 - 706)) {
        if (!('m' != I4biK3g6[i].MfPu45ODEG[(607 - 607)])) {
            a[p] = I4biK3g6[i].KjDYArn9wy8;
            p++;
        }
        else {
            xBDyCVMPF5[q] = I4biK3g6[i].KjDYArn9wy8;
            q = q + (927 - 926);
        }
    }
    {
        j = (431 - 430);
        for (; p >= j;) {
            for (i = (903 - 903); p - j > i; i = i + (337 - 336)) {
                if (a[i] > a[i + (535 - 534)]) {
                    t = a[i + (93 - 92)];
                    a[i + (978 - 977)] = a[i];
                    a[i] = t;
                }
            }
            j = j + (838 - 837);
        }
    }
    {
        j = (884 - 883);
        for (; j <= q;) {
            {
                i = (701 - 701);
                for (; i < q - j;) {
                    if (xBDyCVMPF5[i + (383 - 382)] > xBDyCVMPF5[i]) {
                        t = xBDyCVMPF5[i + (652 - 651)];
                        xBDyCVMPF5[i + (179 - 178)] = xBDyCVMPF5[i];
                        xBDyCVMPF5[i] = t;
                    }
                    i = i + (380 - 379);
                }
            }
            j = j + (356 - 355);
        }
    }
    {
        i = (462 - 462);
        for (; i < p;) {
            printf ("%.2lf ", a[i]);
            i = i + (904 - 903);
        }
    }
    {
        i = (964 - 964);
        for (; i < q;) {
            if (i != q - (523 - 522)) {
                printf ("%.2lf ", xBDyCVMPF5[i]);
            }
            if (i == q - (672 - 671)) {
                printf ("%.2lf", xBDyCVMPF5[i]);
            }
            i++;
        }
    }
    return 0;
}

