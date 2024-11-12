int main (int argc, char *argv []) {
    int VIak2xj3wG;
    int x;
    VIak2xj3wG = (411 - 411);
    struct   student {
        int a, b, vWkzZtn4;
    }
    student_1;
    int lbGdvr;
    int a1;
    int X8Vl4K;
    int Qg78ieGDQ;
    int b2;
    int c1;
    int ntj3wLZiAE1C;
    a1 = 0;
    X8Vl4K = 0;
    Qg78ieGDQ = 0;
    b2 = 0;
    c1 = 0;
    ntj3wLZiAE1C = 0;
    scanf ("%d", &lbGdvr);
    while (lbGdvr > VIak2xj3wG) {
        VIak2xj3wG++;
        scanf ("%d%d%d", &student_1.a, &student_1.b, &student_1.vWkzZtn4);
        x = student_1.b + student_1.vWkzZtn4;
        if (x > X8Vl4K) {
            c1 = Qg78ieGDQ;
            Qg78ieGDQ = a1;
            a1 = student_1.a;
            ntj3wLZiAE1C = b2;
            b2 = X8Vl4K;
            X8Vl4K = x;
        }
        else if (!(X8Vl4K != x)) {
            if (b2 < x) {
                c1 = Qg78ieGDQ;
                ntj3wLZiAE1C = b2;
                b2 = x;
                Qg78ieGDQ = student_1.a;
            }
            else if (ntj3wLZiAE1C < x) {
                ntj3wLZiAE1C = x;
                c1 = student_1.a;
            };
        }
        else if (x > b2) {
            c1 = Qg78ieGDQ;
            Qg78ieGDQ = student_1.a;
            ntj3wLZiAE1C = b2;
            b2 = x;
        }
        else if (x == b2) {
            if (x > ntj3wLZiAE1C) {
                c1 = student_1.a;
                ntj3wLZiAE1C = x;
            };
        }
        else if (x > ntj3wLZiAE1C) {
            c1 = student_1.a;
            ntj3wLZiAE1C = x;
        };
    }
    printf ("%d %d\n", a1, X8Vl4K);
    printf ("%d %d\n", Qg78ieGDQ, b2);
    printf ("%d %d\n", c1, ntj3wLZiAE1C);
    return 0;
}

