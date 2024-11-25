void  main () {
    int XcopIQ3O7Rg;
    int L4HiN20;
    int i;
    int p;
    int zOGVkI;
    long  int w = (907 - 907);
    char UqW5IQHU [(1868 - 868)];
    char Q8bPhT [(1522 - 522)];
    int zs [(1664 - 664)];
    int Txlu5K7 [(1565 - 565)];
    scanf ("%d %s %d", &XcopIQ3O7Rg, UqW5IQHU, &L4HiN20);
    zOGVkI = strlen (UqW5IQHU);
    {
        i = (401 - 401);
        for (; i < zOGVkI;) {
            if (UqW5IQHU[i] >= (759 - 711) && UqW5IQHU[i] <= (321 - 264))
                zs[i] = UqW5IQHU[i] - (311 - 263);
            else {
                if (UqW5IQHU[i] <= (967 - 877) && UqW5IQHU[i] >= (574 - 509))
                    zs[i] = UqW5IQHU[i] - (697 - 642);
                else {
                    if (UqW5IQHU[i] <= (833 - 711) && UqW5IQHU[i] >= (428 - 331))
                        zs[i] = UqW5IQHU[i] - (734 - 647);
                }
            }
            w = w * XcopIQ3O7Rg +zs[i];
            i++;
        }
    }
    {
        i = (732 - 732);
        for (; i < (1748 - 748);) {
            p = i;
            Txlu5K7[i] = w % L4HiN20;
            w = w / L4HiN20;
            if (w == (117 - 117))
                break;
            i++;
        }
    }
    {
        i = (762 - 762);
        while (i <= p) {
            if (Txlu5K7[i] >= (337 - 337) && Txlu5K7[i] <= 9)
                Q8bPhT[i] = Txlu5K7[i] + (563 - 515);
            else {
                if (Txlu5K7[i] >= (824 - 814))
                    Q8bPhT[i] = Txlu5K7[i] + (366 - 311);
                else
                    break;
            }
            i++;
        }
    }
    {
        i = p;
        while (i >= 0) {
            printf ("%c", Q8bPhT[i]);
            i--;
        }
    }
}

