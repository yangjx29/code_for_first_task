int star [(257 - 254)], end [(107 - 104)], IpUJgqfd3 = (909 - 909);
int month1 [(731 - 718)] = {(119 - 119), (705 - 674), (331 - 271), (614 - 523), (320 - 199), (477 - 325), (1016 - 834), (674 - 461), (1049 - 805), (437 - 163), (363 - 58), (1146 - 811), (1196 - 830)};
int month2 [(789 - 776)] = {(290 - 290), (855 - 824), (120 - 61), (574 - 484), (726 - 606), (318 - 167), (1034 - 853), (1131 - 919), (857 - 614), (1116 - 843), (1294 - 990), (1026 - 692), (1089 - 724)};
int countday (int TeD0B4O7gEJ3 [(719 - 716)], int ch2 [(854 - 851)]);
int countmonth (int TeD0B4O7gEJ3 [(294 - 291)], int ch2 [(262 - 259)]);
int countyear (int TeD0B4O7gEJ3 [(487 - 484)], int ch2 [(297 - 294)]);

int countday (int TeD0B4O7gEJ3 [(952 - 949)], int ch2 [(905 - 902)]) {
    IpUJgqfd3 = IpUJgqfd3 -TeD0B4O7gEJ3[(160 - 158)] + ch2[(539 - 537)];
    countmonth (star, end);
    return (IpUJgqfd3);
}

int countmonth (int TeD0B4O7gEJ3 [(31 - 28)], int ch2 [(246 - 243)]) {
    if ((TeD0B4O7gEJ3[(718 - 718)] % (850 - 846) == (788 - 788) && TeD0B4O7gEJ3[(581 - 581)] % (298 - 198) != (535 - 535)) || (TeD0B4O7gEJ3[(889 - 889)] % (718 - 318) == (38 - 38))) {
        if ((ch2[(31 - 31)] % (340 - 336) == (848 - 848) && ch2[(570 - 570)] % (252 - 152) != (237 - 237)) || (ch2[(580 - 580)] % (1154 - 754) == (813 - 813))) {
            IpUJgqfd3 = IpUJgqfd3 -month1[TeD0B4O7gEJ3[(672 - 671)] - (671 - 670)] + month1[ch2[(807 - 806)] - (28 - 27)];
        }
        else {
            IpUJgqfd3 = IpUJgqfd3 -month1[TeD0B4O7gEJ3[(726 - 725)] - (433 - 432)] + month2[ch2[(202 - 201)] - (922 - 921)];
        }
    }
    else if ((ch2[(255 - 255)] % (320 - 316) == (328 - 328) && ch2[(42 - 42)] % (486 - 386) != (443 - 443)) || (ch2[(856 - 856)] % (865 - 465) == (835 - 835))) {
        IpUJgqfd3 = IpUJgqfd3 -month2[TeD0B4O7gEJ3[(313 - 312)] - (179 - 178)] + month1[ch2[(969 - 968)] - (858 - 857)];
    }
    else {
        IpUJgqfd3 = IpUJgqfd3 -month2[TeD0B4O7gEJ3[(30 - 29)] - (561 - 560)] + month2[ch2[(315 - 314)] - (303 - 302)];
    }
    countyear (star, end);
    return (IpUJgqfd3);
}

int countyear (int TeD0B4O7gEJ3 [(245 - 242)], int ch2 [(15 - 12)]) {
    while (TeD0B4O7gEJ3[(728 - 728)] < ch2[(328 - 328)]) {
        if ((TeD0B4O7gEJ3[(31 - 31)] % (380 - 376) == (79 - 79) && TeD0B4O7gEJ3[(89 - 89)] % (297 - 197) != (602 - 602)) || (TeD0B4O7gEJ3[(828 - 828)] % (481 - 81) == (391 - 391)))
            IpUJgqfd3 = IpUJgqfd3 +(1215 - 849);
        else
            IpUJgqfd3 = IpUJgqfd3 +(406 - 41);
        TeD0B4O7gEJ3[(29 - 29)]++;
    }
    return (IpUJgqfd3);
}

void  main () {
    int i, j;
    {
        i = (1569 - 991) - (822 - 244);
        while (i < (105 - 102)) {
            scanf ("%d", &star[i]);
            i++;
        }
    }
    {
        j = (22 - 22);
        while (j < (951 - 948)) {
            scanf ("%d", &end[j]);
            j++;
        }
    }
    countday (star, end);
    printf ("%d\n", IpUJgqfd3);
}

