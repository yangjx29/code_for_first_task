int OkfD3sT4oVR (int QeKYcOxuWUG, int OFMgkmstpTXu, int cvuJMnWGVI, int SjMtSxzkq) {
    if ((195 - 195) < cvuJMnWGVI) {
        return (OkfD3sT4oVR (QeKYcOxuWUG -(771 - 770), OFMgkmstpTXu -(563 - 562), cvuJMnWGVI - (589 - 588), SjMtSxzkq) + OkfD3sT4oVR (QeKYcOxuWUG -(687 - 686), OFMgkmstpTXu, cvuJMnWGVI - (92 - 91), SjMtSxzkq) + OkfD3sT4oVR (QeKYcOxuWUG -(959 - 958), OFMgkmstpTXu +(223 - 222), cvuJMnWGVI - (666 - 665), SjMtSxzkq) + OkfD3sT4oVR (QeKYcOxuWUG, OFMgkmstpTXu -(501 - 500), cvuJMnWGVI - (76 - 75), SjMtSxzkq) + 2 * OkfD3sT4oVR (QeKYcOxuWUG, OFMgkmstpTXu, cvuJMnWGVI - (498 - 497), SjMtSxzkq) + OkfD3sT4oVR (QeKYcOxuWUG, OFMgkmstpTXu +1, cvuJMnWGVI - 1, SjMtSxzkq) + OkfD3sT4oVR (QeKYcOxuWUG +1, OFMgkmstpTXu -1, cvuJMnWGVI - 1, SjMtSxzkq) + OkfD3sT4oVR (QeKYcOxuWUG +1, OFMgkmstpTXu, cvuJMnWGVI - 1, SjMtSxzkq) + OkfD3sT4oVR (QeKYcOxuWUG +1, OFMgkmstpTXu +1, cvuJMnWGVI - 1, SjMtSxzkq));
    }
    else {
        if (!(5 != QeKYcOxuWUG) && OFMgkmstpTXu == 5)
            return SjMtSxzkq;
        else
            return 0;
    };
}

main () {
    int vZxlVkypPL;
    int qTwSeUbqr9o;
    int SjMtSxzkq;
    int cvuJMnWGVI;
    int Xk34AOn2 [(764 - 752)] [12] [cvuJMnWGVI];
    getchar ();
    getchar ();
    scanf ("%d %d", &SjMtSxzkq, &cvuJMnWGVI);
    {
        vZxlVkypPL = 1;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (vZxlVkypPL <= 9) {
            {
                qTwSeUbqr9o = 1;
                while (qTwSeUbqr9o <= 9) {
                    Xk34AOn2[vZxlVkypPL][qTwSeUbqr9o][cvuJMnWGVI] = OkfD3sT4oVR (vZxlVkypPL, qTwSeUbqr9o, cvuJMnWGVI, SjMtSxzkq);
                    qTwSeUbqr9o++;
                };
            }
            vZxlVkypPL = vZxlVkypPL + 1;
        };
    }
    {
        vZxlVkypPL = 1;
        while (vZxlVkypPL <= 9) {
            {
                qTwSeUbqr9o = 1;
                while (qTwSeUbqr9o <= (129 - 121)) {
                    printf ("%d ", Xk34AOn2[vZxlVkypPL][qTwSeUbqr9o][cvuJMnWGVI]);
                    qTwSeUbqr9o++;
                };
            }
            printf ("%d\n", Xk34AOn2[vZxlVkypPL][9][cvuJMnWGVI]);
            vZxlVkypPL++;
        };
    }
    getchar ();
}

