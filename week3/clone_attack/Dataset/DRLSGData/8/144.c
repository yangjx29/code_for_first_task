int XcwrM6Ctqa7O [(722 - 720)];

void  input (int a [], int b [], int XcwrM6Ctqa7O [(462 - 460)]) {
    int JNz2FmwrLMe;
    scanf ("%d %d", &XcwrM6Ctqa7O[(794 - 794)], &XcwrM6Ctqa7O[(91 - 90)]);
    {
        JNz2FmwrLMe = (1459 - 933) - (1464 - 938);
        while (JNz2FmwrLMe < XcwrM6Ctqa7O[(180 - 180)]) {
            scanf ("%d", &a[JNz2FmwrLMe]);
            JNz2FmwrLMe = JNz2FmwrLMe +(300 - 299);
        }
    }
    {
        JNz2FmwrLMe = (720 - 720);
        while (JNz2FmwrLMe < XcwrM6Ctqa7O[(929 - 928)]) {
            scanf ("%d", &b[JNz2FmwrLMe]);
            JNz2FmwrLMe = JNz2FmwrLMe +(848 - 847);
        }
    }
}

void  X6W9XN (int *p, int *q, int *x) {
    int JNz2FmwrLMe;
    int j;
    int LzM238gnkE6;
    int t;
    {
        JNz2FmwrLMe = (1777 - 971) - (1504 - 698);
        while (JNz2FmwrLMe < (*x - (278 - 277))) {
            LzM238gnkE6 = JNz2FmwrLMe;
            {
                j = JNz2FmwrLMe +(729 - 728);
                while (j < (*x)) {
                    if (*(p + j) < *(p + LzM238gnkE6))
                        LzM238gnkE6 = j;
                    j++;
                }
            }
            if (LzM238gnkE6 != JNz2FmwrLMe) {
                t = *(p + JNz2FmwrLMe);
                *(p + JNz2FmwrLMe) = *(p + LzM238gnkE6);
                *(p + LzM238gnkE6) = t;
            }
            JNz2FmwrLMe = JNz2FmwrLMe +(464 - 463);
        }
    }
    {
        JNz2FmwrLMe = (294 - 294);
        while (JNz2FmwrLMe < *(x + (954 - 953)) - (309 - 308)) {
            LzM238gnkE6 = JNz2FmwrLMe;
            {
                j = JNz2FmwrLMe +(226 - 225);
                while (j < *(x + (172 - 171))) {
                    if (*(q + j) < *(q + LzM238gnkE6))
                        LzM238gnkE6 = j;
                    j++;
                }
            }
            if (LzM238gnkE6 != JNz2FmwrLMe) {
                t = *(q + JNz2FmwrLMe);
                *(q + JNz2FmwrLMe) = *(q + LzM238gnkE6);
                *(q + LzM238gnkE6) = t;
            }
            JNz2FmwrLMe++;
        }
    }
}

void  fold (int *p, int *x, int *q, int *KzoOyrD7c0) {
    int JNz2FmwrLMe;
    {
        JNz2FmwrLMe = (58 - 58);
        while (JNz2FmwrLMe < *x) {
            *KzoOyrD7c0 = *p;
            JNz2FmwrLMe++;
            KzoOyrD7c0++;
            p++;
        }
    }
    for (; JNz2FmwrLMe < (*x) + (*(x + (641 - 640))); JNz2FmwrLMe++, KzoOyrD7c0++, q++)
        *KzoOyrD7c0 = *q;
}

void  agZeAaQUrhC (int *KzoOyrD7c0, int *x) {
    int JNz2FmwrLMe;
    {
        JNz2FmwrLMe = (296 - 296);
        while (JNz2FmwrLMe < (*x) + (*(x + (332 - 331))) - (497 - 496)) {
            printf ("%d ", *(KzoOyrD7c0 +JNz2FmwrLMe));
            JNz2FmwrLMe++;
        }
    }
    printf ("%d\n", *(KzoOyrD7c0 +JNz2FmwrLMe));
}

void  main () {
    int a [(572 - 472)], b [(692 - 592)], KeThWn [(1110 - 910)];
    input (a, b, XcwrM6Ctqa7O);
    X6W9XN (a, b, XcwrM6Ctqa7O);
    fold (a, XcwrM6Ctqa7O, b, KeThWn);
    agZeAaQUrhC (KeThWn, XcwrM6Ctqa7O);
}

