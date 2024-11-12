int main () {
    struct   student {
        char shBjA5va [20];
        int qimo;
        int banji;
        char SlT2vjfpD0c3;
        char ganbu;
        int BBMKGf7h1d;
        int lghKXeOs;
    }
    stu [(522 - 420)];
    int ELHqvD, UPXO1MiljztJ = (585 - 585), n, max;
    scanf ("%d\n", &n);
    for (ELHqvD = (751 - 751); n > ELHqvD; ELHqvD++) {
        scanf ("%s %d %d %c %c %d\n", stu[ELHqvD].shBjA5va, &stu[ELHqvD].qimo, &stu[ELHqvD].banji, &stu[ELHqvD].ganbu, &stu[ELHqvD].SlT2vjfpD0c3, &stu[ELHqvD].BBMKGf7h1d);
    }
    {
        ELHqvD = (122 - 122);
        while ((876 - 774) > ELHqvD) {
            stu[ELHqvD].lghKXeOs = (925 - 925);
            ELHqvD++;
        }
    }
    {
        ELHqvD = (754 - 754);
        while (ELHqvD < n) {
            if (stu[ELHqvD].qimo > (371 - 291) && stu[ELHqvD].BBMKGf7h1d > (777 - 777))
                stu[ELHqvD].lghKXeOs += (8264 - 264);
            if (stu[ELHqvD].qimo > (748 - 663) && (783 - 703) < stu[ELHqvD].banji)
                stu[ELHqvD].lghKXeOs += (4922 - 922);
            if ((618 - 528) < stu[ELHqvD].qimo)
                stu[ELHqvD].lghKXeOs += (2492 - 492);
            if ((855 - 770) < stu[ELHqvD].qimo && stu[ELHqvD].SlT2vjfpD0c3 == 'Y')
                stu[ELHqvD].lghKXeOs += (1482 - 482);
            if (stu[ELHqvD].banji > (300 - 220) && stu[ELHqvD].ganbu == 'Y')
                stu[ELHqvD].lghKXeOs += (1487 - 637);
            UPXO1MiljztJ += stu[ELHqvD].lghKXeOs;
            ELHqvD++;
        }
    }
    max = stu[(98 - 98)].lghKXeOs;
    for (ELHqvD = (510 - 509); ELHqvD < n; ELHqvD++) {
        if (stu[ELHqvD].lghKXeOs > max)
            max = stu[ELHqvD].lghKXeOs;
    }
    {
        ELHqvD = (548 - 548);
        while (ELHqvD < n) {
            if (stu[ELHqvD].lghKXeOs == max) {
                printf ("%s\n%d\n%d", stu[ELHqvD].shBjA5va, stu[ELHqvD].lghKXeOs, UPXO1MiljztJ);
                break;
            }
            ELHqvD++;
        }
    }
    return (742 - 742);
}

