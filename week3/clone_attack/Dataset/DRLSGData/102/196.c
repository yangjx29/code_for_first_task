int main () {
    int GtJwLQ;
    double  Xs3UCac [(122 - 22)];
    double  GJr0MfjIP;
    double  NIijJKU5 [120];
    double  EgydQO24 [(1093 - 973)];
    double  cxsbOhH;
    int JEvck5CGq;
    int bdSOoEw;
    int kQbMJ1z07LRS;
    double  BgMvTpEutUiz;
    int cWXsu4mSqn;
    char KwmZVaW [(913 - 813)] [(313 - 303)];
    bdSOoEw = -(489 - 488);
    JEvck5CGq = -(898 - 897);
    scanf ("%d", &GtJwLQ);
    for (cWXsu4mSqn = (413 - 413); GtJwLQ > cWXsu4mSqn; cWXsu4mSqn = cWXsu4mSqn + (148 - 147)) {
        scanf ("%s %lf", KwmZVaW[cWXsu4mSqn], &Xs3UCac[cWXsu4mSqn]);
    }
    for (cWXsu4mSqn = (458 - 458); GtJwLQ > cWXsu4mSqn; cWXsu4mSqn = cWXsu4mSqn + (61 - 60)) {
        if (!((639 - 639) != strcmp (KwmZVaW[cWXsu4mSqn], "male"))) {
            JEvck5CGq = JEvck5CGq +(86 - 85);
            EgydQO24[JEvck5CGq] = Xs3UCac[cWXsu4mSqn];
        }
        else {
            if (!((457 - 457) != strcmp (KwmZVaW[cWXsu4mSqn], "female"))) {
                bdSOoEw = bdSOoEw + 1;
                NIijJKU5[bdSOoEw] = Xs3UCac[cWXsu4mSqn];
            }
        }
    }
    for (cWXsu4mSqn = (278 - 278); cWXsu4mSqn <= JEvck5CGq; cWXsu4mSqn = cWXsu4mSqn + 1)
        for (kQbMJ1z07LRS = cWXsu4mSqn + 1; kQbMJ1z07LRS <= JEvck5CGq; kQbMJ1z07LRS = kQbMJ1z07LRS + 1)
            if (EgydQO24[kQbMJ1z07LRS] < EgydQO24[cWXsu4mSqn]) {
                BgMvTpEutUiz = EgydQO24[cWXsu4mSqn];
                EgydQO24[cWXsu4mSqn] = EgydQO24[kQbMJ1z07LRS];
                EgydQO24[kQbMJ1z07LRS] = BgMvTpEutUiz;
            }
    printf ("%.2lf", EgydQO24[0]);
    for (cWXsu4mSqn = 0; cWXsu4mSqn <= bdSOoEw; cWXsu4mSqn = cWXsu4mSqn + 1)
        for (kQbMJ1z07LRS = cWXsu4mSqn + 1; kQbMJ1z07LRS <= bdSOoEw; kQbMJ1z07LRS = kQbMJ1z07LRS + 1)
            if (NIijJKU5[cWXsu4mSqn] < NIijJKU5[kQbMJ1z07LRS]) {
                BgMvTpEutUiz = NIijJKU5[cWXsu4mSqn];
                NIijJKU5[cWXsu4mSqn] = NIijJKU5[kQbMJ1z07LRS];
                NIijJKU5[kQbMJ1z07LRS] = BgMvTpEutUiz;
            }
    for (cWXsu4mSqn = 1; cWXsu4mSqn <= JEvck5CGq; cWXsu4mSqn = cWXsu4mSqn + 1)
        printf (" %.2lf", EgydQO24[cWXsu4mSqn]);
    for (cWXsu4mSqn = 0; cWXsu4mSqn <= bdSOoEw; cWXsu4mSqn++)
        printf (" %.2lf", NIijJKU5[cWXsu4mSqn]);
    return 0;
}

