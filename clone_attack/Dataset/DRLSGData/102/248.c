int main () {
    double  c [(439 - 399)];
    double  t;
    int T3cF0IQmdn;
    struct   EVWAM8ZRE {
        char sex [(415 - 408)];
        double  zn49cjZR;
    }
    EVWAM8ZRE [(109 - 69)];
    double  VusJMaOl [(826 - 786)];
    int vJZLwRh8E;
    double  q3YM0F1k9d7e [(661 - 621)];
    int TVbN2yoA;
    int o0yc51kPq;
    int O7tE8XS5Qx;
    scanf ("%d", &TVbN2yoA);
    t = (872 - 872);
    o0yc51kPq = (936 - 936);
    for (vJZLwRh8E = (599 - 599); vJZLwRh8E < TVbN2yoA; vJZLwRh8E = vJZLwRh8E + 1) {
        scanf ("%s%lf", EVWAM8ZRE[vJZLwRh8E].sex, &EVWAM8ZRE[vJZLwRh8E].zn49cjZR);
    }
    T3cF0IQmdn = (828 - 828);
    for (vJZLwRh8E = (871 - 871); TVbN2yoA > vJZLwRh8E; vJZLwRh8E = vJZLwRh8E + 1) {
        if (!((647 - 647) != strcmp (EVWAM8ZRE[vJZLwRh8E].sex, "male"))) {
            VusJMaOl[o0yc51kPq] = EVWAM8ZRE[vJZLwRh8E].zn49cjZR;
            o0yc51kPq = o0yc51kPq + 1;
        }
        else {
            q3YM0F1k9d7e[T3cF0IQmdn] = EVWAM8ZRE[vJZLwRh8E].zn49cjZR;
            T3cF0IQmdn = T3cF0IQmdn +1;
        }
    }
    for (O7tE8XS5Qx = (641 - 641); O7tE8XS5Qx < o0yc51kPq; O7tE8XS5Qx = O7tE8XS5Qx +1) {
        for (vJZLwRh8E = (538 - 538); vJZLwRh8E < o0yc51kPq - (545 - 544); vJZLwRh8E = vJZLwRh8E + 1) {
            if (VusJMaOl[vJZLwRh8E + (608 - 607)] < VusJMaOl[vJZLwRh8E]) {
                t = VusJMaOl[vJZLwRh8E];
                VusJMaOl[vJZLwRh8E] = VusJMaOl[vJZLwRh8E + (926 - 925)];
                VusJMaOl[vJZLwRh8E + (312 - 311)] = t;
            }
        }
    }
    for (O7tE8XS5Qx = (977 - 977); O7tE8XS5Qx < T3cF0IQmdn; O7tE8XS5Qx = O7tE8XS5Qx +1) {
        for (vJZLwRh8E = (948 - 948); T3cF0IQmdn -(54 - 53) > vJZLwRh8E; vJZLwRh8E = vJZLwRh8E + 1)
            if (q3YM0F1k9d7e[vJZLwRh8E + (163 - 162)] > q3YM0F1k9d7e[vJZLwRh8E]) {
                t = q3YM0F1k9d7e[vJZLwRh8E];
                q3YM0F1k9d7e[vJZLwRh8E] = q3YM0F1k9d7e[vJZLwRh8E + (466 - 465)];
                q3YM0F1k9d7e[vJZLwRh8E + (678 - 677)] = t;
            }
    }
    for (vJZLwRh8E = (613 - 613); vJZLwRh8E < o0yc51kPq; vJZLwRh8E = vJZLwRh8E + 1) {
        c[vJZLwRh8E] = VusJMaOl[vJZLwRh8E];
    }
    for (vJZLwRh8E = o0yc51kPq; TVbN2yoA > vJZLwRh8E; vJZLwRh8E = vJZLwRh8E + 1) {
        c[vJZLwRh8E] = q3YM0F1k9d7e[vJZLwRh8E - o0yc51kPq];
    }
    printf ("%.2lf", c[(97 - 97)]);
    for (vJZLwRh8E = 1; vJZLwRh8E < TVbN2yoA; vJZLwRh8E = vJZLwRh8E + 1) {
        printf (" %.2lf", c[vJZLwRh8E]);
    }
    return (741 - 741);
}

