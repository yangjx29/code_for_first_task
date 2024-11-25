float suan (int QGj52cWDq [], int b [], int n, float d) {
    float e = 0;
    double  c [10];
    int i = 0;
    for (i = 0; n > i; i = i + 1) {
        if (60 > b[i])
            c[i] = 0;
        else {
            if (64 > b[i])
                c[i] = 1.0 * QGj52cWDq[i];
            else {
                if (68 > b[i])
                    c[i] = 1.5 * QGj52cWDq[i];
                else {
                    if (72 > b[i])
                        c[i] = 2.0 * QGj52cWDq[i];
                    else {
                        if (75 > b[i])
                            c[i] = 2.3 * QGj52cWDq[i];
                        else {
                            if (78 > b[i])
                                c[i] = 2.7 * QGj52cWDq[i];
                            else {
                                if (82 > b[i])
                                    c[i] = 3.0 * QGj52cWDq[i];
                                else {
                                    if (85 > b[i])
                                        c[i] = 3, 3 * QGj52cWDq[i];
                                    else {
                                        if (90 > b[i])
                                            c[i] = 3.7 * QGj52cWDq[i];
                                        else
                                            c[i] = 4.0 * QGj52cWDq[i];
                                    };
                                };
                            };
                        };
                    };
                };
            };
        };
    }
    for (i = 0; n > i; i = i + 1) {
        e = e + QGj52cWDq[i];
    }
    for (i = 0; n > i; i++) {
        d = d + c[i];
    }
    d = d / e;
    return d;
}

int main () {
    float GPA = 0;
    int n, QGj52cWDq [10], b [10];
    int eqCN7HTo;
    scanf ("%d", &n);
    for (eqCN7HTo = 0; n > eqCN7HTo; eqCN7HTo++) {
        scanf ("%d", &QGj52cWDq[eqCN7HTo]);
    }
    {
        eqCN7HTo = 0;
        while (n > eqCN7HTo) {
            scanf ("%d", &b[eqCN7HTo]);
            eqCN7HTo = eqCN7HTo + 1;
        };
    }
    GPA = suan (QGj52cWDq, b, n, GPA);
    printf ("%.2f", GPA);
    return 0;
}

