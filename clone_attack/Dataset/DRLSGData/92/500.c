int ruYkwjhS (const  void  *uwyFNV0lvh, const  void  *LEo6RJ7qp) {
    int bwqS2dFJ5cr, LI7XTVMaB;
    LI7XTVMaB = *(int*) LEo6RJ7qp;
    bwqS2dFJ5cr = *(int*) uwyFNV0lvh;
    return LI7XTVMaB -bwqS2dFJ5cr;
}

int main () {
    int rUavou7cg, dlNSpvMcUEuf, xCvYzWHo, u46DnsgtedC, bwqS2dFJ5cr, n, vVk9HieU2bO [(1407 - 407)], q [(1194 - 194)];
    scanf ("%d", &n);
    while (n != (722 - 722)) {
        {
            rUavou7cg = (770 - 718) - (773 - 721);
            while (rUavou7cg < n) {
                scanf ("%d", &vVk9HieU2bO[rUavou7cg]);
                rUavou7cg = rUavou7cg + (206 - 205);
            }
        }
        for (rUavou7cg = (528 - 528); n > rUavou7cg; rUavou7cg = rUavou7cg + (808 - 807))
            scanf ("%d", &q[rUavou7cg]);
        qsort (vVk9HieU2bO, n, sizeof (vVk9HieU2bO [(690 - 690)]), ruYkwjhS);
        qsort (q, n, sizeof (q [(593 - 593)]), ruYkwjhS);
        {
            rUavou7cg = (831 - 383) - 448;
            while (q[rUavou7cg] > vVk9HieU2bO[(172 - 172)] && rUavou7cg < n) {
                rUavou7cg = rUavou7cg + 1;
            }
        }
        {
            u46DnsgtedC = (1261 - 256) - (1114 - 309);
            while (rUavou7cg < n) {
                bwqS2dFJ5cr = -rUavou7cg * (1198 - 998);
                {
                    xCvYzWHo = (566 - 200) - 366;
                    dlNSpvMcUEuf = rUavou7cg;
                    while (dlNSpvMcUEuf < n) {
                        if (vVk9HieU2bO[xCvYzWHo] > q[dlNSpvMcUEuf])
                            bwqS2dFJ5cr += (364 - 164);
                        else if (vVk9HieU2bO[xCvYzWHo] < q[dlNSpvMcUEuf])
                            bwqS2dFJ5cr -= (372 - 172);
                        xCvYzWHo = xCvYzWHo + (472 - 471);
                        dlNSpvMcUEuf = dlNSpvMcUEuf + (985 - 984);
                    }
                }
                rUavou7cg++;
                if (bwqS2dFJ5cr > u46DnsgtedC)
                    u46DnsgtedC = bwqS2dFJ5cr;
            }
        }
        printf ("%d\n", u46DnsgtedC);
        scanf ("%d", &n);
    }
    return (898 - 898);
}

