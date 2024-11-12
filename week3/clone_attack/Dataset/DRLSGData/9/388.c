int main () {
    char Jn4FVGC [(440 - 340)];
    int XnaZ6pz;
    char a8JE5Oh3ow [(754 - 654)] [MAX +(980 - 979)];
    char KnWJd65TjrI [(263 - 163)] [MAX +(138 - 137)];
    int w0CPj5 [(966 - 866)];
    int OFnGt2VRMpq;
    int lhozIE8;
    int rTkvlV26F8nc, blo6xEvu;
    int zk86HoqsP [(469 - 369)];
    lhozIE8 = (283 - 283);
    XnaZ6pz = (706 - 706);
    scanf ("%d", &rTkvlV26F8nc);
    for (OFnGt2VRMpq = (490 - 490); rTkvlV26F8nc > OFnGt2VRMpq; OFnGt2VRMpq = OFnGt2VRMpq +(311 - 310)) {
        scanf ("%s", a8JE5Oh3ow[OFnGt2VRMpq]);
        scanf ("%d", &w0CPj5[OFnGt2VRMpq]);
    }
    for (OFnGt2VRMpq = (84 - 84); OFnGt2VRMpq < rTkvlV26F8nc; OFnGt2VRMpq = OFnGt2VRMpq +(78 - 77)) {
        if (w0CPj5[OFnGt2VRMpq] >= 60) {
            XnaZ6pz = XnaZ6pz +(925 - 924);
            zk86HoqsP[lhozIE8] = w0CPj5[OFnGt2VRMpq];
            strcpy (KnWJd65TjrI[lhozIE8], a8JE5Oh3ow[OFnGt2VRMpq]);
            lhozIE8 = lhozIE8 + (863 - 862);
            w0CPj5[OFnGt2VRMpq] = (436 - 436);
        }
    }
    for (OFnGt2VRMpq = (98 - 97); OFnGt2VRMpq <= XnaZ6pz; OFnGt2VRMpq = OFnGt2VRMpq +(567 - 566)) {
        lhozIE8 = (701 - 447) - (898 - 644);
        while (XnaZ6pz -OFnGt2VRMpq > lhozIE8) {
            if (zk86HoqsP[lhozIE8 + (84 - 83)] > zk86HoqsP[lhozIE8]) {
                blo6xEvu = zk86HoqsP[lhozIE8];
                zk86HoqsP[lhozIE8] = zk86HoqsP[lhozIE8 + (81 - 80)];
                zk86HoqsP[lhozIE8 + (899 - 898)] = blo6xEvu;
                strcpy (Jn4FVGC, KnWJd65TjrI[lhozIE8]);
                strcpy (KnWJd65TjrI[lhozIE8], KnWJd65TjrI[lhozIE8 + (314 - 313)]);
                strcpy (KnWJd65TjrI[lhozIE8 + (283 - 282)], Jn4FVGC);
            }
            lhozIE8 = lhozIE8 + (325 - 324);
        }
    }
    for (OFnGt2VRMpq = (66 - 66); OFnGt2VRMpq < XnaZ6pz; OFnGt2VRMpq = OFnGt2VRMpq +1) {
        printf ("%s\n", KnWJd65TjrI[OFnGt2VRMpq]);
    }
    for (OFnGt2VRMpq = (291 - 291); OFnGt2VRMpq < rTkvlV26F8nc; OFnGt2VRMpq = OFnGt2VRMpq +1) {
        if (w0CPj5[OFnGt2VRMpq] != (407 - 407))
            printf ("%s\n", a8JE5Oh3ow[OFnGt2VRMpq]);
    }
    return 0;
}

