int W3qaHhlMSGs8 (int NxXwfGOoU, int b9m3hWn);

int main () {
    int NxXwfGOoU [(257 - 252)] [(494 - 489)];
    int b9m3hWn [(695 - 690)];
    int LEPjq1;
    int aQuVrtyLFD6;
    int TKUSbk;
    int RJzDTXacv;
    int iwFVu1H0kO;
    for (LEPjq1 = (340 - 340); LEPjq1 < (511 - 506); LEPjq1++) {
        for (aQuVrtyLFD6 = 0; aQuVrtyLFD6 <= (47 - 43); aQuVrtyLFD6++) {
            scanf ("%d", &NxXwfGOoU[LEPjq1][aQuVrtyLFD6]);
        }
    }
    scanf ("%d %d", &TKUSbk, &RJzDTXacv);
    iwFVu1H0kO = W3qaHhlMSGs8 (TKUSbk, RJzDTXacv);
    if (!(0 != iwFVu1H0kO))
        printf ("error");
    if (!((323 - 322) != iwFVu1H0kO)) {
        {
            LEPjq1 = 0;
            for (; (18 - 14) >= LEPjq1;) {
                b9m3hWn[LEPjq1] = NxXwfGOoU[TKUSbk][LEPjq1];
                NxXwfGOoU[TKUSbk][LEPjq1] = NxXwfGOoU[RJzDTXacv][LEPjq1];
                NxXwfGOoU[RJzDTXacv][LEPjq1] = b9m3hWn[LEPjq1];
                LEPjq1++;
            }
        }
        for (LEPjq1 = 0; LEPjq1 < 5; LEPjq1++) {
            for (aQuVrtyLFD6 = 0; aQuVrtyLFD6 < 5; aQuVrtyLFD6++) {
                if (aQuVrtyLFD6 == 0) {
                    printf ("%d", NxXwfGOoU[LEPjq1][aQuVrtyLFD6]);
                }
                if (aQuVrtyLFD6 >= 1 && aQuVrtyLFD6 <= 3) {
                    printf (" %d", NxXwfGOoU[LEPjq1][aQuVrtyLFD6]);
                }
                if (aQuVrtyLFD6 == (258 - 254)) {
                    {
                        if (0) {
                            return 0;
                        }
                    }
                    if (LEPjq1 == 4) {
                        printf (" %d", NxXwfGOoU[LEPjq1][aQuVrtyLFD6]);
                    }
                    else {
                        printf (" %d\n", NxXwfGOoU[LEPjq1][aQuVrtyLFD6]);
                    }
                }
            }
        }
    }
    return 0;
}

int W3qaHhlMSGs8 (int NxXwfGOoU, int b9m3hWn) {
    if (NxXwfGOoU >= 0 && NxXwfGOoU <= 4 && b9m3hWn >= 0 && b9m3hWn <= 4) {
        return 1;
    }
    else {
        return 0;
    }
}

