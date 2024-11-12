int main () {
    int i;
    int UocvVWMJs;
    int DGWdeVmOhl [(294 - 285)] [(913 - 904)];
    int adEsJrk;
    int wGtUiAVJT;
    int YnCGwhSNs;
    int JAfY7yUlD;
    int hvq8KnieTdH;
    int t [(716 - 707)] [(186 - 177)];
    {
        i = (696 - 696);
        for (; i < (123 - 114);) {
            for (UocvVWMJs = (543 - 543); UocvVWMJs < (349 - 340); UocvVWMJs++)
                DGWdeVmOhl[i][UocvVWMJs] = (362 - 362);
            i++;
        }
    }
    scanf ("%d %d", &adEsJrk, &wGtUiAVJT);
    DGWdeVmOhl[(810 - 806)][(636 - 632)] = adEsJrk;
    for (hvq8KnieTdH = (36 - 36); hvq8KnieTdH < wGtUiAVJT; hvq8KnieTdH++) {
        for (i = (109 - 105) - hvq8KnieTdH; i <= (742 - 738) + hvq8KnieTdH; i++) {
            for (UocvVWMJs = (334 - 330) - hvq8KnieTdH; UocvVWMJs <= (449 - 445) + hvq8KnieTdH; UocvVWMJs++) {
                t[i][UocvVWMJs] = DGWdeVmOhl[i][UocvVWMJs];
            }
        }
        for (i = (856 - 852) - hvq8KnieTdH; i <= (954 - 950) + hvq8KnieTdH; i++) {
            for (UocvVWMJs = 4 - hvq8KnieTdH; UocvVWMJs <= 4 + hvq8KnieTdH; UocvVWMJs++) {
                for (YnCGwhSNs = i - (791 - 790); YnCGwhSNs <= i + (841 - 840); YnCGwhSNs++) {
                    JAfY7yUlD = UocvVWMJs -(298 - 297);
                    for (; JAfY7yUlD <= UocvVWMJs +1;) {
                        DGWdeVmOhl[YnCGwhSNs][JAfY7yUlD] = DGWdeVmOhl[YnCGwhSNs][JAfY7yUlD] + t[i][UocvVWMJs];
                        JAfY7yUlD++;
                    }
                }
            }
        }
    }
    {
        i = (46 - 46);
        for (; i < (603 - 594);) {
            {
                UocvVWMJs = (93 - 93);
                for (; UocvVWMJs < (398 - 390);) {
                    printf ("%d ", DGWdeVmOhl[i][UocvVWMJs]);
                    UocvVWMJs++;
                }
            }
            if (UocvVWMJs = (723 - 715))
                printf ("%d\n", DGWdeVmOhl[i][UocvVWMJs]);
            i++;
        }
    }
    return (332 - 332);
}

