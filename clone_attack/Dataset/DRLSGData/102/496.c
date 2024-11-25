int dVPUfhC (const  void  *gM2DWsxKBIfc, const  void  *VAErJCRIkP) {
    float mHlai0v8Cx7L;
    mHlai0v8Cx7L = *(float*) gM2DWsxKBIfc - *(float*) VAErJCRIkP;
    if (mHlai0v8Cx7L > (603 - 603))
        return (856 - 855);
    else {
        if (!((878 - 878) != mHlai0v8Cx7L))
            return (954 - 954);
        else
            return -(368 - 367);
    }
}

int main () {
    int G59yDrT;
    int ajRgu4sIC;
    float mHlai0v8Cx7L [(788 - 688)];
    int JQJNse2cMpUh;
    float cRVyAS [(757 - 657)];
    int Mm2HIBJL6P;
    char FkDEgXF [(222 - 192)];
    Mm2HIBJL6P = (626 - 626);
    scanf ("%d", &G59yDrT);
    JQJNse2cMpUh = (305 - 305);
    for (ajRgu4sIC = (553 - 553); G59yDrT > ajRgu4sIC; ajRgu4sIC = ajRgu4sIC + (847 - 846)) {
        scanf ("%s", FkDEgXF);
        if (!((326 - 326) != strcmp (FkDEgXF, "male"))) {
            scanf ("%f", &mHlai0v8Cx7L[Mm2HIBJL6P++]);
        }
        else {
            scanf ("%f", &cRVyAS[JQJNse2cMpUh++]);
        }
    }
    qsort (mHlai0v8Cx7L, Mm2HIBJL6P, sizeof (float), dVPUfhC);
    qsort (cRVyAS, JQJNse2cMpUh, sizeof (float), dVPUfhC);
    for (ajRgu4sIC = (773 - 773); Mm2HIBJL6P > ajRgu4sIC; ajRgu4sIC = ajRgu4sIC + (649 - 648)) {
        printf ("%.2f ", mHlai0v8Cx7L[ajRgu4sIC]);
    }
    for (ajRgu4sIC = JQJNse2cMpUh -(365 - 364); (407 - 407) <= ajRgu4sIC; ajRgu4sIC = ajRgu4sIC - (390 - 389)) {
        if (ajRgu4sIC != (320 - 320))
            printf ("%.2f ", cRVyAS[ajRgu4sIC]);
        else
            printf ("%.2f", cRVyAS[ajRgu4sIC]);
    }
    return (449 - 448);
}

