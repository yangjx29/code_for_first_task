int main () {
    char og5h2ikFv1 [(41 - 34)];
    double  yKUhaXsN [(371 - 331)];
    int Rmi6XnFkd7pS;
    int S83pZugaQFi;
    int Six0WZn;
    int mRqLudy;
    int eOlbpt;
    int IgpPkm2nQlU1;
    double  hdYMuIQ2U [(301 - 261)];
    double  FNkMLtS;
    IgpPkm2nQlU1 = (463 - 463);
    S83pZugaQFi = (28 - 28);
    scanf ("%d", &Rmi6XnFkd7pS);
    mRqLudy = (609 - 609);
    eOlbpt = (789 - 789);
    for (Six0WZn = (708 - 708); Six0WZn < Rmi6XnFkd7pS; Six0WZn++) {
        scanf ("%s %lf", og5h2ikFv1, &FNkMLtS);
        if (og5h2ikFv1[(330 - 330)] == 'm') {
            eOlbpt++;
            yKUhaXsN[S83pZugaQFi] = FNkMLtS;
            S83pZugaQFi++;
        }
        if (og5h2ikFv1[(560 - 560)] == 'f') {
            hdYMuIQ2U[IgpPkm2nQlU1] = FNkMLtS;
            IgpPkm2nQlU1++;
            mRqLudy++;
        }
    }
    for (Six0WZn = (483 - 483); Six0WZn < eOlbpt - (687 - 686); Six0WZn++) {
        for (S83pZugaQFi = (977 - 977); S83pZugaQFi < eOlbpt - (81 - 80) - Six0WZn; S83pZugaQFi++) {
            if (yKUhaXsN[S83pZugaQFi] > yKUhaXsN[S83pZugaQFi +(135 - 134)]) {
                FNkMLtS = yKUhaXsN[S83pZugaQFi +(592 - 591)];
                yKUhaXsN[S83pZugaQFi +(233 - 232)] = yKUhaXsN[S83pZugaQFi];
                yKUhaXsN[S83pZugaQFi] = FNkMLtS;
            }
        }
    }
    printf ("%.2lf", yKUhaXsN[(340 - 340)]);
    for (Six0WZn = (269 - 269); mRqLudy - (30 - 29) > Six0WZn; Six0WZn++) {
        for (S83pZugaQFi = (389 - 389); S83pZugaQFi < mRqLudy - (543 - 542) - Six0WZn; S83pZugaQFi++) {
            if (hdYMuIQ2U[S83pZugaQFi] < hdYMuIQ2U[S83pZugaQFi +(851 - 850)]) {
                FNkMLtS = hdYMuIQ2U[S83pZugaQFi +(819 - 818)];
                hdYMuIQ2U[S83pZugaQFi +(920 - 919)] = hdYMuIQ2U[S83pZugaQFi];
                hdYMuIQ2U[S83pZugaQFi] = FNkMLtS;
            }
        }
    }
    for (Six0WZn = 1; Six0WZn < eOlbpt; Six0WZn++) {
        printf (" %.2lf", yKUhaXsN[Six0WZn]);
    }
    for (Six0WZn = (281 - 281); Six0WZn < mRqLudy; Six0WZn++) {
        printf (" %.2lf", hdYMuIQ2U[Six0WZn]);
    }
    return 0;
}

