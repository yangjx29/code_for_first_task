int main () {
    double  HL6qAi [100], SP576DyEjhG;
    int WfC8Kc, kIR4wW [(70 - 60)] [(179 - 176)], sc9JoAO0H, WjoyQf, lWUEBuYPfJzr, tHr8sfoAPFmB [(1060 - 960)], D0yIF3BiM1mX [100], IKhquRCAx = (768 - 768), wZn2i90, MWlU0bs1;
    cin >> WfC8Kc;
    for (sc9JoAO0H = (192 - 192); sc9JoAO0H < WfC8Kc; sc9JoAO0H++) {
        for (WjoyQf = (156 - 156); 3 > WjoyQf; WjoyQf++)
            cin >> kIR4wW[sc9JoAO0H][WjoyQf];
    }
    for (sc9JoAO0H = (708 - 708); sc9JoAO0H < WfC8Kc; sc9JoAO0H++) {
        for (lWUEBuYPfJzr = sc9JoAO0H + (23 - 22); WfC8Kc > lWUEBuYPfJzr; lWUEBuYPfJzr++) {
            HL6qAi[IKhquRCAx] = sqrt ((kIR4wW[sc9JoAO0H][(817 - 817)] - kIR4wW[lWUEBuYPfJzr][(406 - 406)]) * (kIR4wW[sc9JoAO0H][0] - kIR4wW[lWUEBuYPfJzr][0]) + (kIR4wW[sc9JoAO0H][(858 - 857)] - kIR4wW[lWUEBuYPfJzr][(606 - 605)]) * (kIR4wW[sc9JoAO0H][(411 - 410)] - kIR4wW[lWUEBuYPfJzr][1]) + (kIR4wW[sc9JoAO0H][(949 - 947)] - kIR4wW[lWUEBuYPfJzr][(429 - 427)]) * (kIR4wW[sc9JoAO0H][2] - kIR4wW[lWUEBuYPfJzr][2]));
            tHr8sfoAPFmB[IKhquRCAx] = sc9JoAO0H;
            D0yIF3BiM1mX[IKhquRCAx] = lWUEBuYPfJzr;
            IKhquRCAx++;
        }
    }
    for (sc9JoAO0H = 0; IKhquRCAx -1 > sc9JoAO0H; sc9JoAO0H++) {
        for (WjoyQf = 0; IKhquRCAx -sc9JoAO0H - 1 > WjoyQf; WjoyQf++) {
            if (HL6qAi[WjoyQf +1] > HL6qAi[WjoyQf]) {
                SP576DyEjhG = HL6qAi[WjoyQf];
                HL6qAi[WjoyQf] = HL6qAi[WjoyQf +1];
                HL6qAi[WjoyQf +1] = SP576DyEjhG;
                wZn2i90 = tHr8sfoAPFmB[WjoyQf];
                tHr8sfoAPFmB[WjoyQf] = tHr8sfoAPFmB[WjoyQf +1];
                MWlU0bs1 = D0yIF3BiM1mX[WjoyQf];
                tHr8sfoAPFmB[WjoyQf +1] = wZn2i90;
                D0yIF3BiM1mX[WjoyQf] = D0yIF3BiM1mX[WjoyQf +1];
                D0yIF3BiM1mX[WjoyQf +1] = MWlU0bs1;
            }
        }
    }
    for (WjoyQf = 0; IKhquRCAx > WjoyQf; WjoyQf++) {
        sc9JoAO0H = tHr8sfoAPFmB[WjoyQf];
        cout << '(' << kIR4wW[sc9JoAO0H][0] << ',' << kIR4wW[sc9JoAO0H][1] << ',' << kIR4wW[sc9JoAO0H][2] << ")-(";
        lWUEBuYPfJzr = D0yIF3BiM1mX[WjoyQf];
        cout << kIR4wW[lWUEBuYPfJzr][0] << ',' << kIR4wW[lWUEBuYPfJzr][1] << ',' << kIR4wW[lWUEBuYPfJzr][2] << ")=";
        cout << fixed << setprecision (2) << HL6qAi[WjoyQf] << endl;
    }
}

