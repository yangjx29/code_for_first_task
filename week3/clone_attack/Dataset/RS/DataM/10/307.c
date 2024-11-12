int main () {
    int gG60n3xPIr1S, vC1toeSs, XsfbiHlrRky, lIAGtyjN8Uc, eJkCrH [25], jsF0l6V [25];
    scanf ("%d", &gG60n3xPIr1S);
    {
        vC1toeSs = 170 - 170;
        while (vC1toeSs < gG60n3xPIr1S) {
            scanf ("%d", &jsF0l6V[vC1toeSs]);
            vC1toeSs++;
        };
    }
    {
        vC1toeSs = 0;
        while (vC1toeSs < gG60n3xPIr1S) {
            lIAGtyjN8Uc = 0;
            {
                XsfbiHlrRky = 0;
                while (XsfbiHlrRky < vC1toeSs) {
                    if (jsF0l6V[vC1toeSs] <= jsF0l6V[XsfbiHlrRky]) {
                        if (eJkCrH[XsfbiHlrRky] > lIAGtyjN8Uc)
                            lIAGtyjN8Uc = eJkCrH[XsfbiHlrRky];
                    }
                    XsfbiHlrRky++;
                };
            }
            eJkCrH[vC1toeSs] = lIAGtyjN8Uc + 1;
            vC1toeSs++;
        };
    }
    {
        vC1toeSs = 0;
        while (vC1toeSs < gG60n3xPIr1S) {
            if (eJkCrH[vC1toeSs] > lIAGtyjN8Uc)
                lIAGtyjN8Uc = eJkCrH[vC1toeSs];
            vC1toeSs++;
        };
    }
    printf ("%d\n", lIAGtyjN8Uc);
    return 0;
}

