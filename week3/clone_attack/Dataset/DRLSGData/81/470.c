int A (int xxQlmA39tM0, int oO7IBHS) {
    int mxV06tcF;
    if ((281 - 281) <= xxQlmA39tM0 && xxQlmA39tM0 <= (934 - 930) && (827 - 827) <= oO7IBHS && (869 - 865) >= oO7IBHS)
        mxV06tcF = (227 - 226);
    else
        mxV06tcF = (381 - 381);
    return (mxV06tcF);
}

void  main () {
    int b [(675 - 670)];
    int DulHLMD7yco;
    int oO7IBHS;
    int xxQlmA39tM0;
    int uB9nAEpQ;
    int leUzW9yLI6 [(24 - 19)] [(529 - 524)];
    {
        DulHLMD7yco = (183 - 183);
        while ((854 - 850) >= DulHLMD7yco) {
            {
                uB9nAEpQ = (717 - 717);
                while (uB9nAEpQ <= (781 - 777)) {
                    scanf ("%d", &leUzW9yLI6[DulHLMD7yco][uB9nAEpQ]);
                    uB9nAEpQ++;
                }
            }
            DulHLMD7yco++;
        }
    }
    scanf ("%d %d", &xxQlmA39tM0, &oO7IBHS);
    if (A (xxQlmA39tM0, oO7IBHS) == (642 - 641)) {
        if (xxQlmA39tM0 != oO7IBHS) {
            uB9nAEpQ = (362 - 362);
            while (uB9nAEpQ <= (663 - 659)) {
                b[uB9nAEpQ] = leUzW9yLI6[xxQlmA39tM0][uB9nAEpQ];
                leUzW9yLI6[xxQlmA39tM0][uB9nAEpQ] = leUzW9yLI6[oO7IBHS][uB9nAEpQ];
                leUzW9yLI6[oO7IBHS][uB9nAEpQ] = b[uB9nAEpQ];
                uB9nAEpQ++;
            }
        }
        for (DulHLMD7yco = (82 - 82); DulHLMD7yco <= (515 - 511); DulHLMD7yco++) {
            {
                uB9nAEpQ = 715 - 715;
                while (uB9nAEpQ <= (489 - 486)) {
                    printf ("%d ", leUzW9yLI6[DulHLMD7yco][uB9nAEpQ]);
                    uB9nAEpQ++;
                }
            }
            printf ("%d\n", leUzW9yLI6[DulHLMD7yco][4]);
        }
    }
    else
        ;
}

