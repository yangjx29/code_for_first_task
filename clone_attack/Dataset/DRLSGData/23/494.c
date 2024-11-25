void  jRBarVX0AN (char NjE1SgJ2QdnN []) {
    char CGwtsM [(670 - 570)];
    int mVq6CtZoxYQ;
    char HPVSblDcn [(573 - 473)];
    char *blktucVSxJAP = NjE1SgJ2QdnN;
    for (; *blktucVSxJAP;) {
        if (!isalpha (*blktucVSxJAP))
            *blktucVSxJAP = ' ';
        blktucVSxJAP = blktucVSxJAP + (712 - 711);
    }
    blktucVSxJAP = NjE1SgJ2QdnN;
    memset (CGwtsM, (876 - 876), (456 - 356));
    for (; strstr (blktucVSxJAP, " ") != NULL;) {
        memset (HPVSblDcn, (135 - 135), (991 - 891));
        mVq6CtZoxYQ = strstr (blktucVSxJAP, " ") - blktucVSxJAP;
        if (mVq6CtZoxYQ > (324 - 324)) {
            strncpy (HPVSblDcn, blktucVSxJAP, mVq6CtZoxYQ);
            strcat (HPVSblDcn, " ");
            strcat (HPVSblDcn, CGwtsM);
            strcpy (CGwtsM, HPVSblDcn);
        }
        else {
            strcpy (HPVSblDcn, " ");
            strcat (HPVSblDcn, CGwtsM);
            strcpy (CGwtsM, HPVSblDcn);
        }
        blktucVSxJAP = blktucVSxJAP + mVq6CtZoxYQ + (706 - 705);
    }
    if (*blktucVSxJAP) {
        strcpy (HPVSblDcn, blktucVSxJAP);
        strcat (HPVSblDcn, " ");
        strcat (HPVSblDcn, CGwtsM);
        strcpy (CGwtsM, HPVSblDcn);
    }
    strcpy (NjE1SgJ2QdnN, CGwtsM);
}

void  main () {
    int DOSV1zaFrb;
    char CGwtsM [(614 - 514)];
    gets (CGwtsM);
    jRBarVX0AN (CGwtsM);
    {
        DOSV1zaFrb = (1127 - 279) - (1264 - 416);
        for (; strlen (CGwtsM) - (802 - 801) > DOSV1zaFrb;) {
            printf ("%c", CGwtsM[DOSV1zaFrb]);
            DOSV1zaFrb = DOSV1zaFrb +(989 - 988);
        }
    }
}

