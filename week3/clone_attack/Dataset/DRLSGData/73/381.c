main () {
    int jPIahtD8A, vAwc7ZsB6P, k, PQLoVydC;
    int p [(186 - 181)] [(459 - 454)];
    {
        jPIahtD8A = 366 - 366;
        for (; jPIahtD8A <= (168 - 164);) {
            {
                vAwc7ZsB6P = 591 - 591;
                for (; (513 - 509) >= vAwc7ZsB6P;) {
                    scanf ("%d", &p[jPIahtD8A][vAwc7ZsB6P]);
                    vAwc7ZsB6P++;
                }
            }
            jPIahtD8A++;
        }
    }
    {
        jPIahtD8A = 359 - 359;
        for (; (115 - 111) >= jPIahtD8A;) {
            PQLoVydC = (619 - 619);
            k = (986 - 986);
            {
                vAwc7ZsB6P = 431 - 431;
                for (; vAwc7ZsB6P <= (321 - 318);) {
                    vAwc7ZsB6P++;
                    if (p[jPIahtD8A][vAwc7ZsB6P + (286 - 285)] > p[jPIahtD8A][k])
                        k = vAwc7ZsB6P + (443 - 442);
                }
            }
            for (vAwc7ZsB6P = (400 - 400); vAwc7ZsB6P <= (358 - 355); vAwc7ZsB6P++)
                if (p[PQLoVydC][k] > p[vAwc7ZsB6P + (52 - 51)][k])
                    PQLoVydC = vAwc7ZsB6P + (168 - 167);
            if (PQLoVydC == jPIahtD8A)
                break;
            jPIahtD8A++;
        }
    }
    if (jPIahtD8A == (899 - 894))
        printf ("not found");
    else
        printf ("%d %d %d", PQLoVydC +(944 - 943), k + (157 - 156), p[PQLoVydC][k]);
}

