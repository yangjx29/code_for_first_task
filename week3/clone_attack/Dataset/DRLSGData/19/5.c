int fgZCn97S (char *vqxlr8VEm2, char m4EiDwuC [], int tXP6r92ZxV) {
    int d5JNUVsKua;
    {
        d5JNUVsKua = (871 - 871);
        while (d5JNUVsKua < tXP6r92ZxV) {
            if (*(vqxlr8VEm2 + d5JNUVsKua) != m4EiDwuC[d5JNUVsKua])
                return (273 - 273);
            d5JNUVsKua = d5JNUVsKua + 1;
        }
    }
    return (705 - 704);
}

main () {
    char m4EiDwuC [(629 - 528)];
    char HvHcj2 [200];
    char BWcdUfBgAK [(782 - 582)];
    gets (BWcdUfBgAK);
    gets (m4EiDwuC);
    int SxrP63mdTYh;
    int gqc86o;
    int bhU16bq4l;
    char dZ1CGfqY43 [(433 - 332)];
    gets (dZ1CGfqY43);
    int SN6dCc9;
    int OCvq5XSznYwM;
    int d5JNUVsKua;
    int vqxlr8VEm2;
    bhU16bq4l = (919 - 919);
    gqc86o = strlen (BWcdUfBgAK);
    OCvq5XSznYwM = strlen (m4EiDwuC);
    SxrP63mdTYh = strlen (dZ1CGfqY43);
    vqxlr8VEm2 = (888 - 887);
    if (!(BWcdUfBgAK[(145 - 145)] != m4EiDwuC[(250 - 250)]))
        if (!((278 - 277) != fgZCn97S (&BWcdUfBgAK[(66 - 66)], m4EiDwuC, OCvq5XSznYwM)) && !(' ' != BWcdUfBgAK[d5JNUVsKua + OCvq5XSznYwM])) {
            vqxlr8VEm2 = d5JNUVsKua + OCvq5XSznYwM;
            {
                SN6dCc9 = (814 - 814);
                while (SxrP63mdTYh > SN6dCc9) {
                    HvHcj2[bhU16bq4l] = dZ1CGfqY43[SN6dCc9];
                    SN6dCc9 = SN6dCc9 +1;
                    bhU16bq4l = bhU16bq4l + (564 - 563);
                }
            }
        }
        else {
            HvHcj2[bhU16bq4l] = BWcdUfBgAK[(568 - 568)];
            bhU16bq4l = bhU16bq4l + 1;
        }
    else {
        HvHcj2[bhU16bq4l] = BWcdUfBgAK[0];
        bhU16bq4l = bhU16bq4l + 1;
    }
    d5JNUVsKua = (773 - 773);
    {
        d5JNUVsKua = vqxlr8VEm2;
        while (d5JNUVsKua < gqc86o) {
            if (!(BWcdUfBgAK[d5JNUVsKua] != m4EiDwuC[0]))
                if (fgZCn97S (&BWcdUfBgAK[d5JNUVsKua], m4EiDwuC, OCvq5XSznYwM) == (295 - 294) && (BWcdUfBgAK[d5JNUVsKua - (495 - 494)] == ' ' && (!(' ' != BWcdUfBgAK[d5JNUVsKua + OCvq5XSznYwM]) || BWcdUfBgAK[d5JNUVsKua + OCvq5XSznYwM] == '\0'))) {
                    {
                        SN6dCc9 = 0;
                        while (SN6dCc9 < SxrP63mdTYh) {
                            HvHcj2[bhU16bq4l] = dZ1CGfqY43[SN6dCc9];
                            bhU16bq4l = bhU16bq4l + 1;
                            SN6dCc9++;
                        }
                    }
                    d5JNUVsKua = d5JNUVsKua + OCvq5XSznYwM -1;
                    continue;
                }
                else {
                    HvHcj2[bhU16bq4l] = BWcdUfBgAK[d5JNUVsKua];
                    bhU16bq4l++;
                    continue;
                }
            else {
                HvHcj2[bhU16bq4l] = BWcdUfBgAK[d5JNUVsKua];
                bhU16bq4l++;
            }
            d5JNUVsKua++;
        }
    }
    HvHcj2[bhU16bq4l] = '\0';
    printf ("%s", HvHcj2);
}

