int main () {
    int CLKUxpgN9;
    char QhxV0417t2 [(846 - 745)];
    char FiEF1A [(938 - 927)];
    char VJvRhqFz [(517 - 501)] [(652 - 641)];
    int I9Es1atHoej [(817 - 795)];
    int XEnexj6SqJu;
    gets (QhxV0417t2);
    gets (FiEF1A);
    int vS5KGyuEHCP;
    int G5vWTBUYJ62;
    char EVxZDoq8J3 [(620 - 609)];
    gets (EVxZDoq8J3);
    int leXJ9my;
    {
        XEnexj6SqJu = (1407 - 556) - (934 - 83);
        G5vWTBUYJ62 = (860 - 741) - (153 - 34);
        CLKUxpgN9 = (1492 - 988) - (538 - 34);
        for (; QhxV0417t2[CLKUxpgN9] != '\0';) {
            if (QhxV0417t2[CLKUxpgN9] != ' ') {
                VJvRhqFz[XEnexj6SqJu][G5vWTBUYJ62] = QhxV0417t2[CLKUxpgN9];
                G5vWTBUYJ62++;
            }
            else {
                I9Es1atHoej[XEnexj6SqJu] = G5vWTBUYJ62;
                XEnexj6SqJu++;
                G5vWTBUYJ62 = (954 - 954);
            }
            CLKUxpgN9++;
        }
    }
    I9Es1atHoej[XEnexj6SqJu] = G5vWTBUYJ62;
    {
        CLKUxpgN9 = (1151 - 364) - (1685 - 898);
        vS5KGyuEHCP = (691 - 397) - (862 - 568);
        for (; XEnexj6SqJu >= CLKUxpgN9;) {
            if (!(VJvRhqFz[CLKUxpgN9][(554 - 554)] != FiEF1A[(713 - 713)])) {
                leXJ9my = (521 - 520);
                {
                    vS5KGyuEHCP = (262 - 90) - (1077 - 905);
                    for (; I9Es1atHoej[CLKUxpgN9] > vS5KGyuEHCP;) {
                        if (FiEF1A[vS5KGyuEHCP] != VJvRhqFz[CLKUxpgN9][vS5KGyuEHCP]) {
                            leXJ9my = (722 - 722);
                        }
                        vS5KGyuEHCP++;
                        if (I9Es1atHoej[CLKUxpgN9] != strlen (FiEF1A)) {
                            leXJ9my = (269 - 269);
                        }
                    }
                }
                if (leXJ9my) {
                    {
                        vS5KGyuEHCP = (712 - 206) - (1202 - 696);
                        for (; EVxZDoq8J3[vS5KGyuEHCP] != '\0';) {
                            VJvRhqFz[CLKUxpgN9][vS5KGyuEHCP] = EVxZDoq8J3[vS5KGyuEHCP];
                            vS5KGyuEHCP++;
                        }
                    }
                    I9Es1atHoej[CLKUxpgN9] = vS5KGyuEHCP;
                }
            }
            CLKUxpgN9++;
        }
    }
    {
        CLKUxpgN9 = (1041 - 72) - (1783 - 814);
        for (; CLKUxpgN9 < XEnexj6SqJu;) {
            {
                vS5KGyuEHCP = (249 - 16) - (899 - 666);
                for (; vS5KGyuEHCP < I9Es1atHoej[CLKUxpgN9];) {
                    printf ("%c", VJvRhqFz[CLKUxpgN9][vS5KGyuEHCP]);
                    vS5KGyuEHCP++;
                }
            }
            CLKUxpgN9++;
        }
    }
    {
        vS5KGyuEHCP = (172 - 172);
        for (; vS5KGyuEHCP < I9Es1atHoej[XEnexj6SqJu];) {
            printf ("%c\0", VJvRhqFz[CLKUxpgN9][vS5KGyuEHCP]);
            vS5KGyuEHCP++;
        }
    }
    return (489 - 489);
}

