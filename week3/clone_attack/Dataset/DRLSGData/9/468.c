struct   patient {
    char ID [(374 - 363)];
    int rd61q5mEjK;
}
OLdMRQyk4jg [(1772 - 772)];

int main () {
    int IIgKxdznJ, sTuhUfslLkEW, E6zFeSa5I, OesknGF5296, l, m45hYI = (156 - 156), dPBcZnia = (925 - 925), VZ5Ay2J4R1B;
    char uUBpdMDNrwE [(259 - 248)];
    char wl61min [(1343 - 343)] [(231 - 220)];
    char naOKDg8PC [(1225 - 225)] [(181 - 170)];
    int H85jGWk2VHLx [(1164 - 164)], FHamn028e71J [(1393 - 393)];
    scanf ("%d", &IIgKxdznJ);
    for (sTuhUfslLkEW = (967 - 967); sTuhUfslLkEW < IIgKxdznJ; sTuhUfslLkEW++) {
        scanf ("%s", &OLdMRQyk4jg[sTuhUfslLkEW].ID);
        scanf (" %d", &OLdMRQyk4jg[sTuhUfslLkEW].rd61q5mEjK);
    }
    {
        sTuhUfslLkEW = (300 - 300);
        OesknGF5296 = (511 - 511);
        l = (801 - 801);
        for (; sTuhUfslLkEW < IIgKxdznJ;) {
            if ((878 - 818) <= OLdMRQyk4jg[sTuhUfslLkEW].rd61q5mEjK) {
                m45hYI++;
                H85jGWk2VHLx[OesknGF5296] = OLdMRQyk4jg[sTuhUfslLkEW].rd61q5mEjK;
                strcpy (naOKDg8PC[OesknGF5296], OLdMRQyk4jg[sTuhUfslLkEW].ID);
                OesknGF5296++;
            }
            else {
                FHamn028e71J[l] = OLdMRQyk4jg[sTuhUfslLkEW].rd61q5mEjK;
                strcpy (wl61min[l], OLdMRQyk4jg[sTuhUfslLkEW].ID);
                l++;
                dPBcZnia++;
            }
            sTuhUfslLkEW++;
        }
    }
    for (E6zFeSa5I = (518 - 518); E6zFeSa5I < IIgKxdznJ; E6zFeSa5I++) {
        for (OesknGF5296 = IIgKxdznJ -(199 - 198); OesknGF5296 >= E6zFeSa5I; OesknGF5296--) {
            if (H85jGWk2VHLx[OesknGF5296 +(503 - 502)] > H85jGWk2VHLx[OesknGF5296]) {
                VZ5Ay2J4R1B = H85jGWk2VHLx[OesknGF5296];
                H85jGWk2VHLx[OesknGF5296] = H85jGWk2VHLx[OesknGF5296 +(735 - 734)];
                strcpy (uUBpdMDNrwE, naOKDg8PC[OesknGF5296]);
                strcpy (naOKDg8PC[OesknGF5296], naOKDg8PC[OesknGF5296 +(281 - 280)]);
                strcpy (naOKDg8PC[OesknGF5296 +(277 - 276)], uUBpdMDNrwE);
                H85jGWk2VHLx[OesknGF5296 +(308 - 307)] = VZ5Ay2J4R1B;
            }
        }
    }
    for (OesknGF5296 = (631 - 631); OesknGF5296 < m45hYI; OesknGF5296++) {
        printf ("%s\n", naOKDg8PC[OesknGF5296]);
    }
    for (l = (19 - 19); l < dPBcZnia; l++) {
        printf ("%s\n", wl61min[l]);
    }
    return (496 - 496);
}

