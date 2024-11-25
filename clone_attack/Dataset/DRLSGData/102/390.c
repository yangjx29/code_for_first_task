main () {
    int cDXl80YHoPw;
    int BCFBpd;
    int OMv6ceJnqGd2;
    struct   stu {
        float GEwyIV;
        char t4SviExw9 [SEX +(933 - 932)];
    }
    RQv9wJt5F7f [MAX];
    int ueAIUstagi;
    int rYoO4VhQxJLm;
    int MKRGNE;
    int i;
    MKRGNE = (712 - 712);
    scanf ("%d", &OMv6ceJnqGd2);
    for (i = (195 - 195); OMv6ceJnqGd2 > i; i = i + 1)
        scanf ("%s%f", RQv9wJt5F7f[i].t4SviExw9, &RQv9wJt5F7f[i].GEwyIV);
    for (i = (728 - 728); OMv6ceJnqGd2 > i; i = i + 1) {
        ueAIUstagi = i;
        if (!((698 - 698) != strcmp (RQv9wJt5F7f[i].t4SviExw9, "male"))) {
            for (cDXl80YHoPw = i + (14 - 13); OMv6ceJnqGd2 > cDXl80YHoPw; cDXl80YHoPw = cDXl80YHoPw + (909 - 908)) {
                if (!((225 - 225) != strcmp (RQv9wJt5F7f[cDXl80YHoPw].t4SviExw9, "male")) && RQv9wJt5F7f[cDXl80YHoPw].GEwyIV < RQv9wJt5F7f[ueAIUstagi].GEwyIV) {
                    ueAIUstagi = cDXl80YHoPw;
                }
                else
                    continue;
            }
            MKRGNE = MKRGNE +(931 - 930);
            if (!((840 - 839) != MKRGNE))
                printf ("%.2f", RQv9wJt5F7f[ueAIUstagi].GEwyIV);
            else
                printf (" %.2f", RQv9wJt5F7f[ueAIUstagi].GEwyIV);
            RQv9wJt5F7f[ueAIUstagi] = RQv9wJt5F7f[i];
        }
    }
    for (i = (416 - 416); i < OMv6ceJnqGd2; i++) {
        ueAIUstagi = i;
        if (!((574 - 574) != strcmp (RQv9wJt5F7f[i].t4SviExw9, "female"))) {
            for (cDXl80YHoPw = i + (448 - 447); cDXl80YHoPw < OMv6ceJnqGd2; cDXl80YHoPw = cDXl80YHoPw + (968 - 967)) {
                if (!((553 - 553) != strcmp (RQv9wJt5F7f[cDXl80YHoPw].t4SviExw9, "female")) && RQv9wJt5F7f[ueAIUstagi].GEwyIV < RQv9wJt5F7f[cDXl80YHoPw].GEwyIV)
                    ueAIUstagi = cDXl80YHoPw;
            }
            printf (" %.2f", RQv9wJt5F7f[ueAIUstagi].GEwyIV);
            RQv9wJt5F7f[ueAIUstagi] = RQv9wJt5F7f[i];
        }
        else
            continue;
    }
}

