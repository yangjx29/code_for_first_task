int aw82V6 (int TpwmeQ []) {
    if (!(1 != TpwmeQ[0]) || !(2 != TpwmeQ[0])) {
        if (!(1 != TpwmeQ[4]))
            return 0;
        else
            return 1;
    }
    else if (!(1 != TpwmeQ[4]))
        return 1;
    else
        return 0;
}

int auw8epDv (int TpwmeQ []) {
    if (!(1 != TpwmeQ[1]) || !(2 != TpwmeQ[1])) {
        if (!(2 != TpwmeQ[1]))
            return 0;
        else
            return 1;
    }
    else if (!(2 != TpwmeQ[1]))
        return 1;
    else
        return 0;
}

int hVx5lh (int TpwmeQ []) {
    if (!(1 != TpwmeQ[2]) || !(2 != TpwmeQ[2])) {
        if (!(5 != TpwmeQ[0]))
            return 0;
        else
            return 1;
    }
    else if (TpwmeQ[0] == 5)
        return 1;
    else
        return 0;
}

int f4 (int TpwmeQ []) {
    if (!(1 != TpwmeQ[3]) || !(2 != TpwmeQ[3])) {
        if (!(1 == TpwmeQ[2]))
            return 0;
        else
            return 1;
    }
    else if (!(1 == TpwmeQ[2]))
        return 1;
    else
        return 0;
}

int LmvuMpTR (int TpwmeQ []) {
    if (!(2 != TpwmeQ[4]) || !(3 != TpwmeQ[4]))
        return 1;
    else {
        if (!(1 != TpwmeQ[4])) {
            if (!(1 != TpwmeQ[3]))
                return 0;
            else
                return 1;
        }
        else {
            if (TpwmeQ[3] == 1)
                return 1;
            else
                return 0;
        };
    };
}

void  main () {
    int mark;
    int QlEKzenvG1;
    int YSnrgXJ;
    int L0lj5pSI3;
    int l;
    int m;
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
    int Qv1EqktPY [5] = {1, 2, 3, 4, 5};
    int TpwmeQ [5];
    mark = 1;
    {
        QlEKzenvG1 = 0;
        while (QlEKzenvG1 < 5) {
            TpwmeQ[0] = Qv1EqktPY[QlEKzenvG1];
            {
                YSnrgXJ = 0;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                while (YSnrgXJ < 5) {
                    if (YSnrgXJ == QlEKzenvG1)
                        continue;
                    TpwmeQ[1] = Qv1EqktPY[YSnrgXJ];
                    {
                        L0lj5pSI3 = 0;
                        while (L0lj5pSI3 < 5) {
                            if (L0lj5pSI3 == QlEKzenvG1 || L0lj5pSI3 == YSnrgXJ)
                                continue;
                            TpwmeQ[2] = Qv1EqktPY[L0lj5pSI3];
                            {
                                l = 0;
                                while (l < 5) {
                                    if (l == QlEKzenvG1 || l == YSnrgXJ || l == L0lj5pSI3)
                                        continue;
                                    TpwmeQ[3] = Qv1EqktPY[l];
                                    {
                                        m = 0;
                                        while (m < 5) {
                                            if (m == QlEKzenvG1 || m == YSnrgXJ || m == L0lj5pSI3 || m == l)
                                                continue;
                                            TpwmeQ[4] = Qv1EqktPY[m];
                                            if (mark) {
                                                if (mark = aw82V6 (TpwmeQ))
                                                    continue;
                                                if (mark = auw8epDv (TpwmeQ))
                                                    continue;
                                                if (mark = hVx5lh (TpwmeQ))
                                                    continue;
                                                if (mark = f4 (TpwmeQ))
                                                    continue;
                                                if (mark = LmvuMpTR (TpwmeQ))
                                                    continue;
                                            }
                                            if (mark == 0)
                                                break;
                                            m = m + 1;
                                        };
                                    }
                                    {
                                        int x = 0, y;
                                        if (!(x * (x - 1) % 2 == 0)) {
                                            double  temp = 0.0;
                                            if (temp == 3)
                                                return 0;
                                        }
                                    }
                                    if (mark == 0)
                                        break;
                                    l = l + 1;
                                };
                            }
                            if (mark == 0)
                                break;
                            L0lj5pSI3++;
                        };
                    }
                    if (mark == 0)
                        break;
                    YSnrgXJ++;
                };
            }
            if (mark == 0)
                break;
            QlEKzenvG1++;
        };
    }
    printf ("%d %d %d %d %d\n", TpwmeQ[0], TpwmeQ[1], TpwmeQ[2], TpwmeQ[3], TpwmeQ[4]);
}

