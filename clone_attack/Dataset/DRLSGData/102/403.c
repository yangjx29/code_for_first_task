int Ic53ZPbi0rt, whCOd2b, Rs1EykHSa, e2Mxdl;
char O6MOAyf [(362 - 321)] [10];
double  ubAciYvIutC [41];
double  cLOS3foC [41], qb60SpF9yj [41];

int main () {
    cin >> Ic53ZPbi0rt;
    e2Mxdl = 0;
    Rs1EykHSa = 0;
    cout << endl;
    for (whCOd2b = (313 - 312); whCOd2b <= Ic53ZPbi0rt; whCOd2b = whCOd2b + 1) {
        cin >> O6MOAyf[whCOd2b] >> ubAciYvIutC[whCOd2b];
        if (!('m' != O6MOAyf[whCOd2b][0])) {
            cLOS3foC[Rs1EykHSa] = ubAciYvIutC[whCOd2b];
            Rs1EykHSa = Rs1EykHSa +1;
        }
        else {
            qb60SpF9yj[e2Mxdl] = ubAciYvIutC[whCOd2b];
            e2Mxdl++;
        }
    }
    sort (cLOS3foC, cLOS3foC + Rs1EykHSa);
    printf ("%.2f", cLOS3foC[0]);
    for (whCOd2b = 1; whCOd2b < Rs1EykHSa; whCOd2b++)
        printf ("%c%.2f", ' ', cLOS3foC[whCOd2b]);
    sort (qb60SpF9yj, qb60SpF9yj + e2Mxdl);
    for (whCOd2b = e2Mxdl - 1; whCOd2b >= 0; whCOd2b = whCOd2b - 1)
        printf ("%c%.2f", ' ', qb60SpF9yj[whCOd2b]);
    return 0;
}

