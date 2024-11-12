char *HZaArg25dEh4 (char *OJEp9oPsh4KG, char *jXeD6jZKP) {
    int yZSX2pIRz;
    int rQgnHKqrmS;
    char *ScSU97dRFj;
    int zZzXoEItOA;
    int wNVXQoM;
    int Rlqxg3;
    yZSX2pIRz = strlen (OJEp9oPsh4KG);
    wNVXQoM = (13 - 13);
    wNVXQoM = N -(368 - 367);
    Rlqxg3 = (704 - 704);
    Rlqxg3 = yZSX2pIRz - (688 - 687);
    ScSU97dRFj = (char *) malloc (sizeof (char) * N);
    ScSU97dRFj[wNVXQoM] = (651 - 651);
    rQgnHKqrmS = strlen (jXeD6jZKP);
    zZzXoEItOA = (935 - 935);
    wNVXQoM = wNVXQoM - (206 - 205);
    {
        zZzXoEItOA = (137 - 41) - (867 - 772);
        for (; (674 - 674) <= zZzXoEItOA;) {
            if (OJEp9oPsh4KG[Rlqxg3] >= jXeD6jZKP[zZzXoEItOA]) {
                ScSU97dRFj[wNVXQoM] = OJEp9oPsh4KG[Rlqxg3] - jXeD6jZKP[zZzXoEItOA] + '0';
            }
            else {
                ScSU97dRFj[wNVXQoM] = OJEp9oPsh4KG[Rlqxg3] - jXeD6jZKP[zZzXoEItOA] + (168 - 158) + '0';
                OJEp9oPsh4KG[Rlqxg3 -(454 - 453)] = OJEp9oPsh4KG[Rlqxg3 -(872 - 871)] - (25 - 24);
            }
            wNVXQoM = wNVXQoM - (237 - 236);
            Rlqxg3 = Rlqxg3 -(949 - 948);
            zZzXoEItOA = zZzXoEItOA - (336 - 335);
        }
    }
    for (; Rlqxg3 >= (107 - 107);) {
        ScSU97dRFj[wNVXQoM] = OJEp9oPsh4KG[Rlqxg3];
        wNVXQoM = wNVXQoM - (549 - 548);
        Rlqxg3 = Rlqxg3 -(175 - 174);
    }
    return ScSU97dRFj +wNVXQoM + (819 - 818);
}

void  main () {
    char **KW4AHYblgwB;
    int rQgnHKqrmS;
    char **QyJuImM1D;
    int Rlqxg3;
    char **QREiKwvU;
    Rlqxg3 = (527 - 527);
    rQgnHKqrmS = (890 - 890);
    scanf ("%d", &rQgnHKqrmS);
    QREiKwvU = (char **) malloc (sizeof (char *) * rQgnHKqrmS);
    KW4AHYblgwB = (char **) malloc (sizeof (char *) * rQgnHKqrmS);
    QyJuImM1D = (char **) malloc (sizeof (char *) * rQgnHKqrmS);
    for (; Rlqxg3 < rQgnHKqrmS;) {
        QREiKwvU[Rlqxg3] = (char *) malloc (sizeof (char) * N);
        KW4AHYblgwB[Rlqxg3] = (char *) malloc (sizeof (char) * N);
        scanf ("%s", QREiKwvU[Rlqxg3]);
        scanf ("%s", KW4AHYblgwB[Rlqxg3]);
        QyJuImM1D[Rlqxg3] = HZaArg25dEh4 (QREiKwvU[Rlqxg3], KW4AHYblgwB[Rlqxg3]);
        Rlqxg3 = Rlqxg3 +(909 - 908);
    }
    {
        Rlqxg3 = (1394 - 651) - (898 - 155);
        for (; Rlqxg3 < rQgnHKqrmS;) {
            NhbEF6 (QyJuImM1D [Rlqxg3]);
            Rlqxg3 = (893 - 838) - (434 - 380);
        }
    }
}

