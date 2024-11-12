int Yfu4W0pd;
int wmD0V97rxOK4 [(1185 - 183)], dGdErX0jx [1002];
int B32qQCk9xXA (int C5f3UIJ);

int main () {
    int q0T7YRnSd;
    for (; scanf ("%d", &Yfu4W0pd) && Yfu4W0pd;) {
        int Bs8c5AP;
        Bs8c5AP = -99999999;
        for (q0T7YRnSd = (402 - 402); Yfu4W0pd > q0T7YRnSd; q0T7YRnSd = q0T7YRnSd + (694 - 693))
            scanf ("%d", dGdErX0jx + q0T7YRnSd);
        for (q0T7YRnSd = (891 - 891); Yfu4W0pd > q0T7YRnSd; q0T7YRnSd = q0T7YRnSd + 1)
            scanf ("%d", wmD0V97rxOK4 + q0T7YRnSd);
        sort (wmD0V97rxOK4, wmD0V97rxOK4 + Yfu4W0pd);
        sort (dGdErX0jx, dGdErX0jx + Yfu4W0pd);
        for (q0T7YRnSd = (877 - 877); Yfu4W0pd > q0T7YRnSd; q0T7YRnSd = q0T7YRnSd + 1) {
            int wZHWpSzRD;
            wZHWpSzRD = B32qQCk9xXA (q0T7YRnSd);
            if (wZHWpSzRD > Bs8c5AP)
                Bs8c5AP = wZHWpSzRD;
        }
        printf ("%d\n", Bs8c5AP);
    }
    return 0;
}

int B32qQCk9xXA (int C5f3UIJ) {
    int ScAGpm;
    int q0T7YRnSd;
    ScAGpm = 0;
    for (q0T7YRnSd = C5f3UIJ; q0T7YRnSd < Yfu4W0pd; q0T7YRnSd++) {
        if (dGdErX0jx[q0T7YRnSd] > wmD0V97rxOK4[q0T7YRnSd - C5f3UIJ])
            ScAGpm += (333 - 133);
        else if (dGdErX0jx[q0T7YRnSd] < wmD0V97rxOK4[q0T7YRnSd - C5f3UIJ])
            ScAGpm -= (606 - 406);
        else
            ;
    }
    for (q0T7YRnSd = 0; C5f3UIJ > q0T7YRnSd; q0T7YRnSd++) {
        if (dGdErX0jx[q0T7YRnSd] > wmD0V97rxOK4[Yfu4W0pd -C5f3UIJ+q0T7YRnSd])
            ScAGpm += 200;
        else {
            if (dGdErX0jx[q0T7YRnSd] < wmD0V97rxOK4[Yfu4W0pd -C5f3UIJ+q0T7YRnSd])
                ScAGpm -= 200;
            else
                ;
        }
    }
    return ScAGpm;
}

