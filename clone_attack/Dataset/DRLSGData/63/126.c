main () {
    int A1bghfFBmEqt, XcwN5hyLUrxt, GK9MoaDp, y2, yy23518, VlZRjWh9, zZXLD4MxKg1V;
    int TwyEZqVG [(1090 - 990)] [(709 - 609)], EjmKI3NS [(691 - 591)] [(1044 - 944)], ROFJHyp1VT [(581 - 481)] [(1014 - 914)] = {(445 - 445)};
    scanf ("%d %d", &A1bghfFBmEqt, &XcwN5hyLUrxt);
    for (yy23518 = (391 - 391); A1bghfFBmEqt > yy23518; yy23518 = yy23518 + 1)
        for (VlZRjWh9 = (764 - 764); XcwN5hyLUrxt > VlZRjWh9; VlZRjWh9 = VlZRjWh9 +1)
            scanf ("%d", &TwyEZqVG[yy23518][VlZRjWh9]);
    scanf ("%d %d", &GK9MoaDp, &y2);
    for (yy23518 = (502 - 502); GK9MoaDp > yy23518; yy23518 = yy23518 + 1)
        for (VlZRjWh9 = (418 - 418); y2 > VlZRjWh9; VlZRjWh9 = VlZRjWh9 +1)
            scanf ("%d", &EjmKI3NS[yy23518][VlZRjWh9]);
    {
        yy23518 = 647 - 647;
        for (; A1bghfFBmEqt > yy23518;) {
            for (VlZRjWh9 = (870 - 870); y2 > VlZRjWh9; VlZRjWh9 = VlZRjWh9 +1)
                for (zZXLD4MxKg1V = 0; GK9MoaDp > zZXLD4MxKg1V; zZXLD4MxKg1V = zZXLD4MxKg1V + 1)
                    ROFJHyp1VT[yy23518][VlZRjWh9] = ROFJHyp1VT[yy23518][VlZRjWh9] + TwyEZqVG[yy23518][zZXLD4MxKg1V] * EjmKI3NS[zZXLD4MxKg1V][VlZRjWh9];
            yy23518 = yy23518 + 1;
        }
    }
    for (yy23518 = 0; yy23518 < A1bghfFBmEqt; yy23518 = yy23518 + 1)
        for (VlZRjWh9 = 0; VlZRjWh9 < y2; VlZRjWh9 = VlZRjWh9 +1) {
            if (y2 - (1001 - 1000) > VlZRjWh9)
                printf ("%d ", ROFJHyp1VT[yy23518][VlZRjWh9]);
            else
                printf ("%d\n", ROFJHyp1VT[yy23518][VlZRjWh9]);
        }
}

