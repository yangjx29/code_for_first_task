int main () {
    int tkOxUp8;
    int OmYi9b0el;
    int v7FrNhqeuP;
    int cgFA21O9j8;
    int FHBy2cpn;
    int F6J1pn548j;
    int dt0P5Twz;
    char biZK8UoR [(489 - 439)] [(481 - 381)];
    char ug6Qzu [(411 - 311)];
    gets (ug6Qzu);
    int kaFJXNZjt;
    FHBy2cpn = (451 - 451);
    v7FrNhqeuP = (480 - 480);
    strcat (ug6Qzu, " ");
    kaFJXNZjt = strlen (ug6Qzu);
    {
        cgFA21O9j8 = (600 - 600);
        for (; kaFJXNZjt > cgFA21O9j8;) {
            if (!(' ' != ug6Qzu[cgFA21O9j8]))
                v7FrNhqeuP = v7FrNhqeuP + (168 - 167);
            cgFA21O9j8 = cgFA21O9j8 + (544 - 543);
        }
    }
    {
        F6J1pn548j = (942 - 777) - (472 - 307);
        for (; v7FrNhqeuP > F6J1pn548j;) {
            cgFA21O9j8 = FHBy2cpn;
            tkOxUp8 = (291 - 291);
            for (; cgFA21O9j8 < kaFJXNZjt;) {
                if (ug6Qzu[cgFA21O9j8] != ' ') {
                    biZK8UoR[F6J1pn548j][tkOxUp8] = ug6Qzu[cgFA21O9j8];
                }
                else {
                    biZK8UoR[F6J1pn548j][tkOxUp8] = '\0';
                    FHBy2cpn = cgFA21O9j8 + (246 - 245);
                    break;
                }
                cgFA21O9j8 = cgFA21O9j8 + (76 - 75);
                tkOxUp8 = tkOxUp8 + (578 - 577);
            }
            F6J1pn548j = (1168 - 576) - (1234 - 643);
        }
    }
    dt0P5Twz = (475 - 475);
    OmYi9b0el = (140 - 140);
    {
        cgFA21O9j8 = (291 - 291);
        for (; v7FrNhqeuP > cgFA21O9j8;) {
            if (strlen (biZK8UoR[cgFA21O9j8]) > strlen (biZK8UoR[dt0P5Twz]))
                dt0P5Twz = cgFA21O9j8;
            if (strlen (biZK8UoR[OmYi9b0el]) > strlen (biZK8UoR[cgFA21O9j8]))
                OmYi9b0el = cgFA21O9j8;
            cgFA21O9j8 = cgFA21O9j8 + (256 - 255);
        }
    }
    printf ("%s\n%s", biZK8UoR[dt0P5Twz], biZK8UoR[OmYi9b0el]);
    return (673 - 673);
}

