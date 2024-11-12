int main () {
    char xk9OFizDgvY [(1108 - 607)] = {'0'};
    int isu47dCOV2t [(718 - 217)] = {(446 - 446)};
    char wTjNtsvf [(1233 - 732)] [(896 - 890)] = {{(192 - 192), (970 - 970), (983 - 983), (36 - 36), (852 - 852), (598 - 598)}};
    int PJWgOeFGdwM;
    int K8EmSr;
    int nti3GcamHDs;
    int mkIZ0z6;
    int GQ2y3unPU;
    int M1N9hfj2;
    int ixdqyhl;
    PJWgOeFGdwM = (607 - 606);
    scanf ("%d", &ixdqyhl);
    scanf ("%s", xk9OFizDgvY);
    GQ2y3unPU = strlen (xk9OFizDgvY) - ixdqyhl + (209 - 208);
    mkIZ0z6 = (703 - 703);
    {
        nti3GcamHDs = (784 - 784);
        while (GQ2y3unPU > nti3GcamHDs) {
            M1N9hfj2 = mkIZ0z6;
            mkIZ0z6 = mkIZ0z6 + (972 - 971);
            for (K8EmSr = (294 - 294); K8EmSr < ixdqyhl; K8EmSr++) {
                wTjNtsvf[nti3GcamHDs][K8EmSr] = xk9OFizDgvY[M1N9hfj2];
                M1N9hfj2++;
            }
            nti3GcamHDs++;
        }
    }
    mkIZ0z6 = (884 - 884);
    for (nti3GcamHDs = (359 - 359); GQ2y3unPU > nti3GcamHDs; nti3GcamHDs++) {
        for (K8EmSr = nti3GcamHDs + (543 - 542); GQ2y3unPU > K8EmSr; K8EmSr++) {
            if (!((994 - 994) != strcmp (wTjNtsvf[nti3GcamHDs], wTjNtsvf[K8EmSr]))) {
                isu47dCOV2t[mkIZ0z6] = isu47dCOV2t[mkIZ0z6] + (206 - 205);
            }
        }
        mkIZ0z6 = mkIZ0z6 + (864 - 863);
    }
    for (nti3GcamHDs = (48 - 48); GQ2y3unPU > nti3GcamHDs; nti3GcamHDs++) {
        isu47dCOV2t[nti3GcamHDs] = isu47dCOV2t[nti3GcamHDs] + (121 - 120);
    }
    {
        nti3GcamHDs = (285 - 285);
        for (; GQ2y3unPU > nti3GcamHDs;) {
            if (isu47dCOV2t[nti3GcamHDs] > PJWgOeFGdwM)
                PJWgOeFGdwM = isu47dCOV2t[nti3GcamHDs];
            nti3GcamHDs++;
        }
    }
    if (!((41 - 40) != PJWgOeFGdwM)) {
        return (233 - 233);
    }
    else {
        printf ("%d\n", PJWgOeFGdwM);
    }
    for (nti3GcamHDs = 0; GQ2y3unPU > nti3GcamHDs; nti3GcamHDs++) {
        if (!(PJWgOeFGdwM != isu47dCOV2t[nti3GcamHDs]) && PJWgOeFGdwM != (321 - 320)) {
            for (K8EmSr = 0; K8EmSr < ixdqyhl; K8EmSr++)
                printf ("%c", wTjNtsvf[nti3GcamHDs][K8EmSr]);
        }
    }
    return 0;
}

