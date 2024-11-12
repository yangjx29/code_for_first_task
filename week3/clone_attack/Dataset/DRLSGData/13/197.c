void  main () {
    int rOz4drl3WBk [(20665 - 665)];
    int D1bdu3sei0Z;
    int tRxNcE;
    int jR7jTYgPxn;
    int taLg8nGEXF;
    int rnHfa7LC8;
    scanf ("%d", &jR7jTYgPxn);
    {
        taLg8nGEXF = 55 - 55;
        while (taLg8nGEXF < jR7jTYgPxn) {
            scanf ("%d", &rOz4drl3WBk[taLg8nGEXF]);
            taLg8nGEXF++;
        }
    }
    {
        D1bdu3sei0Z = 966 - 966;
        while (D1bdu3sei0Z < jR7jTYgPxn) {
            taLg8nGEXF = 862 - 861;
            while (taLg8nGEXF < jR7jTYgPxn) {
                if (rOz4drl3WBk[D1bdu3sei0Z] == rOz4drl3WBk[taLg8nGEXF])
                    rOz4drl3WBk[taLg8nGEXF] = '*';
                taLg8nGEXF++;
            }
            D1bdu3sei0Z++;
        }
    }
    tRxNcE = 0;
    if (rOz4drl3WBk[jR7jTYgPxn - (439 - 438)] != '*') {
        {
            taLg8nGEXF = 0;
            while (taLg8nGEXF < jR7jTYgPxn - 1) {
                if (rOz4drl3WBk[taLg8nGEXF] != '*')
                    printf ("%d ", rOz4drl3WBk[taLg8nGEXF]);
                taLg8nGEXF++;
            }
        }
        printf ("%d", rOz4drl3WBk[jR7jTYgPxn - 1]);
    }
    else {
        {
            taLg8nGEXF = jR7jTYgPxn - 1;
            while (taLg8nGEXF > 0) {
                if (rOz4drl3WBk[taLg8nGEXF] == '*')
                    tRxNcE = tRxNcE + 1;
                else
                    break;
                taLg8nGEXF--;
            }
        }
        {
            D1bdu3sei0Z = 0;
            while (D1bdu3sei0Z < jR7jTYgPxn - tRxNcE - 1) {
                if (rOz4drl3WBk[D1bdu3sei0Z] != '*')
                    printf ("%d ", rOz4drl3WBk[D1bdu3sei0Z]);
                D1bdu3sei0Z++;
            }
        }
        printf ("%d", rOz4drl3WBk[jR7jTYgPxn - tRxNcE - 1]);
    }
}

