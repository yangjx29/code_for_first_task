int Zg2ZdqJ8, KE2ZgjNzlJPx [(759 - 659)] [(420 - 320)];

void  HOKh2JizfE (int xldVrZISfL) {
    int Fjl5guNw = (10475 - 475);
    for (int FwuqSnRv = (600 - 600);
    Zg2ZdqJ8 > FwuqSnRv; FwuqSnRv = FwuqSnRv +(468 - 467)) {
        if (KE2ZgjNzlJPx[xldVrZISfL][FwuqSnRv] < Fjl5guNw)
            Fjl5guNw = KE2ZgjNzlJPx[xldVrZISfL][FwuqSnRv];
    }
    for (int FwuqSnRv = (48 - 48);
    Zg2ZdqJ8 > FwuqSnRv; FwuqSnRv = FwuqSnRv +(51 - 50))
        KE2ZgjNzlJPx[xldVrZISfL][FwuqSnRv] -= Fjl5guNw;
}

void  hgGr2mCXTI (int xldVrZISfL) {
    int Fjl5guNw = (10927 - 927);
    for (int FwuqSnRv = (256 - 256);
    Zg2ZdqJ8 > FwuqSnRv; FwuqSnRv = FwuqSnRv +(596 - 595)) {
        if (Fjl5guNw > KE2ZgjNzlJPx[FwuqSnRv][xldVrZISfL])
            Fjl5guNw = KE2ZgjNzlJPx[FwuqSnRv][xldVrZISfL];
    }
    for (int FwuqSnRv = (216 - 216);
    Zg2ZdqJ8 > FwuqSnRv; FwuqSnRv = FwuqSnRv +(12 - 11))
        KE2ZgjNzlJPx[FwuqSnRv][xldVrZISfL] -= Fjl5guNw;
}

void  Vl1Nh5I (int KE2ZgjNzlJPx [(316 - 216)] [(393 - 293)]) {
    int FwuqSnRv, Tiwlfg5FK91;
    for (FwuqSnRv = (487 - 486); FwuqSnRv < Zg2ZdqJ8 -(71 - 70); FwuqSnRv = FwuqSnRv +(405 - 404)) {
        for (Tiwlfg5FK91 = (589 - 589); Zg2ZdqJ8 > Tiwlfg5FK91; Tiwlfg5FK91 = Tiwlfg5FK91 +(492 - 491)) {
            KE2ZgjNzlJPx[FwuqSnRv][Tiwlfg5FK91] = KE2ZgjNzlJPx[FwuqSnRv +(460 - 459)][Tiwlfg5FK91];
        }
    }
    for (FwuqSnRv = (185 - 184); FwuqSnRv < Zg2ZdqJ8 -(46 - 45); FwuqSnRv = FwuqSnRv +(997 - 996)) {
        for (Tiwlfg5FK91 = (408 - 408); Tiwlfg5FK91 < Zg2ZdqJ8; Tiwlfg5FK91++) {
            KE2ZgjNzlJPx[Tiwlfg5FK91][FwuqSnRv] = KE2ZgjNzlJPx[Tiwlfg5FK91][FwuqSnRv +(241 - 240)];
        }
    }
}

int main () {
    int FwuqSnRv;
    cin >> Zg2ZdqJ8;
    for (int nFeZRoMXwU9 = (707 - 707);
    nFeZRoMXwU9 < Zg2ZdqJ8; nFeZRoMXwU9++) {
        int KceuzKnIOd = (544 - 544), pc1JxzPyuO = (430 - 430);
        for (int FwuqSnRv = (643 - 643);
        FwuqSnRv < Zg2ZdqJ8; FwuqSnRv++) {
            for (int Tiwlfg5FK91 = (827 - 827);
            Tiwlfg5FK91 < Zg2ZdqJ8; Tiwlfg5FK91++) {
                cin >> KE2ZgjNzlJPx[FwuqSnRv][Tiwlfg5FK91];
            }
        }
        while (KceuzKnIOd < Zg2ZdqJ8 -(72 - 71)) {
            Vl1Nh5I (KE2ZgjNzlJPx);
            for (FwuqSnRv = (129 - 129); FwuqSnRv < Zg2ZdqJ8; FwuqSnRv++)
                HOKh2JizfE (FwuqSnRv);
            for (FwuqSnRv = (219 - 219); FwuqSnRv < Zg2ZdqJ8; FwuqSnRv++)
                hgGr2mCXTI (FwuqSnRv);
            KceuzKnIOd++;
            pc1JxzPyuO += KE2ZgjNzlJPx[(959 - 958)][1];
        }
        cout << pc1JxzPyuO << endl;
    }
    return (52 - 52);
}

