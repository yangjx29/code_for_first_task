struct   patient {
    int e1a4CoeznO7;
    int pqhU1RSlio;
    double  gxlvLHzDR;
    char t7oP0KHa [7];
}
uVKUiSoZ [M];

int main () {
    int QzfSb4XY0xp6;
    int k4pCtxeq;
    scanf ("%d", &QzfSb4XY0xp6);
    {
        k4pCtxeq = 0;
        while (k4pCtxeq < QzfSb4XY0xp6) {
            scanf ("%d%d", &uVKUiSoZ[k4pCtxeq].e1a4CoeznO7, &uVKUiSoZ[k4pCtxeq].pqhU1RSlio);
            uVKUiSoZ[k4pCtxeq].gxlvLHzDR = (double ) uVKUiSoZ[k4pCtxeq].pqhU1RSlio / (double ) uVKUiSoZ[k4pCtxeq].e1a4CoeznO7;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            k4pCtxeq = k4pCtxeq + 1;
        };
    }
    {
        k4pCtxeq = 1;
        while (k4pCtxeq < QzfSb4XY0xp6) {
            if ((uVKUiSoZ[k4pCtxeq].gxlvLHzDR - uVKUiSoZ[0].gxlvLHzDR) > 0.05)
                strcpy (uVKUiSoZ[k4pCtxeq].t7oP0KHa, "better");
            else {
                if ((uVKUiSoZ[0].gxlvLHzDR - uVKUiSoZ[k4pCtxeq].gxlvLHzDR) > 0.05)
                    strcpy (uVKUiSoZ[k4pCtxeq].t7oP0KHa, "worse");
                else
                    strcpy (uVKUiSoZ[k4pCtxeq].t7oP0KHa, "same");
            }
            k4pCtxeq = k4pCtxeq + 1;
        };
    }
    for (k4pCtxeq = 1; k4pCtxeq < QzfSb4XY0xp6; k4pCtxeq++)
        printf ("%s\n", uVKUiSoZ[k4pCtxeq].t7oP0KHa);
    return 0;
}

