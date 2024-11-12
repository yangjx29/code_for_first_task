int main () {
    struct   VXmbHMYUEP {
        char lAeto8 [20];
        int OhIX3JEHw;
        int eqhwmyH3;
        char kMJvOTr2 [(356 - 354)];
        char SZSVDJ95ldz [(244 - 242)];
        int gixyIajE;
        int JIu5s17Ed;
    }
    VXmbHMYUEP [(539 - 537)] = {{'\0', (786 - 786), (354 - 354), '\0', '\0', (796 - 796), (544 - 544)}, {'\0', (398 - 398), (870 - 870), '\0', '\0', (165 - 165), 0}};
    int JJuorkfv, TRuzMjbsA2, Sta3IeV;
    struct   VXmbHMYUEP temp;
    Sta3IeV = 0;
    scanf ("%d", &TRuzMjbsA2);
    {
        JJuorkfv = 0;
        for (; TRuzMjbsA2 > JJuorkfv;) {
            JJuorkfv = JJuorkfv +1;
            scanf ("%s%d%d%s%s%d", VXmbHMYUEP[(444 - 443)].lAeto8, &VXmbHMYUEP[(65 - 64)].OhIX3JEHw, &VXmbHMYUEP[(460 - 459)].eqhwmyH3, VXmbHMYUEP[(917 - 916)].kMJvOTr2, VXmbHMYUEP[(318 - 317)].SZSVDJ95ldz, &VXmbHMYUEP[(838 - 837)].gixyIajE);
            if ((174 - 94) < VXmbHMYUEP[(931 - 930)].eqhwmyH3 && !(0 != strcmp (VXmbHMYUEP[(731 - 730)].kMJvOTr2, "Y"))) {
                VXmbHMYUEP[(420 - 419)].JIu5s17Ed = VXmbHMYUEP[1].JIu5s17Ed + 850;
            }
            if (VXmbHMYUEP[1].OhIX3JEHw > (627 - 547) && VXmbHMYUEP[1].gixyIajE >= 1) {
                VXmbHMYUEP[1].JIu5s17Ed = VXmbHMYUEP[1].JIu5s17Ed + (8531 - 531);
            }
            if ((413 - 328) < VXmbHMYUEP[1].OhIX3JEHw && VXmbHMYUEP[1].eqhwmyH3 > 80) {
                VXmbHMYUEP[1].JIu5s17Ed = VXmbHMYUEP[1].JIu5s17Ed + (4527 - 527);
            }
            if ((1001 - 911) < VXmbHMYUEP[1].OhIX3JEHw) {
                VXmbHMYUEP[1].JIu5s17Ed = VXmbHMYUEP[1].JIu5s17Ed + (2840 - 840);
            }
            if (VXmbHMYUEP[1].OhIX3JEHw > 85 && strcmp (VXmbHMYUEP[1].SZSVDJ95ldz, "Y") == 0) {
                VXmbHMYUEP[1].JIu5s17Ed = VXmbHMYUEP[1].JIu5s17Ed + 1000;
            }
            Sta3IeV = Sta3IeV +VXmbHMYUEP[1].JIu5s17Ed;
            if (VXmbHMYUEP[1].JIu5s17Ed > VXmbHMYUEP[0].JIu5s17Ed) {
                temp = VXmbHMYUEP[1];
                VXmbHMYUEP[1] = VXmbHMYUEP[0];
                VXmbHMYUEP[0] = temp;
            }
            VXmbHMYUEP[1].JIu5s17Ed = 0;
        }
    }
    printf ("%s\n%d\n%d\n", VXmbHMYUEP[0].lAeto8, VXmbHMYUEP[0].JIu5s17Ed, Sta3IeV);
}

