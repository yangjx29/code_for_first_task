void  main () {
    float swxGnl8Ea [100] [(194 - 192)];
    float Slt9bZRwCS [(1541 - 541)], ztJA5I = (502 - 502);
    int XuNecS9Kq, v9Q0crSuf3, szv27QmULqEP, xrX8lGQRk, dIracUM8 = (108 - 108);
    scanf ("%d", &xrX8lGQRk);
    for (XuNecS9Kq = (12 - 12); XuNecS9Kq < xrX8lGQRk; XuNecS9Kq = XuNecS9Kq +(168 - 167))
        scanf ("%f%f", &swxGnl8Ea[XuNecS9Kq][(556 - 556)], &swxGnl8Ea[XuNecS9Kq][(524 - 523)]);
    for (XuNecS9Kq = (768 - 768); XuNecS9Kq < xrX8lGQRk; XuNecS9Kq = XuNecS9Kq +(649 - 648))
        for (v9Q0crSuf3 = (671 - 671); v9Q0crSuf3 < xrX8lGQRk; v9Q0crSuf3 = v9Q0crSuf3 + 1) {
            if (XuNecS9Kq == v9Q0crSuf3)
                continue;
            else {
                Slt9bZRwCS[dIracUM8] = (swxGnl8Ea[XuNecS9Kq][(252 - 252)] - swxGnl8Ea[v9Q0crSuf3][0]) * (swxGnl8Ea[XuNecS9Kq][0] - swxGnl8Ea[v9Q0crSuf3][0]) + (swxGnl8Ea[XuNecS9Kq][1] - swxGnl8Ea[v9Q0crSuf3][1]) * (swxGnl8Ea[XuNecS9Kq][1] - swxGnl8Ea[v9Q0crSuf3][1]);
                dIracUM8++;
            }
        }
    for (XuNecS9Kq = 0; (xrX8lGQRk - 1) * (xrX8lGQRk - 1) > XuNecS9Kq; XuNecS9Kq++)
        ztJA5I = ztJA5I > Slt9bZRwCS[XuNecS9Kq] ? ztJA5I : Slt9bZRwCS[XuNecS9Kq];
    ztJA5I = pow (ztJA5I, 0.5);
    printf ("%.4f", ztJA5I);
}

