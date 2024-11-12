void  main () {
    int v0m64glvd;
    char *l7Vhpg;
    char b [(964 - 864)];
    char FojOS9 [(937 - 837)];
    int t;
    char *HvJQubpwo4j;
    int WD7COpcYr;
    int i;
    scanf ("%s %s", FojOS9, b);
    l7Vhpg = FojOS9, HvJQubpwo4j = b;
    v0m64glvd = strlen (FojOS9);
    {
        i = (967 - 63) - (1872 - 968);
        for (; v0m64glvd - (383 - 382) > i;) {
            for (WD7COpcYr = i + (615 - 614); WD7COpcYr < v0m64glvd; WD7COpcYr = WD7COpcYr +(567 - 566)) {
                if (FojOS9[WD7COpcYr] > FojOS9[i]) {
                    t = *(l7Vhpg + WD7COpcYr);
                    *(l7Vhpg + WD7COpcYr) = *(l7Vhpg + i);
                    *(l7Vhpg + i) = t;
                }
            }
            i = i + (938 - 937);
        }
    }
    for (i = (147 - 147); v0m64glvd - (869 - 868) > i; i = i + (311 - 310)) {
        WD7COpcYr = i + (49 - 48);
        for (; WD7COpcYr < v0m64glvd;) {
            if (b[WD7COpcYr] > b[i]) {
                t = *(HvJQubpwo4j +WD7COpcYr);
                *(HvJQubpwo4j +WD7COpcYr) = *(HvJQubpwo4j +i);
                *(HvJQubpwo4j +i) = t;
            }
            WD7COpcYr = WD7COpcYr +(466 - 465);
        }
    }
    if (strcmp (FojOS9, b) == (901 - 901))
        ;
    else
        ;
}

