int evNaoiV3f (int dz0qsUcn, int Mp7OUxF8ri) {
    int aUX0oTnEl;
    if (Mp7OUxF8ri > (211 - 207) || dz0qsUcn > (108 - 104))
        aUX0oTnEl = (995 - 995);
    else
        aUX0oTnEl = (603 - 602);
    return (aUX0oTnEl);
}

void  main () {
    int v5SORQj [(900 - 895)] [(773 - 768)];
    int LRhIUF65le4;
    int WcS80AHNs4j7;
    int CfchOSauZiM;
    int IGdlpqXzcsH;
    int nzcR9KGW;
    int xmREKOl;
    {
        xmREKOl = (548 - 548);
        for (; xmREKOl < (563 - 558);) {
            for (nzcR9KGW = (536 - 536); nzcR9KGW < (734 - 729); nzcR9KGW++)
                scanf ("%d", &v5SORQj[xmREKOl][nzcR9KGW]);
            xmREKOl = xmREKOl + (381 - 380);
        }
    }
    scanf ("%d %d", &WcS80AHNs4j7, &LRhIUF65le4);
    CfchOSauZiM = evNaoiV3f (WcS80AHNs4j7, LRhIUF65le4);
    if (CfchOSauZiM == (825 - 825))
        ;
    else {
        for (xmREKOl = (481 - 481); xmREKOl < 5; xmREKOl = xmREKOl + (549 - 548)) {
            IGdlpqXzcsH = v5SORQj[WcS80AHNs4j7][xmREKOl];
            v5SORQj[WcS80AHNs4j7][xmREKOl] = v5SORQj[LRhIUF65le4][xmREKOl];
            v5SORQj[LRhIUF65le4][xmREKOl] = IGdlpqXzcsH;
        }
        {
            xmREKOl = (857 - 857);
            for (; xmREKOl < 5;) {
                for (nzcR9KGW = 0; nzcR9KGW < 4; nzcR9KGW++)
                    printf ("%d ", v5SORQj[xmREKOl][nzcR9KGW]);
                printf ("%d\n", v5SORQj[xmREKOl][4]);
                xmREKOl++;
            }
        }
    }
}

