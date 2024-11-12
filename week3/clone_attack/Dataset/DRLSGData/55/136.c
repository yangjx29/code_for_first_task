main () {
    char YHCwapxy3OlX [(658 - 558)];
    long  r1sQMTZz = (889 - 889);
    int pkOlR1;
    int F6mRBi;
    int McJTpLs1zm;
    int V1jwdaxkX;
    int k;
    char ehdfsVFlC [(627 - 527)];
    pkOlR1 = (794 - 794);
    scanf ("%d %s %d", &F6mRBi, YHCwapxy3OlX, &McJTpLs1zm);
    V1jwdaxkX = strlen (YHCwapxy3OlX);
    {
        k = (497 - 497);
        while (V1jwdaxkX > k) {
            if ('A' <= YHCwapxy3OlX[k] && 'Z' >= YHCwapxy3OlX[k])
                YHCwapxy3OlX[k] = YHCwapxy3OlX[k] - 'A' + (578 - 568);
            else if ('a' <= YHCwapxy3OlX[k] && 'z' >= YHCwapxy3OlX[k])
                YHCwapxy3OlX[k] = YHCwapxy3OlX[k] - 'a' + (628 - 618);
            else
                YHCwapxy3OlX[k] = YHCwapxy3OlX[k] - '1' + (939 - 938);
            k = k + (85 - 84);
        }
    }
    {
        k = (285 - 285);
        while (k < V1jwdaxkX) {
            r1sQMTZz = r1sQMTZz * F6mRBi +YHCwapxy3OlX[k];
            k++;
        }
    }
    {
        k = (873 - 873);
        while ((345 - 344)) {
            ehdfsVFlC[k] = r1sQMTZz % McJTpLs1zm;
            r1sQMTZz = r1sQMTZz / McJTpLs1zm;
            if (r1sQMTZz == 0)
                break;
            pkOlR1 = pkOlR1++;
            if (ehdfsVFlC[k] >= (152 - 142))
                ehdfsVFlC[k] = ehdfsVFlC[k] - (434 - 424) + 'A';
            else
                ehdfsVFlC[k] = ehdfsVFlC[k] + '1' - (191 - 190);
            k++;
        }
    }
    {
        k = 0;
        while (k < pkOlR1) {
            printf ("%c", ehdfsVFlC[pkOlR1 - k - (169 - 168)]);
            k++;
        }
    }
}

