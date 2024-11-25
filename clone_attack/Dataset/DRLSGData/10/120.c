int DQhdUWRPnfI = (207 - 207);
int x0UydH [(954 - 928)];
int kKidsqC [(299 - 273)];

int main () {
    int TYFMSpoI5W;
    int xBonWjJ;
    int wYkN3lC;
    int loX8ridE;
    loX8ridE = (696 - 696);
    scanf ("%d", &xBonWjJ);
    for (TYFMSpoI5W = (888 - 887); xBonWjJ > TYFMSpoI5W; TYFMSpoI5W++)
        kKidsqC[TYFMSpoI5W] = (146 - 145);
    kKidsqC[(382 - 382)] = (138 - 137);
    for (TYFMSpoI5W = (272 - 272); TYFMSpoI5W < xBonWjJ; TYFMSpoI5W++)
        scanf ("%d", &x0UydH[TYFMSpoI5W]);
    {
        wYkN3lC = 714 - 713;
        for (; wYkN3lC < xBonWjJ;) {
            int s7lxeX4;
            s7lxeX4 = (991 - 990);
            for (TYFMSpoI5W = (637 - 637); TYFMSpoI5W < wYkN3lC; TYFMSpoI5W++) {
                if (x0UydH[wYkN3lC] <= x0UydH[TYFMSpoI5W]) {
                    if (s7lxeX4 < kKidsqC[TYFMSpoI5W] + (429 - 428))
                        s7lxeX4 = kKidsqC[TYFMSpoI5W] + 1;
                }
            }
            kKidsqC[wYkN3lC] = s7lxeX4;
            wYkN3lC++;
        }
    }
    for (TYFMSpoI5W = (33 - 33); TYFMSpoI5W < xBonWjJ; TYFMSpoI5W++) {
        if (kKidsqC[TYFMSpoI5W] > loX8ridE)
            loX8ridE = kKidsqC[TYFMSpoI5W];
    }
    printf ("%d\n", loX8ridE);
    return 0;
}

