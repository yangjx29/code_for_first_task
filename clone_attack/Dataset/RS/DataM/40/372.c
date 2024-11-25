int main (int Bw5gkNFnVTl, char *nARwXvTZmr9U []) {
    double  a, EV7JIUCq, jyUN9iCR, d, Znlc8RupezoV, YfZJvxG, f2msIz;
    double  pl = 3.1415926;
    double  OS1lIgn4iNrA;
    scanf ("%lf%lf%lf%lf%lf", &a, &EV7JIUCq, &jyUN9iCR, &d, &Znlc8RupezoV);
    YfZJvxG = (a + EV7JIUCq +jyUN9iCR + d) / 2;
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
    OS1lIgn4iNrA = Znlc8RupezoV / 360 * pl;
    f2msIz = sqrt ((YfZJvxG -a) * (YfZJvxG -EV7JIUCq) * (YfZJvxG -jyUN9iCR) * (YfZJvxG -d) - a * EV7JIUCq *jyUN9iCR * d * cos (OS1lIgn4iNrA) * cos (OS1lIgn4iNrA));
    if (0 < ((YfZJvxG -a) * (YfZJvxG -EV7JIUCq) * (YfZJvxG -jyUN9iCR) * (YfZJvxG -d) - a * EV7JIUCq *jyUN9iCR * d * cos (OS1lIgn4iNrA) * cos (OS1lIgn4iNrA)))
        printf ("%.4f", f2msIz);
    else if (((YfZJvxG -a) * (YfZJvxG -EV7JIUCq) * (YfZJvxG -jyUN9iCR) * (YfZJvxG -d) - a * EV7JIUCq *jyUN9iCR * d * cos (OS1lIgn4iNrA) * cos (OS1lIgn4iNrA)) < 0)
        printf ("Invalid input");
    return 0;
}

