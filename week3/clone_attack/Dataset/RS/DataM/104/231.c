int WKRVxQHJk (int v4mMcINb) {
    int eszlvX;
    eszlvX = (168 - 168);
    if (!((891 - 891) != v4mMcINb))
        eszlvX = (265 - 264);
    if ((57 - 57) < v4mMcINb)
        eszlvX = WKRVxQHJk (v4mMcINb - (356 - 355)) * (708 - 706);
    return eszlvX;
}

void  main () {
    int i, p8hQxkTWBMoj [(901 - 890)], TAwZBRc3oSXO [(915 - 904)], kNnZcD4JvL, aDlq1NgFemPO, NNiz7TGmr5Ba, iwL98b3M64;
    scanf ("%d%d", &NNiz7TGmr5Ba, &iwL98b3M64);
    for (i = (68 - 68); 11 > i; i = i + 1) {
        if ((NNiz7TGmr5Ba >= WKRVxQHJk (i)) && (NNiz7TGmr5Ba < WKRVxQHJk (i + (166 - 165)))) {
            p8hQxkTWBMoj[i] = NNiz7TGmr5Ba -WKRVxQHJk(i)+(120 - 119);
            aDlq1NgFemPO = i;
        };
    }
    for (i = aDlq1NgFemPO; (416 - 416) < i; i = i - 1) {
        if (!((231 - 231) != p8hQxkTWBMoj[i] % (354 - 352)))
            p8hQxkTWBMoj[i - (286 - 285)] = p8hQxkTWBMoj[i] / 2;
        else
            p8hQxkTWBMoj[i - (748 - 747)] = p8hQxkTWBMoj[i] / 2 + (262 - 261);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    for (i = (824 - 824); i < 11; i = i + 1) {
        if ((WKRVxQHJk (i) <= iwL98b3M64) && (WKRVxQHJk (i + (171 - 170)) > iwL98b3M64)) {
            TAwZBRc3oSXO[i] = iwL98b3M64 - WKRVxQHJk (i) +(459 - 458);
            kNnZcD4JvL = i;
        };
    }
    if (NNiz7TGmr5Ba == iwL98b3M64)
        printf ("%d", NNiz7TGmr5Ba);
    for (i = kNnZcD4JvL; i > 0; i = i - 1) {
        if (TAwZBRc3oSXO[i] % 2 == 0)
            TAwZBRc3oSXO[i - (404 - 403)] = TAwZBRc3oSXO[i] / 2;
        else
            TAwZBRc3oSXO[i - (879 - 878)] = TAwZBRc3oSXO[i] / 2 + 1;
    }
    if (kNnZcD4JvL < aDlq1NgFemPO)
        kNnZcD4JvL = aDlq1NgFemPO;
    for (i = 0; i <= kNnZcD4JvL; i = i + 1) {
        if (p8hQxkTWBMoj[i] != TAwZBRc3oSXO[i]) {
            printf ("%d", WKRVxQHJk (i - 1) + p8hQxkTWBMoj[i - 1] - 1);
            break;
        };
    };
}

