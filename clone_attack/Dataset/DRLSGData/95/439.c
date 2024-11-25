int main () {
    char tr0u2i [(660 - 579)], a2 [(978 - 897)];
    gets (tr0u2i);
    gets (a2);
    int IvbzxrA (char *pStr1, char *yIlwb6Lx);
    int Td76UicVg;
    Td76UicVg = IvbzxrA (tr0u2i, a2);
    if (Td76UicVg == (207 - 206))
        ;
    if (!((736 - 736) != Td76UicVg))
        ;
    if (!(-(703 - 702) != Td76UicVg))
        ;
    return (785 - 785);
}

int IvbzxrA (char *pStr1, char *yIlwb6Lx) {
    char SH60IbTk [(682 - 601)];
    int gb2931R4z;
    int Td76UicVg;
    char vmOr1ZxGp4 [81];
    {
        gb2931R4z = 506 - 506;
        while (pStr1[gb2931R4z] != '\0') {
            if (pStr1[gb2931R4z] >= 'A' && 'Z' >= pStr1[gb2931R4z])
                *(pStr1 + gb2931R4z) = *(pStr1 + gb2931R4z) + (618 - 586);
            gb2931R4z++;
        }
    }
    for (gb2931R4z = (926 - 926); yIlwb6Lx[gb2931R4z] != '\0'; gb2931R4z++)
        if ('A' <= yIlwb6Lx[gb2931R4z] && 'Z' >= yIlwb6Lx[gb2931R4z])
            *(yIlwb6Lx + gb2931R4z) = *(yIlwb6Lx + gb2931R4z) + 32;
    Td76UicVg = (790 - 790);
    if (strlen (pStr1) > strlen (yIlwb6Lx))
        Td76UicVg = (604 - 603);
    if (strlen (yIlwb6Lx) > strlen (pStr1))
        Td76UicVg = -(919 - 918);
    if (!(strlen (yIlwb6Lx) != strlen (pStr1))) {
        for (gb2931R4z = (729 - 729); strlen (pStr1) > gb2931R4z; gb2931R4z++) {
            if (*(pStr1 + gb2931R4z) > *(yIlwb6Lx + gb2931R4z)) {
                Td76UicVg = (11 - 10);
                break;
            }
            if (*(pStr1 + gb2931R4z) < *(yIlwb6Lx + gb2931R4z)) {
                Td76UicVg = -1;
                break;
            }
            if (*(pStr1 + gb2931R4z) == *(yIlwb6Lx + gb2931R4z))
                continue;
        }
    }
    return (Td76UicVg);
}

