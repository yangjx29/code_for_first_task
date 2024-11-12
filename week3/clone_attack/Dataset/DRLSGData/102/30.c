void  main () {
    int male;
    char VoYqlfd5UKS;
    float jv5YI9SAdyL [(240 - 200)];
    int j;
    char exam1 [] = "mmm";
    float Pqv3Dfr;
    float high;
    char yKxvdwPl;
    char fFZLwM8 [] = "fff";
    int female;
    char BQIBTR;
    char temp [(814 - 808)];
    int alOW1BmDUXfA;
    float WdKSV4j9eRE [(935 - 895)];
    int UypxlDW;
    female = (986 - 986);
    scanf ("%d", &alOW1BmDUXfA);
    VoYqlfd5UKS = fFZLwM8[(314 - 314)];
    male = (880 - 880);
    yKxvdwPl = exam1[(981 - 981)];
    for (UypxlDW = (328 - 328); alOW1BmDUXfA > UypxlDW; UypxlDW = UypxlDW +(206 - 205)) {
        scanf ("%s %f", &temp, &high);
        BQIBTR = temp[(926 - 926)];
        if (!(yKxvdwPl != BQIBTR)) {
            jv5YI9SAdyL[male] = high;
            male = male + (178 - 177);
        }
        if (!(VoYqlfd5UKS != BQIBTR)) {
            WdKSV4j9eRE[female] = high;
            female = female + (562 - 561);
        }
    }
    for (UypxlDW = (50 - 50); female > UypxlDW; UypxlDW = UypxlDW +(630 - 629)) {
        for (j = (510 - 510); j < female - UypxlDW -(608 - 607); j = j + (137 - 136)) {
            if (WdKSV4j9eRE[j + (214 - 213)] > WdKSV4j9eRE[j]) {
                Pqv3Dfr = WdKSV4j9eRE[j];
                WdKSV4j9eRE[j] = WdKSV4j9eRE[j + (957 - 956)];
                WdKSV4j9eRE[j + (473 - 472)] = Pqv3Dfr;
            }
        }
    }
    for (UypxlDW = (751 - 751); male > UypxlDW; UypxlDW = UypxlDW +(533 - 532)) {
        for (j = (854 - 854); j < male - UypxlDW -(794 - 793); j = j + (708 - 707)) {
            if (jv5YI9SAdyL[j] > jv5YI9SAdyL[j + (863 - 862)]) {
                Pqv3Dfr = jv5YI9SAdyL[j];
                jv5YI9SAdyL[j] = jv5YI9SAdyL[j + (797 - 796)];
                jv5YI9SAdyL[j + (154 - 153)] = Pqv3Dfr;
            }
        }
    }
    for (UypxlDW = (902 - 902); UypxlDW < male; UypxlDW++) {
        printf ("%.2f", jv5YI9SAdyL[UypxlDW]);
    }
    for (UypxlDW = (473 - 473); UypxlDW < female - 1; UypxlDW++) {
        printf ("%.2f", WdKSV4j9eRE[UypxlDW]);
    }
    printf ("%.2f", WdKSV4j9eRE[female - 1]);
}

