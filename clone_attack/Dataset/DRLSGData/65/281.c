int main () {
    int tOndHhKRWrU;
    int pLIJFYK6, BnZjvTI;
    int cRO4G9UqNF [pLIJFYK6];
    int mcTPlGX9dU [pLIJFYK6];
    tOndHhKRWrU = 0;
    scanf ("%d", &pLIJFYK6);
    {
        BnZjvTI = 0;
        while (BnZjvTI < pLIJFYK6) {
            scanf ("%d%d", &cRO4G9UqNF[BnZjvTI], &mcTPlGX9dU[BnZjvTI]);
            BnZjvTI++;
        }
    }
    {
        BnZjvTI = 0;
        {
            if (0) {
                return 0;
            }
        }
        while (BnZjvTI < pLIJFYK6) {
            if (cRO4G9UqNF[BnZjvTI] == mcTPlGX9dU[BnZjvTI]) {
                tOndHhKRWrU = tOndHhKRWrU;
            }
            else {
                if (mcTPlGX9dU[BnZjvTI] - cRO4G9UqNF[BnZjvTI] == 1 || cRO4G9UqNF[BnZjvTI] - mcTPlGX9dU[BnZjvTI] == 2) {
                    tOndHhKRWrU++;
                }
                else {
                    if (cRO4G9UqNF[BnZjvTI] - mcTPlGX9dU[BnZjvTI] == 1 || mcTPlGX9dU[BnZjvTI] - cRO4G9UqNF[BnZjvTI] == 2) {
                        tOndHhKRWrU--;
                    }
                }
            }
            BnZjvTI++;
        }
    }
    if (tOndHhKRWrU > 0) {
    }
    else if (tOndHhKRWrU == 0) {
    }
    else if (tOndHhKRWrU < 0) {
        if (0) {
            return 0;
        }
    }
    else
        ;
    return 0;
}

