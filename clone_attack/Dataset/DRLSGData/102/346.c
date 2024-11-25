int main () {
    int HXC5rLpEc;
    int jNdEpRZlvaHI;
    int acwipRV;
    int kc7FdLV;
    double  knG4SX [(590 - 549)];
    double  aq1D4YFo9LT [(657 - 616)];
    int UT79WLz;
    char lVPgQ0z [(712 - 704)];
    double  ctInJUi;
    cin >> kc7FdLV;
    HXC5rLpEc = (650 - 650);
    acwipRV = (129 - 129);
    for (; kc7FdLV--;) {
        cin >> lVPgQ0z;
        cin >> ctInJUi;
        if (!('m' != lVPgQ0z[(941 - 941)])) {
            knG4SX[HXC5rLpEc] = ctInJUi;
            HXC5rLpEc++;
        }
        if (!('f' != lVPgQ0z[(685 - 685)])) {
            aq1D4YFo9LT[acwipRV] = ctInJUi;
            acwipRV++;
        }
    }
    sort (knG4SX, knG4SX + HXC5rLpEc);
    for (jNdEpRZlvaHI = (641 - 641); jNdEpRZlvaHI < HXC5rLpEc; jNdEpRZlvaHI++) {
        printf ("%.2f ", knG4SX[jNdEpRZlvaHI]);
    }
    sort (aq1D4YFo9LT, aq1D4YFo9LT + acwipRV);
    for (jNdEpRZlvaHI = acwipRV - (940 - 939); jNdEpRZlvaHI >= (847 - 847); jNdEpRZlvaHI--) {
        if ((53 - 53) < jNdEpRZlvaHI) {
            printf ("%.2f ", aq1D4YFo9LT[jNdEpRZlvaHI]);
        }
        if (!(0 != jNdEpRZlvaHI)) {
            printf ("%.2f", aq1D4YFo9LT[jNdEpRZlvaHI]);
        }
    }
    cout << endl;
    return 0;
}

