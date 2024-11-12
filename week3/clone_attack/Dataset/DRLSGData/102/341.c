int main () {
    double  pogtMF;
    int lUEDcFeRV;
    char aEF9tz6BK [(485 - 435)] [(571 - 563)];
    double  wvUmjz57 [50];
    int PsiQO9;
    double  ajHmkgis [50];
    int ivgoN3I6lj4;
    double  iXvk7WMpI [50];
    int YyqfNYb6;
    int VcYHdpyB4;
    ivgoN3I6lj4 = (202 - 202);
    VcYHdpyB4 = (932 - 932);
    scanf ("%d", &PsiQO9);
    for (lUEDcFeRV = (147 - 147); PsiQO9 > lUEDcFeRV; lUEDcFeRV++) {
        scanf ("%s %lf", aEF9tz6BK[lUEDcFeRV], &wvUmjz57[lUEDcFeRV]);
        if (!((354 - 354) != strcmp (aEF9tz6BK[lUEDcFeRV], "male"))) {
            ivgoN3I6lj4++;
            ajHmkgis[ivgoN3I6lj4 - (518 - 517)] = wvUmjz57[lUEDcFeRV];
        }
        else {
            VcYHdpyB4++;
            iXvk7WMpI[VcYHdpyB4 -(434 - 433)] = wvUmjz57[lUEDcFeRV];
        }
    }
    for (YyqfNYb6 = (748 - 747); YyqfNYb6 <= ivgoN3I6lj4; YyqfNYb6++) {
        for (lUEDcFeRV = (50 - 50); ivgoN3I6lj4 - YyqfNYb6 > lUEDcFeRV; lUEDcFeRV++) {
            if (ajHmkgis[lUEDcFeRV] > ajHmkgis[lUEDcFeRV + (738 - 737)]) {
                pogtMF = ajHmkgis[lUEDcFeRV + (247 - 246)];
                ajHmkgis[lUEDcFeRV + (957 - 956)] = ajHmkgis[lUEDcFeRV];
                ajHmkgis[lUEDcFeRV] = pogtMF;
            }
        }
    }
    for (YyqfNYb6 = (996 - 995); YyqfNYb6 <= VcYHdpyB4; YyqfNYb6++) {
        for (lUEDcFeRV = 0; lUEDcFeRV < VcYHdpyB4 -YyqfNYb6; lUEDcFeRV++) {
            if (iXvk7WMpI[lUEDcFeRV + (275 - 274)] > iXvk7WMpI[lUEDcFeRV]) {
                pogtMF = iXvk7WMpI[lUEDcFeRV + 1];
                iXvk7WMpI[lUEDcFeRV + 1] = iXvk7WMpI[lUEDcFeRV];
                iXvk7WMpI[lUEDcFeRV] = pogtMF;
            }
        }
    }
    for (lUEDcFeRV = 0; ivgoN3I6lj4 > lUEDcFeRV; lUEDcFeRV++) {
        printf ("%.2lf ", ajHmkgis[lUEDcFeRV]);
    }
    for (lUEDcFeRV = 0; lUEDcFeRV < VcYHdpyB4; lUEDcFeRV++) {
        if (lUEDcFeRV == VcYHdpyB4 -1) {
            printf ("%.2lf", iXvk7WMpI[lUEDcFeRV]);
        }
        else {
            printf ("%.2lf ", iXvk7WMpI[lUEDcFeRV]);
        }
    }
    return 0;
}

