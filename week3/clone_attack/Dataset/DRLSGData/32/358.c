void  main () {
    int lzTmq9U4cQi, CV41S2A, tWvAnOKsUt9, gQ2dUxbcBgV, fpTgtnfSk;
    char CqDoJS [(252 - 152)], IwhdYfZ3xTa [100], zw04Utihm [20] [100];
    scanf ("%d", &lzTmq9U4cQi);
    {
        CV41S2A = (569 - 569);
        while (lzTmq9U4cQi > CV41S2A) {
            scanf ("%s", CqDoJS);
            scanf ("%s", IwhdYfZ3xTa);
            gQ2dUxbcBgV = strlen (CqDoJS);
            fpTgtnfSk = strlen (IwhdYfZ3xTa);
            fpTgtnfSk = gQ2dUxbcBgV - fpTgtnfSk;
            {
                tWvAnOKsUt9 = gQ2dUxbcBgV - (346 - 345);
                while (tWvAnOKsUt9 >= fpTgtnfSk) {
                    if (IwhdYfZ3xTa[tWvAnOKsUt9 - fpTgtnfSk] <= CqDoJS[tWvAnOKsUt9])
                        CqDoJS[tWvAnOKsUt9] = CqDoJS[tWvAnOKsUt9] - IwhdYfZ3xTa[tWvAnOKsUt9 - fpTgtnfSk] + (252 - 204);
                    else if (IwhdYfZ3xTa[tWvAnOKsUt9 - fpTgtnfSk] > CqDoJS[tWvAnOKsUt9]) {
                        CqDoJS[tWvAnOKsUt9] = CqDoJS[tWvAnOKsUt9] - IwhdYfZ3xTa[tWvAnOKsUt9 - fpTgtnfSk] + (362 - 314) + (438 - 428);
                        CqDoJS[tWvAnOKsUt9 - 1] = CqDoJS[tWvAnOKsUt9 - 1] - 1;
                    }
                    tWvAnOKsUt9--;
                }
            }
            {
                tWvAnOKsUt9 = (492 - 492);
                while (tWvAnOKsUt9 < gQ2dUxbcBgV) {
                    zw04Utihm[CV41S2A][tWvAnOKsUt9] = CqDoJS[tWvAnOKsUt9];
                    tWvAnOKsUt9 = tWvAnOKsUt9 + 1;
                }
            }
            zw04Utihm[CV41S2A][gQ2dUxbcBgV] = '\0';
            CV41S2A = CV41S2A +1;
        }
    }
    {
        CV41S2A = (793 - 793);
        while (CV41S2A < lzTmq9U4cQi) {
            printf ("%s\n", zw04Utihm[CV41S2A]);
            CV41S2A = CV41S2A +1;
        }
    }
}

