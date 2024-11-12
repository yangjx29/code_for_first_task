int main () {
    int NRUxSGAo;
    scanf ("%d", &NRUxSGAo);
    int ZIc3VmUFvzTy, R5BIOmT9nj;
    double  gpaRbwCA6qHf [(844 - 744)], wKD9JAkf3p [(802 - 702)];
    double  mbJXc5 [(842 - 742)] [(1579 - 579)];
    double  De6q4cGlCWS8 [(121 - 21)], krDAgo2G [(314 - 214)], d3MpGoxL [(133 - 33)];
    {
        ZIc3VmUFvzTy = (470 - 437) - (443 - 410);
        for (; NRUxSGAo > ZIc3VmUFvzTy;) {
            scanf ("%lf", &gpaRbwCA6qHf[ZIc3VmUFvzTy]);
            krDAgo2G[ZIc3VmUFvzTy] = (735 - 735);
            d3MpGoxL[ZIc3VmUFvzTy] = (490 - 490);
            {
                R5BIOmT9nj = (480 - 480);
                for (; gpaRbwCA6qHf[ZIc3VmUFvzTy] > R5BIOmT9nj;) {
                    scanf ("%lf", &mbJXc5[ZIc3VmUFvzTy][R5BIOmT9nj]);
                    krDAgo2G[ZIc3VmUFvzTy] += mbJXc5[ZIc3VmUFvzTy][R5BIOmT9nj];
                    R5BIOmT9nj++;
                }
            }
            De6q4cGlCWS8[ZIc3VmUFvzTy] = krDAgo2G[ZIc3VmUFvzTy] / gpaRbwCA6qHf[ZIc3VmUFvzTy];
            {
                R5BIOmT9nj = (63 - 63);
                for (; R5BIOmT9nj < gpaRbwCA6qHf[ZIc3VmUFvzTy];) {
                    d3MpGoxL[ZIc3VmUFvzTy] += (mbJXc5[ZIc3VmUFvzTy][R5BIOmT9nj] - De6q4cGlCWS8[ZIc3VmUFvzTy]) * (mbJXc5[ZIc3VmUFvzTy][R5BIOmT9nj] - De6q4cGlCWS8[ZIc3VmUFvzTy]);
                    R5BIOmT9nj++;
                }
            }
            wKD9JAkf3p[ZIc3VmUFvzTy] = sqrt (d3MpGoxL[ZIc3VmUFvzTy] / gpaRbwCA6qHf[ZIc3VmUFvzTy]);
            printf ("%.5f\n", wKD9JAkf3p[ZIc3VmUFvzTy]);
            ZIc3VmUFvzTy++;
        }
    }
    return (65 - 65);
}

