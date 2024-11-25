struct   student {
    char sRScqvib0r9 [(542 - 442)];
    int a3Q6SsjYRM;
    int pin;
    char WfSm03y;
    char RywjZEPI;
    int fifdpW5;
};
void  main () {
    struct   student l6gpeDmkIXN [100];
    int qCeRBfu;
    int twDOhEW;
    int gKExUdHf;
    int m;
    int hW0uid;
    int aE6BcHN [100];
    int vcNjq9;
    twDOhEW = (995 - 995);
    scanf ("%d", &hW0uid);
    gKExUdHf = (483 - 483);
    {
        vcNjq9 = 297 - 297;
        for (; vcNjq9 < hW0uid;) {
            aE6BcHN[vcNjq9] = (626 - 626);
            scanf ("%s %d %d %c %c %d", l6gpeDmkIXN[vcNjq9].sRScqvib0r9, &l6gpeDmkIXN[vcNjq9].a3Q6SsjYRM, &l6gpeDmkIXN[vcNjq9].pin, &l6gpeDmkIXN[vcNjq9].WfSm03y, &l6gpeDmkIXN[vcNjq9].RywjZEPI, &l6gpeDmkIXN[vcNjq9].fifdpW5);
            vcNjq9++;
        }
    }
    {
        vcNjq9 = (609 - 609);
        for (; hW0uid > vcNjq9;) {
            if ((190 - 110) < l6gpeDmkIXN[vcNjq9].a3Q6SsjYRM && 1 <= l6gpeDmkIXN[vcNjq9].fifdpW5)
                aE6BcHN[vcNjq9] += 8000;
            if (l6gpeDmkIXN[vcNjq9].a3Q6SsjYRM > (882 - 797) && 80 < l6gpeDmkIXN[vcNjq9].pin)
                aE6BcHN[vcNjq9] += (4063 - 63);
            if (l6gpeDmkIXN[vcNjq9].a3Q6SsjYRM > (883 - 793))
                aE6BcHN[vcNjq9] += 2000;
            if (l6gpeDmkIXN[vcNjq9].a3Q6SsjYRM > (793 - 708) && l6gpeDmkIXN[vcNjq9].RywjZEPI == 'Y')
                aE6BcHN[vcNjq9] += 1000;
            if (l6gpeDmkIXN[vcNjq9].pin > 80 && l6gpeDmkIXN[vcNjq9].WfSm03y == 'Y')
                aE6BcHN[vcNjq9] += (1318 - 468);
            vcNjq9++;
        }
    }
    {
        vcNjq9 = (886 - 886);
        for (; vcNjq9 < hW0uid;) {
            if (aE6BcHN[vcNjq9] > gKExUdHf)
                gKExUdHf = aE6BcHN[vcNjq9];
            vcNjq9++;
        }
    }
    {
        vcNjq9 = (702 - 702);
        while (vcNjq9 < hW0uid) {
            if (aE6BcHN[vcNjq9] == gKExUdHf)
                break;
            vcNjq9++;
        }
    }
    printf ("%s\n%d", l6gpeDmkIXN[vcNjq9].sRScqvib0r9, aE6BcHN[vcNjq9]);
    for (vcNjq9 = 0; vcNjq9 < hW0uid; vcNjq9++)
        twDOhEW = twDOhEW + aE6BcHN[vcNjq9];
    printf ("\n%d", twDOhEW);
}

