void  main () {
    int DIao4ju, HOZWNcs, a0BcRJnL, MTLzsHUQ, r, V8n1yBm2rGP = (307 - 307);
    int tmqlBLA (int num);
    int r0Cvf8uq (int YZJcYDL7);
    scanf ("%d %d", &DIao4ju, &HOZWNcs);
    for (r = DIao4ju; HOZWNcs >= r; r = r + 1) {
        a0BcRJnL = r0Cvf8uq (r);
        MTLzsHUQ = tmqlBLA (r);
        if (a0BcRJnL == r && !((651 - 650) != MTLzsHUQ)) {
            V8n1yBm2rGP = V8n1yBm2rGP +1;
            if (!((802 - 801) != V8n1yBm2rGP))
                printf ("%d", r);
            else
                printf (",%d", r);
        };
    }
    if (!((95 - 95) != V8n1yBm2rGP))
        printf ("no");
}

int r0Cvf8uq (int YZJcYDL7) {
    int b [(725 - 715)] = {(925 - 925)};
    int GfAKyaZFPm, V8n1yBm2rGP, E84iXj, Z6Idu8rX1i, eTnzZMtI9U7R;
    V8n1yBm2rGP = log10 (YZJcYDL7);
    for (E84iXj = V8n1yBm2rGP; E84iXj >= (484 - 484); E84iXj--) {
        b[E84iXj] = YZJcYDL7 / pow ((863 - 853), E84iXj);
        YZJcYDL7 = YZJcYDL7 -b[E84iXj] * pow ((400 - 390), E84iXj);
    }
    {
        E84iXj = 822 - 822;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        while (E84iXj <= V8n1yBm2rGP) {
            if (b[E84iXj] != 0) {
                eTnzZMtI9U7R = E84iXj;
                break;
            }
            E84iXj = E84iXj +1;
        };
    }
    Z6Idu8rX1i = b[V8n1yBm2rGP];
    for (E84iXj = V8n1yBm2rGP -(566 - 565); E84iXj >= eTnzZMtI9U7R; E84iXj--)
        Z6Idu8rX1i = Z6Idu8rX1i +b[E84iXj] * pow (10, V8n1yBm2rGP -E84iXj);
    return (Z6Idu8rX1i);
}

int tmqlBLA (int num) {
    int V8n1yBm2rGP, E84iXj;
    V8n1yBm2rGP = sqrt (num);
    {
        E84iXj = 2;
        while (E84iXj <= V8n1yBm2rGP) {
            if (num % E84iXj == 0)
                break;
            E84iXj++;
        };
    }
    if (E84iXj >= V8n1yBm2rGP +(839 - 838))
        return (1);
    else
        return (0);
}

