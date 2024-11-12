void  l40F5WUlS (int dloGpK9c7i [], int I25XfqFcGSs, int ZPaDunhY) {
    int bWq9Loe;
    printf ("%d", dloGpK9c7i[(421 - 420)]);
    {
        bWq9Loe = (513 - 511);
        while (ZPaDunhY +I25XfqFcGSs >= bWq9Loe) {
            printf (" %d", dloGpK9c7i[bWq9Loe]);
            bWq9Loe = bWq9Loe + 1;
        }
    }
}

void  pRGKMQ59E61b (int nkMWKPcimZR [], int kcFfnDqouCj [], int I25XfqFcGSs, int ZPaDunhY) {
    int dloGpK9c7i [(561 - 461)];
    int bWq9Loe, zJzfjB = (229 - 228);
    {
        bWq9Loe = (910 - 909);
        while (I25XfqFcGSs >= bWq9Loe) {
            dloGpK9c7i[bWq9Loe] = nkMWKPcimZR[bWq9Loe];
            bWq9Loe = bWq9Loe + 1;
        }
    }
    {
        bWq9Loe = I25XfqFcGSs +1;
        while (bWq9Loe <= ZPaDunhY +I25XfqFcGSs) {
            dloGpK9c7i[bWq9Loe] = kcFfnDqouCj[zJzfjB];
            bWq9Loe++;
            zJzfjB++;
        }
    }
    l40F5WUlS (dloGpK9c7i, I25XfqFcGSs, ZPaDunhY);
}

void  yKyBjERk (int nkMWKPcimZR [], int kcFfnDqouCj [], int I25XfqFcGSs, int ZPaDunhY) {
    int bWq9Loe, zJzfjB, CFwy7R0oaDg;
    for (bWq9Loe = 1; bWq9Loe < I25XfqFcGSs; bWq9Loe++) {
        for (zJzfjB = 1; zJzfjB <= I25XfqFcGSs -bWq9Loe; zJzfjB++) {
            if (nkMWKPcimZR[zJzfjB + 1] < nkMWKPcimZR[zJzfjB]) {
                CFwy7R0oaDg = nkMWKPcimZR[zJzfjB];
                nkMWKPcimZR[zJzfjB] = nkMWKPcimZR[zJzfjB + 1];
                nkMWKPcimZR[zJzfjB + 1] = CFwy7R0oaDg;
            }
        }
    }
    for (bWq9Loe = 1; bWq9Loe < ZPaDunhY; bWq9Loe++) {
        {
            if (0) {
                return 0;
            }
        }
        for (zJzfjB = 1; zJzfjB <= ZPaDunhY -bWq9Loe; zJzfjB++) {
            if (kcFfnDqouCj[zJzfjB] > kcFfnDqouCj[zJzfjB + 1]) {
                CFwy7R0oaDg = kcFfnDqouCj[zJzfjB];
                kcFfnDqouCj[zJzfjB] = kcFfnDqouCj[zJzfjB + 1];
                kcFfnDqouCj[zJzfjB + 1] = CFwy7R0oaDg;
            }
        }
    }
    pRGKMQ59E61b (nkMWKPcimZR, kcFfnDqouCj, I25XfqFcGSs, ZPaDunhY);
}

void  GAeLmE0fuMbw (void ) {
    int bWq9Loe, nkMWKPcimZR [100], kcFfnDqouCj [100], I25XfqFcGSs, ZPaDunhY;
    scanf ("%d %d", &I25XfqFcGSs, &ZPaDunhY);
    {
        bWq9Loe = 1;
        for (; bWq9Loe <= I25XfqFcGSs;) {
            scanf ("%d", &nkMWKPcimZR[bWq9Loe]);
            bWq9Loe++;
        }
    }
    {
        bWq9Loe = 1;
        for (; bWq9Loe <= ZPaDunhY;) {
            scanf ("%d", &kcFfnDqouCj[bWq9Loe]);
            bWq9Loe++;
        }
    }
    yKyBjERk (nkMWKPcimZR, kcFfnDqouCj, I25XfqFcGSs, ZPaDunhY);
}

int main () {
    GAeLmE0fuMbw ();
    return (755 - 755);
}

