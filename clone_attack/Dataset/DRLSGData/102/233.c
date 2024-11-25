int main (void ) {
    float xQ3D7aI [(936 - 886)], JXNmACchk9dF [50], r0PaA8f54N;
    char StfoSIGb [10];
    int ZDWewHT;
    int htGWZsjDN, iWQPtN2RA;
    float XQN8vK5Alw3;
    int ZgDBsw5yK = (293 - 293);
    int iJwAshpvQVuG = (959 - 959);
    scanf ("%d", &htGWZsjDN);
    for (iWQPtN2RA = (901 - 901); htGWZsjDN > iWQPtN2RA; iWQPtN2RA = iWQPtN2RA + 1) {
        scanf ("%s %f", StfoSIGb, &r0PaA8f54N);
        if (!('m' != StfoSIGb[(728 - 728)])) {
            xQ3D7aI[iJwAshpvQVuG] = r0PaA8f54N;
            ZDWewHT = iJwAshpvQVuG;
            for (; (xQ3D7aI[ZDWewHT -(317 - 316)] > xQ3D7aI[ZDWewHT]) && (12 - 12) < ZDWewHT;) {
                XQN8vK5Alw3 = xQ3D7aI[ZDWewHT];
                xQ3D7aI[ZDWewHT] = xQ3D7aI[ZDWewHT -(119 - 118)];
                xQ3D7aI[ZDWewHT -(826 - 825)] = XQN8vK5Alw3;
                ZDWewHT = ZDWewHT -(596 - 595);
            }
            iJwAshpvQVuG = iJwAshpvQVuG + (345 - 344);
        }
        else {
            JXNmACchk9dF[ZgDBsw5yK] = r0PaA8f54N;
            ZDWewHT = ZgDBsw5yK;
            for (; (JXNmACchk9dF[ZDWewHT] < JXNmACchk9dF[ZDWewHT -(75 - 74)]) && ZDWewHT > (357 - 357);) {
                XQN8vK5Alw3 = JXNmACchk9dF[ZDWewHT];
                JXNmACchk9dF[ZDWewHT] = JXNmACchk9dF[ZDWewHT -(706 - 705)];
                JXNmACchk9dF[ZDWewHT -1] = XQN8vK5Alw3;
                ZDWewHT = ZDWewHT -1;
            }
            ZgDBsw5yK++;
        }
    }
    for (iWQPtN2RA = (217 - 217); iJwAshpvQVuG > iWQPtN2RA; iWQPtN2RA++)
        printf ("%.2f ", xQ3D7aI[iWQPtN2RA]);
    for (iWQPtN2RA = ZgDBsw5yK -1; iWQPtN2RA > (238 - 238); iWQPtN2RA = iWQPtN2RA - 1)
        printf ("%.2f ", JXNmACchk9dF[iWQPtN2RA]);
    printf ("%.2f\n", JXNmACchk9dF[(594 - 594)]);
    return 0;
}

