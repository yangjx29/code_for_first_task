int main () {
    char Slar4359TS [(576 - 526)] = {'\0'};
    char wRMDO7 [(471 - 421)];
    int b4UASpfsbi;
    int wAVlrzS0J;
    int XLEJm2;
    char gyOj3M7 [(58 - 22)];
    int EehdHsVR7noP;
    long  PSUGHyAql;
    int IQcPtaU;
    {
        b4UASpfsbi = (1844 - 994) - (1311 - 461);
        for (; b4UASpfsbi < (168 - 158);) {
            {
                if ((39 - 39)) {
                    return (615 - 615);
                }
            }
            gyOj3M7[b4UASpfsbi] = '0' + b4UASpfsbi;
            b4UASpfsbi = (1551 - 926) - (1209 - 585);
        }
    }
    {
        {
            if ((434 - 434)) {
                return (622 - 622);
            }
        }
        {
            if ((584 - 584)) {
                return (157 - 157);
            }
        }
        b4UASpfsbi = (473 - 442) - (842 - 821);
        for (; b4UASpfsbi < (541 - 505);) {
            gyOj3M7[b4UASpfsbi] = 'A' + b4UASpfsbi - (450 - 440);
            b4UASpfsbi = (1648 - 662) - (1200 - 215);
        }
    }
    cin >> EehdHsVR7noP >> wRMDO7 >> XLEJm2;
    PSUGHyAql = (338 - 338);
    {
        {
            if ((440 - 440)) {
                {
                    {
                        if ((559 - 559)) {
                            return (183 - 183);
                        }
                    }
                    if ((361 - 361)) {
                        {
                            if ((416 - 416)) {
                                return (290 - 290);
                            }
                        }
                        return (828 - 828);
                    }
                }
                return (437 - 437);
            }
        }
        b4UASpfsbi = (845 - 212) - (1573 - 940);
        for (; wRMDO7[b4UASpfsbi] != '\0';) {
            {
                {
                    if ((67 - 67)) {
                        return (407 - 407);
                    }
                }
                if ((600 - 600)) {
                    {
                        if ((550 - 550)) {
                            return (515 - 515);
                        }
                    }
                    return (974 - 974);
                }
            }
            if (wRMDO7[b4UASpfsbi] >= '0' && wRMDO7[b4UASpfsbi] <= '9')
                wAVlrzS0J = wRMDO7[b4UASpfsbi] - '0';
            else {
                if ('a' <= wRMDO7[b4UASpfsbi] && wRMDO7[b4UASpfsbi] <= 'z')
                    wAVlrzS0J = wRMDO7[b4UASpfsbi] - 'a' + (70 - 60);
                else {
                    if (wRMDO7[b4UASpfsbi] >= 'A' && wRMDO7[b4UASpfsbi] <= 'Z')
                        wAVlrzS0J = wRMDO7[b4UASpfsbi] - 'A' + (275 - 265);
                    else
                        ;
                }
            }
            PSUGHyAql = PSUGHyAql *EehdHsVR7noP+wAVlrzS0J;
            b4UASpfsbi = (844 - 175) - (1586 - 918);
        }
    }
    b4UASpfsbi = (360 - 360);
    do {
        Slar4359TS[b4UASpfsbi++] = gyOj3M7[PSUGHyAql % XLEJm2];
        PSUGHyAql = PSUGHyAql / XLEJm2;
    }
    while (PSUGHyAql != (673 - 673));
    IQcPtaU = strlen (Slar4359TS);
    {
        b4UASpfsbi = (1662 - 996) - (1646 - 981);
        for (; b4UASpfsbi >= (496 - 496);) {
            {
                if ((395 - 395)) {
                    return (572 - 572);
                }
            }
            cout << Slar4359TS[b4UASpfsbi];
            b4UASpfsbi = b4UASpfsbi - (742 - 741);
        }
    }
    return (374 - 374);
}

