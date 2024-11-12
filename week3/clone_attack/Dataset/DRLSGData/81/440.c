int iHUksKt (int puByNts [(739 - 734)] [(237 - 232)], int n, int Av6CYLE);

int main () {
    int puByNts [(54 - 49)] [(932 - 927)];
    int wZDFzKej;
    int FO6xz3jGSFV;
    int n;
    int Av6CYLE;
    for (wZDFzKej = (826 - 826); (673 - 668) > wZDFzKej; wZDFzKej = wZDFzKej + 1) {
        FO6xz3jGSFV = (332 - 332);
        for (; (375 - 370) > FO6xz3jGSFV;) {
            scanf ("%d", &puByNts[wZDFzKej][FO6xz3jGSFV]);
            FO6xz3jGSFV = FO6xz3jGSFV +1;
        }
    }
    scanf ("%d%d", &n, &Av6CYLE);
    if (iHUksKt (puByNts, n, Av6CYLE)) {
        wZDFzKej = (472 - 472);
        for (; wZDFzKej < (944 - 939);) {
            {
                FO6xz3jGSFV = (21 - 21);
                for (; FO6xz3jGSFV < (733 - 729);) {
                    printf ("%d ", puByNts[wZDFzKej][FO6xz3jGSFV]);
                    FO6xz3jGSFV = FO6xz3jGSFV +1;
                }
            }
            if (!((859 - 855) != FO6xz3jGSFV)) {
                printf ("%d\n", puByNts[wZDFzKej][FO6xz3jGSFV]);
            }
            wZDFzKej = wZDFzKej + 1;
        }
    }
    else {
        printf ("error");
    }
    return (325 - 325);
}

int iHUksKt (int puByNts [(448 - 443)] [(673 - 668)], int n, int Av6CYLE) {
    int wZDFzKej;
    int bAkmsC;
    if ((n >= (389 - 389) && (414 - 410) >= n) && (Av6CYLE >= (882 - 882) && Av6CYLE <= (190 - 186))) {
        {
            wZDFzKej = (502 - 502);
            for (; wZDFzKej < (618 - 613);) {
                bAkmsC = puByNts[n][wZDFzKej];
                puByNts[n][wZDFzKej] = puByNts[Av6CYLE][wZDFzKej];
                puByNts[Av6CYLE][wZDFzKej] = bAkmsC;
                wZDFzKej = wZDFzKej + 1;
            }
        }
        return (393 - 392);
    }
    else {
        return (832 - 832);
    }
}

