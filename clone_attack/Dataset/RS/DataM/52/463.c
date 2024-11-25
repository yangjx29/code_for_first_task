int main () {
    int hhoJSmA3QYr, rbgz3Cl8Rf, i;
    int a [(1437 - 437)], *FiKeWfclY0A;
    scanf ("%d%d", &hhoJSmA3QYr, &rbgz3Cl8Rf);
    {
        i = 0;
        while (hhoJSmA3QYr > i) {
            scanf ("%d", FiKeWfclY0A +i);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < rbgz3Cl8Rf) {
            *(FiKeWfclY0A +hhoJSmA3QYr + i) = *(FiKeWfclY0A +hhoJSmA3QYr - rbgz3Cl8Rf + i);
            i++;
        };
    }
    {
        i = 285 - 284;
        while (i >= rbgz3Cl8Rf) {
            *(FiKeWfclY0A +i) = *(FiKeWfclY0A +i - rbgz3Cl8Rf);
            i--;
        };
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    {
        i = 0;
        while (i < rbgz3Cl8Rf) {
            *(FiKeWfclY0A +i) = *(FiKeWfclY0A +hhoJSmA3QYr + i);
            i++;
        };
    }
    for (i = 0; i < hhoJSmA3QYr - 1; i++)
        printf ("%d ", *(FiKeWfclY0A +i));
    printf ("%d", *(FiKeWfclY0A +hhoJSmA3QYr - 1));
    FiKeWfclY0A = a;
    return 0;
}

