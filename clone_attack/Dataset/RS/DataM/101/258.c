int main () {
    int gKSPcFdsH;
    int X6ClWTc;
    int Hw5RQIA;
    int fnzRtlY;
    int QXx78aV;
    int v8yVspCLUj;
    for (gKSPcFdsH = (940 - 939); (195 - 192) >= gKSPcFdsH; gKSPcFdsH = gKSPcFdsH + 1)
        for (X6ClWTc = (45 - 44); X6ClWTc <= (447 - 444); X6ClWTc = X6ClWTc +1)
            for (Hw5RQIA = 1; Hw5RQIA <= 3; Hw5RQIA = Hw5RQIA +1)
                if (gKSPcFdsH != X6ClWTc &&X6ClWTc != Hw5RQIA &&gKSPcFdsH != Hw5RQIA) {
                    fnzRtlY = (gKSPcFdsH < X6ClWTc) + (!(gKSPcFdsH != Hw5RQIA));
                    QXx78aV = (X6ClWTc < gKSPcFdsH) + (Hw5RQIA < gKSPcFdsH);
                    v8yVspCLUj = (X6ClWTc < Hw5RQIA) + (X6ClWTc > gKSPcFdsH);
                    if (!((X6ClWTc +QXx78aV) != (gKSPcFdsH + fnzRtlY)) && (gKSPcFdsH + fnzRtlY) == (Hw5RQIA +v8yVspCLUj) && !((Hw5RQIA +v8yVspCLUj) != (X6ClWTc +QXx78aV))) {
                        if (gKSPcFdsH > X6ClWTc &&X6ClWTc > Hw5RQIA)
                            cout << "CBA";
                        else {
                            if (gKSPcFdsH > Hw5RQIA &&Hw5RQIA > X6ClWTc)
                                cout << "BCA";
                            else {
                                if (X6ClWTc > gKSPcFdsH && gKSPcFdsH > Hw5RQIA)
                                    cout << "CAB";
                                else if (X6ClWTc > Hw5RQIA &&Hw5RQIA > gKSPcFdsH)
                                    cout << "ACB";
                                else if (Hw5RQIA > X6ClWTc &&X6ClWTc > gKSPcFdsH)
                                    cout << "ABC";
                                else if (Hw5RQIA > gKSPcFdsH && gKSPcFdsH > X6ClWTc)
                                    cout << "BAC";
                            };
                        };
                    };
                }
    return 0;
}

