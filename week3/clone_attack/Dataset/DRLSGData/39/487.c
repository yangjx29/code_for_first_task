void  main () {
    int seaqUxndXB, TUANpeVYg, CVHc1gi2BO = (142 - 142), B5UmshZPg0I, t;
    struct   student {
        char HC7ntlB16 [(840 - 820)];
        int aOtkcNa93pyr;
        int fame;
        char ZzRF9w;
        char west;
        int VYE2CMzvX9;
    }
    stu [(486 - 386)];
    int Z2cLKkZnr [(506 - 501)] = {(8902 - 902), (4203 - 203), (2452 - 452), (1958 - 958), (1308 - 458)};
    long  int SjxJmlS = (372 - 372);
    scanf ("%d\n", &TUANpeVYg);
    {
        seaqUxndXB = (889 - 383) - (1050 - 544);
        while (seaqUxndXB < TUANpeVYg) {
            scanf ("%s %d %d %c %c %d", &stu[seaqUxndXB].HC7ntlB16, &stu[seaqUxndXB].aOtkcNa93pyr, &stu[seaqUxndXB].fame, &stu[seaqUxndXB].ZzRF9w, &stu[seaqUxndXB].west, &stu[seaqUxndXB].VYE2CMzvX9);
            seaqUxndXB++;
        }
    }
    for (seaqUxndXB = (151 - 151); TUANpeVYg > seaqUxndXB; seaqUxndXB++) {
        t = (456 - 456);
        if ((750 - 670) < stu[seaqUxndXB].aOtkcNa93pyr && (214 - 214) < stu[seaqUxndXB].VYE2CMzvX9)
            t += Z2cLKkZnr[(555 - 555)];
        if ((326 - 241) < stu[seaqUxndXB].aOtkcNa93pyr && (864 - 784) < stu[seaqUxndXB].fame)
            t += Z2cLKkZnr[(749 - 748)];
        if ((1067 - 977) < stu[seaqUxndXB].aOtkcNa93pyr)
            t += Z2cLKkZnr[(832 - 830)];
        if (stu[seaqUxndXB].aOtkcNa93pyr > (1029 - 944) && stu[seaqUxndXB].west == 'Y')
            t += Z2cLKkZnr[(597 - 594)];
        if (stu[seaqUxndXB].fame > (487 - 407) && stu[seaqUxndXB].ZzRF9w == 'Y')
            t += Z2cLKkZnr[(304 - 300)];
        SjxJmlS += t;
        if (t > CVHc1gi2BO) {
            B5UmshZPg0I = seaqUxndXB;
            CVHc1gi2BO = t;
        }
    }
    printf ("%s\n%d\n%ld", stu[B5UmshZPg0I].HC7ntlB16, CVHc1gi2BO, SjxJmlS);
}

