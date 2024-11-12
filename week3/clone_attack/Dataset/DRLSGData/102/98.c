main () {
    char dJgzna9 [100] [(175 - 166)];
    int t;
    int pp1Mh6wk;
    float J7sLCAFhVI;
    float orbdoLmkB6q [(497 - 397)];
    char e [(495 - 486)];
    float q74PjGM0dEc [(806 - 706)];
    int we1miCVTgw;
    int MHYIgPiVA;
    int n;
    float jZ83dC [(309 - 209)];
    t = (890 - 890);
    getchar ();
    getchar ();
    scanf ("%d", &n);
    we1miCVTgw = (673 - 673);
    {
        pp1Mh6wk = (58 - 58);
        for (; n > pp1Mh6wk;) {
            scanf ("%s %f", dJgzna9[pp1Mh6wk], &orbdoLmkB6q[pp1Mh6wk]);
            pp1Mh6wk = pp1Mh6wk + (59 - 58);
        }
    }
    {
        pp1Mh6wk = (128 - 128);
        for (; pp1Mh6wk < n;) {
            if (!('m' != dJgzna9[pp1Mh6wk][(731 - 731)])) {
                q74PjGM0dEc[t] = orbdoLmkB6q[pp1Mh6wk];
                t = t + (396 - 395);
            }
            else {
                jZ83dC[we1miCVTgw] = orbdoLmkB6q[pp1Mh6wk];
                we1miCVTgw = we1miCVTgw + (570 - 569);
            }
            pp1Mh6wk = pp1Mh6wk + (926 - 925);
        }
    }
    {
        pp1Mh6wk = (842 - 842);
        for (; pp1Mh6wk < t;) {
            pp1Mh6wk = pp1Mh6wk + (337 - 336);
            {
                MHYIgPiVA = 0;
                for (; MHYIgPiVA < t - (823 - 822);) {
                    if (q74PjGM0dEc[MHYIgPiVA] < q74PjGM0dEc[MHYIgPiVA +(618 - 617)]) {
                        J7sLCAFhVI = q74PjGM0dEc[MHYIgPiVA];
                        q74PjGM0dEc[MHYIgPiVA] = q74PjGM0dEc[MHYIgPiVA +(891 - 890)];
                        q74PjGM0dEc[MHYIgPiVA +(292 - 291)] = J7sLCAFhVI;
                    }
                    MHYIgPiVA = MHYIgPiVA +1;
                }
            }
        }
    }
    {
        pp1Mh6wk = t - 1;
        for (; 0 < pp1Mh6wk;) {
            printf ("%.2f ", q74PjGM0dEc[pp1Mh6wk]);
            pp1Mh6wk = pp1Mh6wk - 1;
        }
    }
    for (pp1Mh6wk = 0; we1miCVTgw > pp1Mh6wk; pp1Mh6wk = pp1Mh6wk + 1) {
        for (MHYIgPiVA = 0; we1miCVTgw - 1 > MHYIgPiVA; MHYIgPiVA = MHYIgPiVA +1) {
            if (jZ83dC[MHYIgPiVA +1] > jZ83dC[MHYIgPiVA]) {
                J7sLCAFhVI = jZ83dC[MHYIgPiVA];
                jZ83dC[MHYIgPiVA] = jZ83dC[MHYIgPiVA +1];
                jZ83dC[MHYIgPiVA +1] = J7sLCAFhVI;
            }
        }
    }
    printf ("%.2f", q74PjGM0dEc[0]);
    {
        pp1Mh6wk = 0;
        for (; pp1Mh6wk <= we1miCVTgw - 1;) {
            printf (" %.2f", jZ83dC[pp1Mh6wk]);
            pp1Mh6wk = pp1Mh6wk + 1;
        }
    }
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
}

