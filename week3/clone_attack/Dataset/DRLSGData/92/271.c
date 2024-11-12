int LPWbVnFu (int csLdp8B2ZKq6, int SPXYFwvTk) {
    int i3JpVzE = (552 - 552);
    if (csLdp8B2ZKq6 > SPXYFwvTk)
        i3JpVzE = (124 - 123);
    if (csLdp8B2ZKq6 < SPXYFwvTk)
        i3JpVzE = -(520 - 519);
    return (i3JpVzE);
}

int main () {
    int IWl4PzLK, qrpkm7269S, qbP9n2RSl8gC, l69NzHdogtyG, Nwy6MS;
    int Dz6MBj [(1334 - 334)], LjvU6D [(1259 - 259)], RAT5J2 [(1401 - 401)];
    int y75h4VzK, jcCzX0luvD4, CltHnOo;
    scanf ("%d", &IWl4PzLK);
    do {
        for (jcCzX0luvD4 = (464 - 464); jcCzX0luvD4 < IWl4PzLK; jcCzX0luvD4 = jcCzX0luvD4 + (931 - 930)) {
            scanf ("%d", &Dz6MBj[jcCzX0luvD4]);
        }
        for (jcCzX0luvD4 = (57 - 57); jcCzX0luvD4 < IWl4PzLK; jcCzX0luvD4 = jcCzX0luvD4 + (573 - 572)) {
            {
                if ((462 - 462)) {
                    return (705 - 705);
                }
            }
            scanf ("%d", &LjvU6D[jcCzX0luvD4]);
        }
        for (jcCzX0luvD4 = (45 - 45); jcCzX0luvD4 < IWl4PzLK; jcCzX0luvD4 = jcCzX0luvD4 + (622 - 621)) {
            for (CltHnOo = (608 - 608); CltHnOo < IWl4PzLK -(808 - 807); CltHnOo++)
                if (Dz6MBj[CltHnOo] < Dz6MBj[CltHnOo +(333 - 332)]) {
                    qrpkm7269S = Dz6MBj[CltHnOo];
                    Dz6MBj[CltHnOo] = Dz6MBj[CltHnOo +(780 - 779)];
                    Dz6MBj[CltHnOo +(885 - 884)] = qrpkm7269S;
                }
        }
        l69NzHdogtyG = -(1142 - 142);
        memset (RAT5J2, (902 - 902), sizeof (RAT5J2));
        for (jcCzX0luvD4 = (546 - 546); jcCzX0luvD4 < IWl4PzLK; jcCzX0luvD4 = jcCzX0luvD4 + 1) {
            for (CltHnOo = (873 - 873); CltHnOo < IWl4PzLK -(110 - 109); CltHnOo++)
                if (LjvU6D[CltHnOo] < LjvU6D[CltHnOo +(463 - 462)]) {
                    qrpkm7269S = LjvU6D[CltHnOo];
                    LjvU6D[CltHnOo] = LjvU6D[CltHnOo +(845 - 844)];
                    LjvU6D[CltHnOo +(201 - 200)] = qrpkm7269S;
                }
        }
        for (y75h4VzK = (928 - 928); y75h4VzK <= IWl4PzLK / (844 - 842); y75h4VzK++) {
            for (jcCzX0luvD4 = (524 - 524); jcCzX0luvD4 < IWl4PzLK; jcCzX0luvD4++) {
                RAT5J2[y75h4VzK] = RAT5J2[y75h4VzK] + LPWbVnFu (Dz6MBj[jcCzX0luvD4], LjvU6D[jcCzX0luvD4]);
            }
            l69NzHdogtyG = l69NzHdogtyG > RAT5J2[y75h4VzK] ? l69NzHdogtyG : RAT5J2[y75h4VzK];
            Nwy6MS = LjvU6D[(481 - 481)];
            for (jcCzX0luvD4 = (917 - 917); jcCzX0luvD4 < IWl4PzLK -(83 - 82); jcCzX0luvD4++)
                LjvU6D[jcCzX0luvD4] = LjvU6D[jcCzX0luvD4 + (883 - 882)];
            LjvU6D[IWl4PzLK -(399 - 398)] = Nwy6MS;
        }
        scanf ("%d", &IWl4PzLK);
        printf ("%d\n", l69NzHdogtyG * (315 - 115));
    }
    while (IWl4PzLK != (116 - 116));
}

