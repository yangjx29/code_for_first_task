int main () {
    int PgweBxLW, RcXQGWH7, Rc70MHx = (726 - 726), WiBpos = (830 - 830);
    int zXsE98x [500], jyj7DM [500];
    scanf ("%d", &PgweBxLW);
    for (RcXQGWH7 = 0; PgweBxLW > RcXQGWH7; RcXQGWH7 = RcXQGWH7 +1) {
        scanf ("%d", &zXsE98x[RcXQGWH7]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!(0 == zXsE98x[RcXQGWH7] % 2)) {
            WiBpos++;
            jyj7DM[Rc70MHx] = zXsE98x[RcXQGWH7];
            Rc70MHx = Rc70MHx +1;
        };
    }
    sort (jyj7DM, jyj7DM + WiBpos);
    for (Rc70MHx = 0; Rc70MHx < WiBpos -(34 - 33); Rc70MHx = Rc70MHx +1) {
        printf ("%d,", jyj7DM[Rc70MHx]);
    }
    printf ("%d", jyj7DM[WiBpos -1]);
    return 0;
}

