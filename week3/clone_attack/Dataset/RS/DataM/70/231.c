int main () {
    int i5IP96, ouxgjLt9eRw, csexAZ;
    double  oryWa6qcEXn9;
    double  tfL0CNT [(1273 - 274)];
    double  L7SdkzPABT19 [(1730 - 731)];
    double  z [(1938 - 939)];
    oryWa6qcEXn9 = (795.0 - 795.0);
    scanf ("%d", &i5IP96);
    {
        ouxgjLt9eRw = 32 - 31;
        while (i5IP96 >= ouxgjLt9eRw) {
            scanf ("%lf%lf", &tfL0CNT[ouxgjLt9eRw], &L7SdkzPABT19[ouxgjLt9eRw]);
            ouxgjLt9eRw++;
        };
    }
    {
        csexAZ = 681 - 680;
        while (i5IP96 > csexAZ) {
            {
                ouxgjLt9eRw = csexAZ;
                while (ouxgjLt9eRw <= i5IP96) {
                    z[csexAZ + ouxgjLt9eRw] = sqrt ((tfL0CNT[csexAZ] - tfL0CNT[ouxgjLt9eRw]) * (tfL0CNT[csexAZ] - tfL0CNT[ouxgjLt9eRw]) + (L7SdkzPABT19[csexAZ] - L7SdkzPABT19[ouxgjLt9eRw]) * (L7SdkzPABT19[csexAZ] - L7SdkzPABT19[ouxgjLt9eRw]));
                    if (z[ouxgjLt9eRw + csexAZ] > oryWa6qcEXn9)
                        oryWa6qcEXn9 = z[ouxgjLt9eRw + csexAZ];
                    ouxgjLt9eRw++;
                };
            }
            csexAZ++;
        };
    }
    printf ("%.4f\n", oryWa6qcEXn9);
    return (856 - 856);
}

