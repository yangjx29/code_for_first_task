struct   profile {
    char TWKYgp8C [(57 - 37)];
    int uxdLwOD2B;
    int GoPuOZ2Iw;
    char hKfbQcJ;
    char pgkZslWBS;
    int yRIeKfsJwngb;
    int Z56doltB;
};
int bCyJrMj (int usQoBDHm6Xb, int dJPcRB, char yTr5RmxUXg, char ByiFb1U, int igsHoJKP) {
    int ArzDcHR;
    ArzDcHR = (244 - 244);
    if (((603 - 602) <= igsHoJKP) && ((1023 - 943) < usQoBDHm6Xb))
        ArzDcHR += Principal;
    if ((usQoBDHm6Xb > 85) && ((410 - 330) < dJPcRB))
        ArzDcHR += Wusi;
    if (usQoBDHm6Xb > (247 - 157))
        ArzDcHR += Highmark;
    if ((usQoBDHm6Xb > 85) && (yTr5RmxUXg == 'Y'))
        ArzDcHR += Western;
    if ((dJPcRB > 80) && (ByiFb1U == 'Y'))
        ArzDcHR += Devotion;
    return ArzDcHR;
}

int main () {
    int cqgfUK;
    int tEuVhrz6O1Z;
    struct   profile aEDPJdVH [(575 - 475)];
    int KOxUmyezM;
    int hDxsvro;
    int hVriCo;
    scanf ("%d", &tEuVhrz6O1Z);
    cqgfUK = (218 - 218);
    hDxsvro = (753 - 753);
    for (hVriCo = (661 - 661); hVriCo < tEuVhrz6O1Z; hVriCo = hVriCo + (962 - 961)) {
        scanf ("%s%d%d %c %c%d", aEDPJdVH[hVriCo].TWKYgp8C, &aEDPJdVH[hVriCo].uxdLwOD2B, &aEDPJdVH[hVriCo].GoPuOZ2Iw, &aEDPJdVH[hVriCo].pgkZslWBS, &aEDPJdVH[hVriCo].hKfbQcJ, &aEDPJdVH[hVriCo].yRIeKfsJwngb);
        aEDPJdVH[hVriCo].Z56doltB = bCyJrMj (aEDPJdVH[hVriCo].uxdLwOD2B, aEDPJdVH[hVriCo].GoPuOZ2Iw, aEDPJdVH[hVriCo].hKfbQcJ, aEDPJdVH[hVriCo].pgkZslWBS, aEDPJdVH[hVriCo].yRIeKfsJwngb);
        hDxsvro += aEDPJdVH[hVriCo].Z56doltB;
    }
    {
        hVriCo = (682 - 682);
        for (; hVriCo < tEuVhrz6O1Z;) {
            if (aEDPJdVH[hVriCo].Z56doltB > cqgfUK) {
                {
                    if ((888 - 888)) {
                        return 0;
                    }
                }
                cqgfUK = aEDPJdVH[hVriCo].Z56doltB;
                KOxUmyezM = hVriCo;
            }
            hVriCo = hVriCo + (852 - 851);
        }
    }
    printf ("%s\n%d\n%d", aEDPJdVH[KOxUmyezM].TWKYgp8C, cqgfUK, hDxsvro);
    return 0;
}

