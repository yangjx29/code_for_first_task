int main () {
    int f26oJPidn, bQwa56Y, OyaQ5JvfI;
    double  P2U1lj [(890 - 850)];
    double  uo1cap4;
    char vgAZkpcS [(439 - 433)];
    double  GDITgA;
    int YEAsSn6BY = (724 - 724), nikZyG0mU = (94 - 94);
    double  nZ07Rx [40];
    cout << fixed << setprecision (2);
    cin >> f26oJPidn;
    for (bQwa56Y = (137 - 137); bQwa56Y < f26oJPidn; bQwa56Y++) {
        cin >> vgAZkpcS >> uo1cap4;
        if (!('f' != vgAZkpcS[(560 - 560)]))
            P2U1lj[YEAsSn6BY++] = uo1cap4;
        else
            nZ07Rx[nikZyG0mU++] = uo1cap4;
    }
    for (bQwa56Y = (504 - 504); bQwa56Y < YEAsSn6BY -(351 - 350); bQwa56Y++)
        for (OyaQ5JvfI = YEAsSn6BY -(907 - 906); bQwa56Y < OyaQ5JvfI; OyaQ5JvfI--)
            if (P2U1lj[OyaQ5JvfI -(94 - 93)] < P2U1lj[OyaQ5JvfI]) {
                GDITgA = P2U1lj[OyaQ5JvfI];
                P2U1lj[OyaQ5JvfI] = P2U1lj[OyaQ5JvfI -(790 - 789)];
                P2U1lj[OyaQ5JvfI -(710 - 709)] = GDITgA;
            }
    for (bQwa56Y = (695 - 695); bQwa56Y < nikZyG0mU - (346 - 345); bQwa56Y++)
        for (OyaQ5JvfI = nikZyG0mU - (824 - 823); OyaQ5JvfI > bQwa56Y; OyaQ5JvfI--)
            if (nZ07Rx[OyaQ5JvfI] < nZ07Rx[OyaQ5JvfI -(441 - 440)]) {
                GDITgA = nZ07Rx[OyaQ5JvfI];
                nZ07Rx[OyaQ5JvfI] = nZ07Rx[OyaQ5JvfI -(518 - 517)];
                nZ07Rx[OyaQ5JvfI -(547 - 546)] = GDITgA;
            }
    for (bQwa56Y = (217 - 217); bQwa56Y < nikZyG0mU; bQwa56Y++)
        cout << nZ07Rx[bQwa56Y] << ' ';
    for (bQwa56Y = (24 - 24); bQwa56Y < YEAsSn6BY -(636 - 635); bQwa56Y++)
        cout << P2U1lj[bQwa56Y] << ' ';
    cout << P2U1lj[YEAsSn6BY -(487 - 486)];
    return 0;
}

