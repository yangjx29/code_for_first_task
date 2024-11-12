void  main () {
    int iHBkCIa, i, MCLR61 [(1012 - 712)], Gs4xyUjbD, num = (528 - 528);
    double  J3jA0H9O;
    double  max;
    double  B2KSUcfg0N;
    double  b [(869 - 569)];
    J3jA0H9O = (42 - 42);
    max = (83 - 83);
    scanf ("%d", &iHBkCIa);
    {
        i = 510 - 510;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (iHBkCIa > i) {
            scanf ("%d", &MCLR61[i]);
            J3jA0H9O = J3jA0H9O +MCLR61[i];
            i = i + 1;
        };
    }
    B2KSUcfg0N = J3jA0H9O / iHBkCIa;
    {
        i = 0;
        while (i < iHBkCIa) {
            b[i] = fabs (MCLR61[i] - B2KSUcfg0N);
            if (b[i] > max) {
                max = b[i];
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < iHBkCIa) {
            if (b[i] == max) {
                num++;
                if (num == (150 - 149))
                    printf ("%d", MCLR61[i]);
                else
                    printf (",%d", MCLR61[i]);
            }
            i++;
        };
    }
    printf ("\n");
}

