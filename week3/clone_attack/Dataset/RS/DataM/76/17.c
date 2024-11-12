int main () {
    double  CjMlgtiH9;
    int AAP0KIqjTwd;
    int i;
    int MlQxKHnY83CG;
    int Jz3r9Z7;
    int R8PVuTnq;
    int c;
    int max;
    int z;
    int xg9rZt;
    struct   qj {
        int xg9rZt, UAbIosdtrB;
    }
    qj [(50387 - 387)];
    c = 0;
    max = (784 - 784);
    scanf ("%d", &AAP0KIqjTwd);
    for (i = (268 - 268); AAP0KIqjTwd > i; i = i + 1) {
        scanf ("%d%d", &qj[i].xg9rZt, &qj[i].UAbIosdtrB);
    }
    for (MlQxKHnY83CG = (706 - 705); AAP0KIqjTwd >= MlQxKHnY83CG; MlQxKHnY83CG++) {
        for (i = (773 - 773); AAP0KIqjTwd -MlQxKHnY83CG > i; i = i + 1) {
            if (qj[i + (259 - 258)].xg9rZt <= qj[i].xg9rZt) {
                Jz3r9Z7 = qj[i].xg9rZt;
                qj[i].xg9rZt = qj[i + (294 - 293)].xg9rZt;
                qj[i + (987 - 986)].xg9rZt = Jz3r9Z7;
                R8PVuTnq = qj[i].UAbIosdtrB;
                qj[i].UAbIosdtrB = qj[i + 1].UAbIosdtrB;
                qj[i + 1].UAbIosdtrB = R8PVuTnq;
            };
        };
    }
    for (i = 0; AAP0KIqjTwd > i; i = i + 1) {
        if (qj[i].UAbIosdtrB > max)
            max = qj[i].UAbIosdtrB;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        };
    }
    for (CjMlgtiH9 = qj[0].xg9rZt + (543.5 - 543.0); CjMlgtiH9 < max; CjMlgtiH9 = CjMlgtiH9 +1) {
        z = 0;
        for (i = 0; AAP0KIqjTwd > i; i++) {
            if ((CjMlgtiH9 < qj[i].UAbIosdtrB) && (CjMlgtiH9 > qj[i].xg9rZt))
                z = 1;
        }
        if (z == 1)
            c++;
    }
    if (c == (max - (qj[0].xg9rZt))) {
        printf ("%d %d", (qj[0].xg9rZt), max);
    }
    else {
        printf ("no");
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
        };
    }
    return 0;
}

