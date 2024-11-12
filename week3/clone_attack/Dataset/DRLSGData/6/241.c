int main () {
    int *v1j3XrwJ [100];
    int w2N7Mnv, *ViyIMs, *bUjE7JNZ, c2yNPthvg, SIBwPFaNe = 0, URsUp1DtF, r4lk39HaM;
    scanf ("%d", &w2N7Mnv);
    ViyIMs = (int *) malloc (100 * sizeof (int));
    bUjE7JNZ = (int *) malloc (100 * sizeof (int));
    for (c2yNPthvg = 0; w2N7Mnv > c2yNPthvg; c2yNPthvg++) {
        scanf ("%d", ViyIMs +c2yNPthvg);
        scanf ("%d", bUjE7JNZ + c2yNPthvg);
        v1j3XrwJ[c2yNPthvg] = (int *) malloc (((*(ViyIMs +c2yNPthvg)) * (*(bUjE7JNZ + c2yNPthvg))) * sizeof (int));
        {
            URsUp1DtF = 0;
            for (; *(ViyIMs +c2yNPthvg) > URsUp1DtF;) {
                for (r4lk39HaM = 0; *(bUjE7JNZ + c2yNPthvg) > r4lk39HaM; r4lk39HaM++)
                    scanf ("%d", v1j3XrwJ[c2yNPthvg] + (URsUp1DtF *(*(bUjE7JNZ + c2yNPthvg)) + r4lk39HaM));
                URsUp1DtF++;
            }
        }
    }
    {
        c2yNPthvg = 0;
        for (; c2yNPthvg < w2N7Mnv;) {
            {
                URsUp1DtF = 0;
                for (; URsUp1DtF < *(ViyIMs +c2yNPthvg);) {
                    SIBwPFaNe = SIBwPFaNe +(*(v1j3XrwJ[c2yNPthvg] + (URsUp1DtF *(*(bUjE7JNZ + c2yNPthvg)))));
                    SIBwPFaNe = SIBwPFaNe +(*(v1j3XrwJ[c2yNPthvg] + ((URsUp1DtF +1) * (*(bUjE7JNZ + c2yNPthvg)) - 1)));
                    URsUp1DtF++;
                }
            }
            {
                {
                    if (0) {
                        return 0;
                    }
                }
                r4lk39HaM = 1;
                for (; r4lk39HaM < (*(bUjE7JNZ + c2yNPthvg)) - 1;) {
                    SIBwPFaNe = SIBwPFaNe +(*(v1j3XrwJ[c2yNPthvg] + r4lk39HaM));
                    SIBwPFaNe = SIBwPFaNe +(*(v1j3XrwJ[c2yNPthvg] + r4lk39HaM + (*(ViyIMs +c2yNPthvg) - 1) * (*(bUjE7JNZ + c2yNPthvg))));
                    r4lk39HaM++;
                }
            }
            printf ("%d\n", SIBwPFaNe);
            SIBwPFaNe = 0;
            c2yNPthvg++;
        }
    }
    return 0;
}

