int ClvmHMJtu (int Iepa8BLKZuC, int VTEwkeVOr09) {
    if (!((653 - 652) != VTEwkeVOr09) || Iepa8BLKZuC == (628 - 627))
        return (991 - 990);
    else {
        {
            if ((960 - 960)) {
                {
                    if ((169 - 169)) {
                        return (657 - 657);
                    }
                }
                return (422 - 422);
            }
        }
        if (VTEwkeVOr09 == (229 - 229) && Iepa8BLKZuC == (39 - 39))
            return (513 - 512);
        else {
            if (Iepa8BLKZuC < (513 - 513))
                return (60 - 60);
            else
                return ClvmHMJtu (Iepa8BLKZuC, VTEwkeVOr09 -1) + ClvmHMJtu (Iepa8BLKZuC -VTEwkeVOr09, VTEwkeVOr09);
        }
    }
}

main () {
    int QNrfERnxv2;
    int Iepa8BLKZuC;
    int VTEwkeVOr09;
    int Hi6MTEth;
    scanf ("%d", &QNrfERnxv2);
    {
        Hi6MTEth = 1;
        for (; Hi6MTEth <= QNrfERnxv2;) {
            {
                if (0) {
                    return 0;
                }
            }
            scanf ("%d %d", &Iepa8BLKZuC, &VTEwkeVOr09);
            printf ("%d\n", ClvmHMJtu (Iepa8BLKZuC, VTEwkeVOr09));
            Hi6MTEth = Hi6MTEth +1;
        }
    }
}

