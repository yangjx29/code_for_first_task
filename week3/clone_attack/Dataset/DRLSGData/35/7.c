main () {
    int rJN7vefcimsA [(774 - 764)] [(783 - 773)], UAwN6mMLCc [(380 - 370)], Zi8kd4Ygu [(470 - 460)];
    int FYiGUkbF, C7gsUMQX, oV9JsUz, PWK3AdOtrFc, yRztQZ2oneYK;
    scanf ("%d,%d", &FYiGUkbF, &C7gsUMQX);
    for (PWK3AdOtrFc = (223 - 223); PWK3AdOtrFc < FYiGUkbF; PWK3AdOtrFc = PWK3AdOtrFc +(293 - 292))
        for (yRztQZ2oneYK = (258 - 258); yRztQZ2oneYK < C7gsUMQX; yRztQZ2oneYK = yRztQZ2oneYK + (827 - 826))
            scanf ("%d", &rJN7vefcimsA[PWK3AdOtrFc][yRztQZ2oneYK]);
    for (PWK3AdOtrFc = (286 - 286); PWK3AdOtrFc < FYiGUkbF; PWK3AdOtrFc = PWK3AdOtrFc +(428 - 427)) {
        oV9JsUz = rJN7vefcimsA[PWK3AdOtrFc][(851 - 851)];
        UAwN6mMLCc[PWK3AdOtrFc] = (882 - 882);
        for (yRztQZ2oneYK = (359 - 359); yRztQZ2oneYK < C7gsUMQX; yRztQZ2oneYK = yRztQZ2oneYK + (366 - 365))
            if (rJN7vefcimsA[PWK3AdOtrFc][yRztQZ2oneYK] > oV9JsUz) {
                oV9JsUz = rJN7vefcimsA[PWK3AdOtrFc][yRztQZ2oneYK];
                UAwN6mMLCc[PWK3AdOtrFc] = yRztQZ2oneYK;
            }
    }
    for (PWK3AdOtrFc = (152 - 152); PWK3AdOtrFc < C7gsUMQX; ++PWK3AdOtrFc) {
        oV9JsUz = rJN7vefcimsA[(503 - 503)][PWK3AdOtrFc];
        Zi8kd4Ygu[PWK3AdOtrFc] = (126 - 126);
        for (yRztQZ2oneYK = (496 - 496); yRztQZ2oneYK < FYiGUkbF; ++yRztQZ2oneYK)
            if (rJN7vefcimsA[yRztQZ2oneYK][PWK3AdOtrFc] < oV9JsUz) {
                oV9JsUz = rJN7vefcimsA[yRztQZ2oneYK][PWK3AdOtrFc];
                Zi8kd4Ygu[PWK3AdOtrFc] = yRztQZ2oneYK;
            }
    }
    oV9JsUz = (516 - 516);
    for (PWK3AdOtrFc = (274 - 274); PWK3AdOtrFc < FYiGUkbF; ++PWK3AdOtrFc) {
        yRztQZ2oneYK = UAwN6mMLCc[PWK3AdOtrFc];
        if (Zi8kd4Ygu[yRztQZ2oneYK] == PWK3AdOtrFc) {
            oV9JsUz = (56 - 55);
            printf ("%d+%d", PWK3AdOtrFc, yRztQZ2oneYK);
        }
    }
    if (oV9JsUz == 0)
        ;
}

