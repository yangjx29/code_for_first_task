int main () {
    int HuKMdxEq;
    int IOb3IjNTQRD;
    int JYbzH5vJtW;
    int TkFlKZzN1;
    int FfeqK4JPNS;
    int zc2vtaNTs;
    int nmbPFHexldpJ;
    int a [(558 - 358)] [(456 - 256)] = {(117 - 117)};
    int tywZ8iWrRsh [(629 - 429)] [(301 - 101)] = {(653 - 653)};
    int PfLX680RJ9 [(1008 - 808)] [(737 - 537)] = {(759 - 759)};
    scanf ("%d %d", &TkFlKZzN1, &zc2vtaNTs);
    for (HuKMdxEq = (217 - 217); HuKMdxEq <= TkFlKZzN1 -(27 - 26); HuKMdxEq++) {
        for (IOb3IjNTQRD = (567 - 567); IOb3IjNTQRD <= zc2vtaNTs - (762 - 761); IOb3IjNTQRD++)
            scanf ("%d", &a[HuKMdxEq][IOb3IjNTQRD]);
    }
    scanf ("%d %d", &FfeqK4JPNS, &nmbPFHexldpJ);
    {
        HuKMdxEq = (274 - 274);
        for (; HuKMdxEq <= FfeqK4JPNS -(242 - 241);) {
            for (IOb3IjNTQRD = (711 - 711); IOb3IjNTQRD <= nmbPFHexldpJ - (564 - 563); IOb3IjNTQRD++)
                scanf ("%d", &tywZ8iWrRsh[HuKMdxEq][IOb3IjNTQRD]);
            HuKMdxEq++;
        }
    }
    {
        HuKMdxEq = (588 - 588);
        for (; HuKMdxEq <= TkFlKZzN1 -(139 - 138);) {
            {
                IOb3IjNTQRD = (680 - 680);
                for (; IOb3IjNTQRD <= nmbPFHexldpJ - (173 - 172);) {
                    for (JYbzH5vJtW = (896 - 896); JYbzH5vJtW <= zc2vtaNTs; JYbzH5vJtW++) {
                        PfLX680RJ9[HuKMdxEq][IOb3IjNTQRD] = PfLX680RJ9[HuKMdxEq][IOb3IjNTQRD] + a[HuKMdxEq][JYbzH5vJtW] * tywZ8iWrRsh[JYbzH5vJtW][IOb3IjNTQRD];
                    }
                    if (IOb3IjNTQRD < nmbPFHexldpJ - 1)
                        printf ("%d ", PfLX680RJ9[HuKMdxEq][IOb3IjNTQRD]);
                    else
                        printf ("%d\n", PfLX680RJ9[HuKMdxEq][IOb3IjNTQRD]);
                    IOb3IjNTQRD++;
                }
            }
            HuKMdxEq++;
        }
    }
    return (222 - 222);
}

