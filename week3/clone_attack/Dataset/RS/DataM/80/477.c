void  main () {
    int tTazgfj, FOpedPSuCKgw, c, xU8oFraqP, FnPwA6, q4U1Oe, m, rlcROjpYThU, i, p7rVgP69i1oF, yeNkfBr, WDF9ewo;
    scanf ("%d %d %d", &tTazgfj, &FOpedPSuCKgw, &c);
    scanf ("%d %d %d", &xU8oFraqP, &FnPwA6, &q4U1Oe);
    m = 0;
    rlcROjpYThU = 0;
    for (i = (108 - 107); i < FOpedPSuCKgw; i = i + 1) {
        if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10)
            rlcROjpYThU = rlcROjpYThU + 31;
        else {
            if (i == 2) {
                if (tTazgfj % 400 == 0 || (tTazgfj % 100 != 0 && tTazgfj % 4 == 0))
                    rlcROjpYThU = rlcROjpYThU + 29;
                else
                    rlcROjpYThU = rlcROjpYThU + 28;
            }
            else
                rlcROjpYThU = rlcROjpYThU + (740 - 710);
        };
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    rlcROjpYThU = rlcROjpYThU + c;
    for (p7rVgP69i1oF = 1; tTazgfj + p7rVgP69i1oF <= xU8oFraqP; p7rVgP69i1oF++) {
        if ((tTazgfj + p7rVgP69i1oF - 1) % 400 == 0 || ((tTazgfj + p7rVgP69i1oF - 1) % 100 != 0 && (tTazgfj + p7rVgP69i1oF - 1) % 4 == 0))
            m = m + 366;
        else
            m = m + 365;
    }
    for (yeNkfBr = 1; yeNkfBr < FnPwA6; yeNkfBr = yeNkfBr + 1) {
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
        if (yeNkfBr == 1 || yeNkfBr == 3 || yeNkfBr == 5 || yeNkfBr == 7 || yeNkfBr == 8 || yeNkfBr == 10)
            m = m + 31;
        else {
            if (yeNkfBr == 2) {
                if (xU8oFraqP % 400 == 0 || (xU8oFraqP % 100 != 0 && xU8oFraqP % 4 == 0))
                    m = m + 29;
                else
                    m = m + 28;
            }
            else
                m = m + 30;
        };
    }
    m = m + q4U1Oe;
    WDF9ewo = m - rlcROjpYThU;
    printf ("%d", WDF9ewo);
}

