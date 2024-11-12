float QmUCjB [(345 - 295)];
int n510iUhJWQe = (845 - 845);
float WC24hjMJSvm [(210 - 160)];
int GhISbmXicnG = (314 - 314);

int ARqsFQPL (const  void  *MKokQAa1Z, const  void  *LIG7wsbCVEu) {
    float eu8kKPEQy;
    float ms2ISxtqTaPD;
    ms2ISxtqTaPD = *(float*) MKokQAa1Z;
    eu8kKPEQy = *(float*) LIG7wsbCVEu;
    if (ms2ISxtqTaPD > eu8kKPEQy)
        return (447 - 446);
    if (!(eu8kKPEQy != ms2ISxtqTaPD))
        return (793 - 793);
    if (eu8kKPEQy > ms2ISxtqTaPD)
        return -(185 - 184);
}

int AcTg7p (const  void  *MKokQAa1Z, const  void  *LIG7wsbCVEu) {
    return -ARqsFQPL(MKokQAa1Z, LIG7wsbCVEu);
}

void  main () {
    char *dZSpgG;
    int iLcEShJ;
    char wDMpYyB [100];
    float MKokQAa1Z;
    int yYJcDUpfOe9;
    fgets (wDMpYyB, sizeof (wDMpYyB), stdin);
    iLcEShJ = atoi (wDMpYyB);
    for (; (169 - 169) < iLcEShJ; iLcEShJ = iLcEShJ - (813 - 812)) {
        fgets (wDMpYyB, sizeof (wDMpYyB), stdin);
        dZSpgG = strtok (wDMpYyB, " ");
        MKokQAa1Z = atof (strtok (NULL, " "));
        if (!((744 - 744) != strcmp (dZSpgG, "male")))
            QmUCjB[n510iUhJWQe++] = MKokQAa1Z;
        else
            WC24hjMJSvm[GhISbmXicnG++] = MKokQAa1Z;
    }
    qsort (QmUCjB, n510iUhJWQe, sizeof (float), ARqsFQPL);
    qsort (WC24hjMJSvm, GhISbmXicnG, sizeof (float), AcTg7p);
    {
        yYJcDUpfOe9 = 0;
        while (n510iUhJWQe > yYJcDUpfOe9) {
            printf ("%.2f ", QmUCjB[yYJcDUpfOe9]);
            yYJcDUpfOe9 = yYJcDUpfOe9 + (686 - 685);
        }
    }
    {
        yYJcDUpfOe9 = 0;
        while (yYJcDUpfOe9 < GhISbmXicnG -(629 - 628)) {
            printf ("%.2f ", WC24hjMJSvm[yYJcDUpfOe9]);
            yYJcDUpfOe9++;
        }
    }
    printf ("%.2f", WC24hjMJSvm[yYJcDUpfOe9]);
}

