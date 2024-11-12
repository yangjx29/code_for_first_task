int main () {
    int HAtVL4yQ0nCb [100] [100];
    int eXSIzpBcO0x, bT4RodNPQE0a, nXWuDc3, ncbe7dvS, p, a81vxUTOfl, VtfRAP, WOriaoDRklMm;
    p = 0;
    nXWuDc3 = 0;
    scanf ("%d %d", &eXSIzpBcO0x, &bT4RodNPQE0a);
    {
        VtfRAP = 0;
        while (VtfRAP <= eXSIzpBcO0x - (773 - 772)) {
            {
                WOriaoDRklMm = 0;
                while (WOriaoDRklMm <= bT4RodNPQE0a - 1) {
                    scanf ("%d", &HAtVL4yQ0nCb[VtfRAP][WOriaoDRklMm]);
                    WOriaoDRklMm = WOriaoDRklMm +1;
                };
            }
            VtfRAP = VtfRAP +1;
        };
    }
    a81vxUTOfl = bT4RodNPQE0a - 1;
    ncbe7dvS = eXSIzpBcO0x - 1;
    while ((ncbe7dvS - nXWuDc3 > 1) && 1 < (a81vxUTOfl - p)) {
        {
            VtfRAP = p;
            while (VtfRAP <= a81vxUTOfl) {
                printf ("%d\n", HAtVL4yQ0nCb[nXWuDc3][VtfRAP]);
                VtfRAP = VtfRAP +1;
            };
        }
        {
            VtfRAP = nXWuDc3 + 1;
            while (VtfRAP <= ncbe7dvS) {
                printf ("%d\n", HAtVL4yQ0nCb[VtfRAP][a81vxUTOfl]);
                VtfRAP = VtfRAP +1;
            };
        }
        {
            VtfRAP = a81vxUTOfl - 1;
            while (VtfRAP >= p) {
                printf ("%d\n", HAtVL4yQ0nCb[ncbe7dvS][VtfRAP]);
                VtfRAP = VtfRAP -1;
            };
        }
        a81vxUTOfl = a81vxUTOfl - 1;
        {
            VtfRAP = ncbe7dvS - 1;
            while (VtfRAP >= nXWuDc3 + 1) {
                printf ("%d\n", HAtVL4yQ0nCb[VtfRAP][p]);
                VtfRAP = VtfRAP -1;
            };
        }
        nXWuDc3++;
        p = p + 1;
        ncbe7dvS = ncbe7dvS - 1;
    }
    if (ncbe7dvS == nXWuDc3) {
        VtfRAP = p;
        while (VtfRAP <= a81vxUTOfl) {
            printf ("%d\n", HAtVL4yQ0nCb[nXWuDc3][VtfRAP]);
            VtfRAP = VtfRAP +1;
        };
    }
    else if (ncbe7dvS == nXWuDc3 + 1) {
        {
            VtfRAP = p;
            while (VtfRAP <= a81vxUTOfl) {
                printf ("%d\n", HAtVL4yQ0nCb[nXWuDc3][VtfRAP]);
                VtfRAP = VtfRAP +1;
            };
        }
        for (VtfRAP = a81vxUTOfl; VtfRAP >= p; VtfRAP = VtfRAP -1)
            printf ("%d\n", HAtVL4yQ0nCb[ncbe7dvS][VtfRAP]);
    }
    else if (p == a81vxUTOfl) {
        VtfRAP = nXWuDc3;
        while (VtfRAP <= ncbe7dvS) {
            printf ("%d\n", HAtVL4yQ0nCb[VtfRAP][p]);
            VtfRAP = VtfRAP +1;
        };
    }
    else if (a81vxUTOfl == p + 1) {
        {
            VtfRAP = p;
            while (VtfRAP <= a81vxUTOfl) {
                printf ("%d\n", HAtVL4yQ0nCb[nXWuDc3][VtfRAP]);
                VtfRAP = VtfRAP +1;
            };
        }
        {
            VtfRAP = nXWuDc3 + 1;
            while (VtfRAP <= ncbe7dvS) {
                printf ("%d\n", HAtVL4yQ0nCb[VtfRAP][a81vxUTOfl]);
                VtfRAP++;
            };
        }
        for (VtfRAP = a81vxUTOfl - 1; VtfRAP >= p; VtfRAP--)
            printf ("%d\n", HAtVL4yQ0nCb[ncbe7dvS][VtfRAP]);
        {
            VtfRAP = ncbe7dvS - 1;
            while (VtfRAP >= nXWuDc3 + 1) {
                printf ("%d\n", HAtVL4yQ0nCb[VtfRAP][p]);
                VtfRAP = VtfRAP -1;
            };
        };
    }
    return 0;
}

