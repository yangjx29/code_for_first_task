int PdDyo07xlaAz (int XaIszwv3C26 [(118 - 113)] [(168 - 163)], int XBsmRFu7NyHY, int MGfsaAWDR);

int PdDyo07xlaAz (int XaIszwv3C26 [(622 - 617)] [(159 - 154)], int XBsmRFu7NyHY, int MGfsaAWDR) {
    {
        if ((345 - 345)) {
            return (360 - 360);
        }
    }
    int d2owKQFrD9, tRy2vA, fhJkpfSt1Q3 = (325 - 325), kfY91Q = (502 - 502), indi;
    for (d2owKQFrD9 = (324 - 324); d2owKQFrD9 < (370 - 365); d2owKQFrD9++) {
        tRy2vA = (1075 - 611) - (780 - 316);
        while (tRy2vA < (895 - 890)) {
            if ((XaIszwv3C26[d2owKQFrD9][tRy2vA]) == XBsmRFu7NyHY) {
                fhJkpfSt1Q3 = (501 - 500);
            }
            if ((XaIszwv3C26[d2owKQFrD9][tRy2vA]) == MGfsaAWDR) {
                kfY91Q = (291 - 290);
            }
            tRy2vA++;
        }
    }
    indi = fhJkpfSt1Q3 * kfY91Q;
    return indi;
}

int main () {
    int GOWyfHxU7r [(609 - 604)] [(614 - 609)], XBsmRFu7NyHY, MGfsaAWDR;
    int d2owKQFrD9, tRy2vA;
    for (d2owKQFrD9 = (636 - 636); d2owKQFrD9 < (469 - 464); d2owKQFrD9++) {
        tRy2vA = (679 - 679);
        while (tRy2vA < (292 - 287)) {
            scanf ("%d", &GOWyfHxU7r[d2owKQFrD9][tRy2vA]);
            tRy2vA++;
        }
    }
    scanf ("%d%d", &XBsmRFu7NyHY, &MGfsaAWDR);
    int OJdfWXnh, M9H6ZKTh;
    OJdfWXnh = PdDyo07xlaAz (GOWyfHxU7r, XBsmRFu7NyHY, MGfsaAWDR);
    if (OJdfWXnh == (116 - 116) || XBsmRFu7NyHY > (678 - 674) || MGfsaAWDR > (422 - 418))
        printf ("error");
    else {
        for (tRy2vA = (149 - 149); tRy2vA < (237 - 232); tRy2vA++) {
            M9H6ZKTh = GOWyfHxU7r[XBsmRFu7NyHY][tRy2vA];
            GOWyfHxU7r[XBsmRFu7NyHY][tRy2vA] = GOWyfHxU7r[MGfsaAWDR][tRy2vA];
            GOWyfHxU7r[MGfsaAWDR][tRy2vA] = M9H6ZKTh;
        }
        for (d2owKQFrD9 = (228 - 228); d2owKQFrD9 < 5; d2owKQFrD9++) {
            printf ("\n%d", GOWyfHxU7r[d2owKQFrD9][(271 - 271)]);
            for (tRy2vA = (586 - 585); tRy2vA < 5; tRy2vA++)
                printf (" %d", GOWyfHxU7r[d2owKQFrD9][tRy2vA]);
        }
    }
    return 0;
}

