int main () {
    double  mv1Hx4Vf;
    int giQ23GkIz;
    int lwoRqXxPS [(100035 - 35)] = {(596 - 596)};
    int rNIpREDVdFX;
    int kSnxvBoL;
    double  xXLmpiYwfo;
    double  gXhof3MeOG;
    gXhof3MeOG = (751.0 - 751.0);
    mv1Hx4Vf = (638.0 - 638.0);
    giQ23GkIz = (395 - 395);
    cin >> kSnxvBoL;
    for (rNIpREDVdFX = (33 - 33); kSnxvBoL > rNIpREDVdFX; rNIpREDVdFX = rNIpREDVdFX + (826 - 825)) {
        cin >> lwoRqXxPS[rNIpREDVdFX];
        mv1Hx4Vf += lwoRqXxPS[rNIpREDVdFX];
    }
    xXLmpiYwfo = mv1Hx4Vf / kSnxvBoL;
    for (rNIpREDVdFX = (360 - 360); rNIpREDVdFX < kSnxvBoL; rNIpREDVdFX = rNIpREDVdFX + (619 - 618))
        if (fabs (xXLmpiYwfo - lwoRqXxPS[rNIpREDVdFX]) > gXhof3MeOG)
            gXhof3MeOG = fabs (xXLmpiYwfo - lwoRqXxPS[rNIpREDVdFX]);
    for (rNIpREDVdFX = (463 - 463); rNIpREDVdFX < kSnxvBoL; rNIpREDVdFX = rNIpREDVdFX + (678 - 677))
        if (fabs ((xXLmpiYwfo - lwoRqXxPS[rNIpREDVdFX]) - gXhof3MeOG) < (705.00001 - 705.0)) {
            cout << lwoRqXxPS[rNIpREDVdFX];
            giQ23GkIz = (657 - 656);
            break;
        }
    for (rNIpREDVdFX = (549 - 549); rNIpREDVdFX < kSnxvBoL; rNIpREDVdFX = rNIpREDVdFX + (749 - 748))
        if (fabs (lwoRqXxPS[rNIpREDVdFX] - xXLmpiYwfo - gXhof3MeOG) < 1e-5) {
            if (giQ23GkIz)
                cout << ",";
            cout << lwoRqXxPS[rNIpREDVdFX] << endl;
            break;
        }
    return 0;
}

