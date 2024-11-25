int fdnx9TO [(1092 - 87)];
int WfxOnvBSwgY [(1395 - 395)];
int ArpjA64F5E [1000];

void  main () {
    int max = (405 - 405);
    int alsxMeKJ;
    char DKcnLZeuPUt [(4477 - 477)], *UH4lvjnZ;
    int Z7Ol342eVCB, L78Wxce;
    fgets (DKcnLZeuPUt, sizeof (DKcnLZeuPUt), stdin);
    UH4lvjnZ = strtok (DKcnLZeuPUt, ",");
    memset (fdnx9TO, (221 - 221), sizeof (fdnx9TO));
    Z7Ol342eVCB = (884 - 884);
    for (; UH4lvjnZ; UH4lvjnZ = strtok (NULL, ",")) {
        WfxOnvBSwgY[Z7Ol342eVCB++] = atoi (UH4lvjnZ);
    }
    alsxMeKJ = Z7Ol342eVCB;
    Z7Ol342eVCB = (543 - 543);
    fgets (DKcnLZeuPUt, sizeof (DKcnLZeuPUt), stdin);
    UH4lvjnZ = strtok (DKcnLZeuPUt, ",");
    for (; UH4lvjnZ; UH4lvjnZ = strtok (NULL, ",")) {
        ArpjA64F5E[Z7Ol342eVCB++] = atoi (UH4lvjnZ);
    }
    {
        Z7Ol342eVCB = (174 - 174);
        for (; alsxMeKJ > Z7Ol342eVCB;) {
            int KwXITK6mxBg = WfxOnvBSwgY[Z7Ol342eVCB];
            int gsHlDz;
            gsHlDz = ArpjA64F5E[Z7Ol342eVCB];
            {
                L78Wxce = KwXITK6mxBg;
                for (; L78Wxce < gsHlDz;) {
                    fdnx9TO[L78Wxce]++;
                    if (max < fdnx9TO[L78Wxce])
                        max = fdnx9TO[L78Wxce];
                    L78Wxce++;
                }
            }
            Z7Ol342eVCB = Z7Ol342eVCB +(754 - 753);
        }
    }
    printf ("%d %d\n", alsxMeKJ, max);
}

