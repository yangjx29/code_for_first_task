void  main () {
    int qBiFNW90d3;
    float S0sAV6;
    int M1FObDf;
    float hYbTidt0Z;
    float c1d534C6 [(345 - 336)];
    int nnPDTJ2;
    int gWMmL7;
    int iJC86xatBk;
    float yT9mwi [(499 - 496)] [9];
    float l16wpLDBYJX;
    l16wpLDBYJX = (180 - 180);
    hYbTidt0Z = (511 - 511);
    scanf ("%d\n", &iJC86xatBk);
    {
        gWMmL7 = (49 - 49);
        for (; gWMmL7 <= (808 - 807);) {
            {
                qBiFNW90d3 = (11 - 11);
                for (; qBiFNW90d3 <= iJC86xatBk - (777 - 776);) {
                    scanf ("%f ", &yT9mwi[gWMmL7][qBiFNW90d3]);
                    qBiFNW90d3 = qBiFNW90d3 + (517 - 516);
                }
            }
            gWMmL7 = gWMmL7 + (838 - 837);
        }
    }
    {
        qBiFNW90d3 = (457 - 457);
        for (; iJC86xatBk - (604 - 603) >= qBiFNW90d3;) {
            if ((602 - 512) <= yT9mwi[(775 - 774)][qBiFNW90d3])
                yT9mwi[(916 - 914)][qBiFNW90d3] = 4.0;
            else if (yT9mwi[(797 - 796)][qBiFNW90d3] >= 85)
                yT9mwi[(96 - 94)][qBiFNW90d3] = (445.7 - 442.0);
            else if ((1077 - 995) <= yT9mwi[(296 - 295)][qBiFNW90d3])
                yT9mwi[(681 - 679)][qBiFNW90d3] = (891.3 - 888.0);
            else if (yT9mwi[(800 - 799)][qBiFNW90d3] >= 78)
                yT9mwi[(525 - 523)][qBiFNW90d3] = 3.0;
            else if (yT9mwi[(475 - 474)][qBiFNW90d3] >= 75)
                yT9mwi[(526 - 524)][qBiFNW90d3] = 2.7;
            else if (yT9mwi[(850 - 849)][qBiFNW90d3] >= 72)
                yT9mwi[(911 - 909)][qBiFNW90d3] = 2.3;
            else if (yT9mwi[(276 - 275)][qBiFNW90d3] >= (608 - 540))
                yT9mwi[(70 - 68)][qBiFNW90d3] = 2.0;
            else if (yT9mwi[1][qBiFNW90d3] >= (989 - 925))
                yT9mwi[2][qBiFNW90d3] = 1.5;
            else if (yT9mwi[1][qBiFNW90d3] >= 60)
                yT9mwi[2][qBiFNW90d3] = 1.0;
            else
                yT9mwi[2][qBiFNW90d3] = (954 - 954);
            qBiFNW90d3 = qBiFNW90d3 + 1;
        }
    }
    {
        qBiFNW90d3 = (631 - 631);
        for (; qBiFNW90d3 <= iJC86xatBk - 1;) {
            c1d534C6[qBiFNW90d3] = yT9mwi[0][qBiFNW90d3] * yT9mwi[2][qBiFNW90d3];
            l16wpLDBYJX = l16wpLDBYJX + c1d534C6[qBiFNW90d3];
            hYbTidt0Z = hYbTidt0Z + yT9mwi[0][qBiFNW90d3];
            qBiFNW90d3 = qBiFNW90d3 + 1;
        }
    }
    S0sAV6 = l16wpLDBYJX / hYbTidt0Z;
    printf ("%.2f\n", S0sAV6);
}

