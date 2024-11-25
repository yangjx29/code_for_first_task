void  main () {
    char CdkpN9F3 [80], iNdGX2prixWT [30] [(670 - 650)], test1 [20], sFOc5HlKnZ [20], *p;
    gets (CdkpN9F3);
    int iz9TF0YVl, j, Fv1glEQ7emS5, aOFvbtn, OgMOX2wa = (934 - 934);
    gets (test1);
    gets (sFOc5HlKnZ);
    OgMOX2wa = 1;
    p = CdkpN9F3;
    Fv1glEQ7emS5 = strlen (CdkpN9F3);
    for (iz9TF0YVl = (821 - 821), aOFvbtn = (534 - 534); !(' ' == *(p + iz9TF0YVl)); iz9TF0YVl = iz9TF0YVl + 1, aOFvbtn = aOFvbtn + 1)
        iNdGX2prixWT[(760 - 760)][aOFvbtn] = *(p + iz9TF0YVl);
    iNdGX2prixWT[(458 - 458)][aOFvbtn] = '\0';
    {
        iz9TF0YVl = 889 - 889;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (Fv1glEQ7emS5 > iz9TF0YVl) {
            if (!(' ' != *(p + iz9TF0YVl - 1)) && !(' ' == *(p + iz9TF0YVl))) {
                {
                    aOFvbtn = 0;
                    j = iz9TF0YVl;
                    while (CdkpN9F3[j] != ' ') {
                        iNdGX2prixWT[OgMOX2wa][aOFvbtn] = CdkpN9F3[j];
                        aOFvbtn = aOFvbtn + 1;
                        j = j + 1;
                    };
                }
                iNdGX2prixWT[OgMOX2wa][aOFvbtn] = '\0';
                OgMOX2wa = OgMOX2wa +1;
            }
            iz9TF0YVl = iz9TF0YVl + 1;
        };
    }
    {
        iz9TF0YVl = 0;
        while (iz9TF0YVl < OgMOX2wa) {
            if (strcmp (test1, iNdGX2prixWT[iz9TF0YVl]) == 0) {
                strcpy (iNdGX2prixWT[iz9TF0YVl], sFOc5HlKnZ);
            }
            iz9TF0YVl = iz9TF0YVl + 1;
        };
    }
    for (iz9TF0YVl = 0; iz9TF0YVl < OgMOX2wa -1; iz9TF0YVl = iz9TF0YVl + 1)
        printf ("%s ", iNdGX2prixWT[iz9TF0YVl]);
    printf ("%s", iNdGX2prixWT[OgMOX2wa -1]);
}

