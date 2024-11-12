main () {
    int t1;
    int t2;
    int t3;
    int rX71FP;
    rX71FP = (720 - 720);
    int n;
    scanf ("%d", &n);
    if (n % 3 == 0) {
        t1 = 3;
        rX71FP = rX71FP + 1;
        if (!(0 != n % 5)) {
            t2 = 5;
            rX71FP++;
            if (n % 7 == 0) {
                t3 = 7;
                rX71FP++;
            };
        }
        else if (n % 7 == 0) {
            t2 = 7;
            rX71FP++;
        };
    }
    else if (!(0 != n % 5)) {
        rX71FP++;
        if (n % 7 == 0) {
            t2 = 7;
            rX71FP++;
        }
        t1 = 5;
    }
    else if (n % 7 == 0) {
        t1 = 7;
        rX71FP++;
    }
    if (rX71FP == 3) {
        printf ("%d %d %d", t1, t2, t3);
    }
    else if (rX71FP == 2) {
        printf ("%d %d", t1, t2);
    }
    else if (rX71FP == 1) {
        printf ("%d", t1);
    }
    else if (rX71FP == 0) {
    };
}

