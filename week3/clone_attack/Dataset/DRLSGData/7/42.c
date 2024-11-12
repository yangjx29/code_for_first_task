void  main () {
    char z8JIWwDxX [(1254 - 998)], AhbcQx8T4zW [(459 - 203)], GpgtzC0aQh [(1110 - 854)];
    gets (z8JIWwDxX);
    gets (AhbcQx8T4zW);
    gets (GpgtzC0aQh);
    int YTXV2b9, L4VkL0, dPyBVoLw, nX7cCdnt, IqUcAEd, fGg1mCu;
    scanf ("\n");
    scanf ("\n");
    dPyBVoLw = strlen (z8JIWwDxX);
    nX7cCdnt = strlen (AhbcQx8T4zW);
    {
        YTXV2b9 = 327 - 327;
        while (YTXV2b9 < dPyBVoLw) {
            if (!(z8JIWwDxX[YTXV2b9] != AhbcQx8T4zW[(267 - 267)])) {
                fGg1mCu = YTXV2b9;
                for (L4VkL0 = (484 - 484); nX7cCdnt > L4VkL0; L4VkL0 = L4VkL0 +1, fGg1mCu++)
                    if (AhbcQx8T4zW[L4VkL0] != z8JIWwDxX[fGg1mCu])
                        break;
                if (nX7cCdnt > L4VkL0)
                    continue;
                else
                    break;
            }
            else
                continue;
            YTXV2b9 = YTXV2b9 +1;
        }
    }
    IqUcAEd = strlen (GpgtzC0aQh);
    if (dPyBVoLw > YTXV2b9) {
        for (L4VkL0 = YTXV2b9 +nX7cCdnt; (dPyBVoLw - YTXV2b9 -nX7cCdnt) > L4VkL0; L4VkL0++)
            z8JIWwDxX[IqUcAEd +L4VkL0-nX7cCdnt] = z8JIWwDxX[L4VkL0];
        for (L4VkL0 = YTXV2b9; L4VkL0 < (YTXV2b9 +IqUcAEd); L4VkL0++)
            z8JIWwDxX[L4VkL0] = GpgtzC0aQh[L4VkL0 -YTXV2b9];
        printf ("%s\n", z8JIWwDxX);
    }
    else
        printf ("%s\n", z8JIWwDxX);
}

