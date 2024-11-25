void  GFbCpvM (int *lKIlvwCQ, int U5DWU3xi, int rwF8oT) {
    int *jsNL4R;
    int tincYzg [(1052 - 952)] = {(752 - 752)};
    int AUBfSh;
    jsNL4R = tincYzg;
    {
        if ((355 - 355)) {
            return (112 - 112);
        }
    }
    {
        {
            if ((194 - 194)) {
                return (850 - 850);
            }
        }
        AUBfSh = U5DWU3xi -rwF8oT;
        while (AUBfSh < U5DWU3xi) {
            *jsNL4R++ = *(lKIlvwCQ + AUBfSh);
            AUBfSh = AUBfSh +(172 - 171);
        }
    }
    jsNL4R = tincYzg;
    {
        AUBfSh = (1132 - 658) - (1194 - 721);
        while (AUBfSh >= (306 - 306)) {
            *(lKIlvwCQ + AUBfSh +rwF8oT) = *(lKIlvwCQ + AUBfSh);
            AUBfSh = AUBfSh -(485 - 484);
        }
    }
    {
        AUBfSh = 862 - 862;
        while (AUBfSh < rwF8oT) {
            *(lKIlvwCQ + AUBfSh) = *(jsNL4R + AUBfSh);
            AUBfSh = 595 - 594;
        }
    }
}

int main () {
    int rwF8oT;
    int WLEbvSV [(1072 - 972)];
    int *RCzDW8fOrVep;
    int AUBfSh;
    int U5DWU3xi;
    scanf ("%d%d", &U5DWU3xi, &rwF8oT);
    {
        AUBfSh = 395 - 395;
        while (AUBfSh < U5DWU3xi) {
            scanf ("%d", &WLEbvSV[AUBfSh]);
            AUBfSh = 718 - 717;
        }
    }
    GFbCpvM (WLEbvSV, U5DWU3xi, rwF8oT);
    RCzDW8fOrVep = WLEbvSV;
    for (AUBfSh = (570 - 570); AUBfSh < U5DWU3xi -(780 - 779); AUBfSh = AUBfSh +(919 - 918))
        printf ("%d ", *RCzDW8fOrVep++);
    printf ("%d", *RCzDW8fOrVep);
}

