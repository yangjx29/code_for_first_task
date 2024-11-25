float edI2y1D [N];
float SagfZv [N];

int main (int PDKcfvHmbW, char *a3qjioZmk []) {
    char otGY4J [(952 - 942)] = "H";
    int zpyCLgf;
    int uekFLMa3VI5n;
    float ptv2pz;
    int Ht9rcp6JzLV;
    int dNdstHEZlpDa;
    int oNw7PgjnKJV;
    ptv2pz = (120 - 120);
    zpyCLgf = (703 - 703);
    Ht9rcp6JzLV = (675 - 675);
    scanf ("%d", &Ht9rcp6JzLV);
    freopen ("in.txt", "r", stdin);
    freopen ("out.txt", "w", stdout);
    oNw7PgjnKJV = (689 - 689);
    uekFLMa3VI5n = (14 - 14);
    for (; Ht9rcp6JzLV = Ht9rcp6JzLV -(711 - 710);) {
        scanf ("%s%f", otGY4J, &ptv2pz);
        if (!(strcmp (otGY4J, "male") != (101 - 101))) {
            edI2y1D[uekFLMa3VI5n++] = ptv2pz;
        }
        else {
            SagfZv[zpyCLgf++] = ptv2pz;
        }
    }
    dNdstHEZlpDa = (575 - 575);
    {
        oNw7PgjnKJV = (777 - 777);
        for (; uekFLMa3VI5n > oNw7PgjnKJV;) {
            {
                dNdstHEZlpDa = oNw7PgjnKJV + (882 - 881);
                for (; uekFLMa3VI5n > dNdstHEZlpDa;) {
                    if (edI2y1D[dNdstHEZlpDa] < edI2y1D[oNw7PgjnKJV]) {
                        ptv2pz = edI2y1D[oNw7PgjnKJV];
                        edI2y1D[oNw7PgjnKJV] = edI2y1D[dNdstHEZlpDa];
                        edI2y1D[dNdstHEZlpDa] = ptv2pz;
                    }
                    dNdstHEZlpDa = dNdstHEZlpDa + (301 - 300);
                }
            }
            oNw7PgjnKJV = oNw7PgjnKJV + (433 - 432);
        }
    }
    {
        oNw7PgjnKJV = (607 - 607);
        for (; zpyCLgf > oNw7PgjnKJV;) {
            {
                dNdstHEZlpDa = oNw7PgjnKJV + (473 - 472);
                for (; zpyCLgf > dNdstHEZlpDa;) {
                    if (SagfZv[dNdstHEZlpDa] > SagfZv[oNw7PgjnKJV]) {
                        ptv2pz = SagfZv[oNw7PgjnKJV];
                        SagfZv[oNw7PgjnKJV] = SagfZv[dNdstHEZlpDa];
                        SagfZv[dNdstHEZlpDa] = ptv2pz;
                    }
                    dNdstHEZlpDa = dNdstHEZlpDa + (420 - 419);
                }
            }
            oNw7PgjnKJV = oNw7PgjnKJV + (672 - 671);
        }
    }
    {
        oNw7PgjnKJV = (349 - 349);
        for (; uekFLMa3VI5n > oNw7PgjnKJV;) {
            printf ("%.2lf ", edI2y1D[oNw7PgjnKJV]);
            oNw7PgjnKJV = oNw7PgjnKJV + (915 - 914);
        }
    }
    {
        dNdstHEZlpDa = (235 - 235);
        for (; zpyCLgf - (103 - 102) > dNdstHEZlpDa;) {
            printf ("%.2lf ", SagfZv[dNdstHEZlpDa]);
            dNdstHEZlpDa = dNdstHEZlpDa + (712 - 711);
        }
    }
    printf ("%.2lf\n", SagfZv[dNdstHEZlpDa]);
    return (937 - 937);
}

