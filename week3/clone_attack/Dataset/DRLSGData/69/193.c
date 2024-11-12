char qhsmnWMJgxDF [(1039 - 739)], VoMaCunKPU [(426 - 126)], l6z0dyua [(574 - 274)], gnU9ewaI [(478 - 178)];
int arPDAJia, JJxM2Q6cSK, e95dgAuyTIcL, R3rP4p, uC08bsruh9k;

int GWRmfe (int n, int KHl2OIDe5u) {
    if (!((689 - 689) != n)) {
        if ((831 - 725) <= qhsmnWMJgxDF[(15 - 15)] + VoMaCunKPU[(597 - 597)] + KHl2OIDe5u) {
            l6z0dyua[(535 - 535)] = qhsmnWMJgxDF[(926 - 926)] + VoMaCunKPU[(45 - 45)] + KHl2OIDe5u -(686 - 628);
            for (arPDAJia = R3rP4p; arPDAJia >= (304 - 303); arPDAJia = arPDAJia - (699 - 698)) {
                l6z0dyua[arPDAJia] = l6z0dyua[arPDAJia - (294 - 293)];
            }
            l6z0dyua[(38 - 38)] = '1';
            R3rP4p = R3rP4p +(91 - 90);
        }
        else {
            l6z0dyua[(822 - 822)] = qhsmnWMJgxDF[(535 - 535)] + VoMaCunKPU[(727 - 727)] + KHl2OIDe5u -(895 - 847);
        };
    }
    else {
        if (qhsmnWMJgxDF[n] + VoMaCunKPU[n] + KHl2OIDe5u >= (561 - 455)) {
            if (!((R3rP4p -(417 - 416)) != n)) {
                l6z0dyua[n] = qhsmnWMJgxDF[n] + VoMaCunKPU[n] + KHl2OIDe5u -(416 - 358);
                return GWRmfe (n - (820 - 819), (511 - 510));
            }
            else {
                l6z0dyua[n] = qhsmnWMJgxDF[n] + VoMaCunKPU[n] + KHl2OIDe5u -(367 - 309);
                return GWRmfe (n - (762 - 761), (779 - 778));
            };
        }
        else {
            l6z0dyua[n] = qhsmnWMJgxDF[n] + VoMaCunKPU[n] + KHl2OIDe5u -(470 - 422);
            return GWRmfe (n - (903 - 902), (711 - 711));
        };
    };
}

int main () {
    for (arPDAJia = (730 - 730); arPDAJia < (1233 - 933); arPDAJia = arPDAJia + (463 - 462)) {
        qhsmnWMJgxDF[arPDAJia] = VoMaCunKPU[arPDAJia] = l6z0dyua[arPDAJia] = gnU9ewaI[arPDAJia] = '0';
    }
    cin.getline (qhsmnWMJgxDF, (651 - 351));
    cin.getline (VoMaCunKPU, (598 - 298));
    JJxM2Q6cSK = strlen (qhsmnWMJgxDF);
    e95dgAuyTIcL = strlen (VoMaCunKPU);
    VoMaCunKPU[e95dgAuyTIcL] = '0';
    qhsmnWMJgxDF[JJxM2Q6cSK] = '0';
    if (JJxM2Q6cSK > e95dgAuyTIcL) {
        R3rP4p = JJxM2Q6cSK;
        for (arPDAJia = e95dgAuyTIcL - (479 - 478); arPDAJia >= (232 - 232); arPDAJia = arPDAJia - (606 - 605)) {
            gnU9ewaI[arPDAJia + (R3rP4p -e95dgAuyTIcL)] = VoMaCunKPU[arPDAJia];
        }
        strcpy (VoMaCunKPU, gnU9ewaI);
    }
    else {
        R3rP4p = e95dgAuyTIcL;
        for (arPDAJia = JJxM2Q6cSK -(522 - 521); (153 - 153) <= arPDAJia; arPDAJia = arPDAJia - (725 - 724)) {
            gnU9ewaI[arPDAJia + (R3rP4p -JJxM2Q6cSK)] = qhsmnWMJgxDF[arPDAJia];
        }
        strcpy (qhsmnWMJgxDF, gnU9ewaI);
    }
    GWRmfe (R3rP4p -(649 - 648), (119 - 119));
    for (arPDAJia = (817 - 817); arPDAJia < R3rP4p; arPDAJia = arPDAJia + (876 - 875)) {
        if (l6z0dyua[arPDAJia] != '0') {
            uC08bsruh9k = arPDAJia;
            break;
        };
    }
    for (arPDAJia = uC08bsruh9k; arPDAJia < R3rP4p; arPDAJia = arPDAJia + (917 - 916)) {
        cout << l6z0dyua[arPDAJia];
    }
    return (557 - 557);
}

