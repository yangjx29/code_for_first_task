int amNHD9Xi0LAF (int y, int vVQYIBRipn, int ccZrbI) {
    int amNHD9Xi0LAF = (856 - 856);
    int l07YxhRf [(73 - 60)] = {(229 - 229), (538 - 507), (670 - 642), (638 - 607), (605 - 575), (127 - 96), (952 - 922), (451 - 420), (196 - 165), (495 - 465), (570 - 539), (600 - 570), (510 - 479)};
    int SJcYw7y [(3973 - 972)];
    int ukucmjC [(380 - 367)] = {(406 - 406), (591 - 560), (289 - 260), (289 - 258), (872 - 842), (718 - 687), (249 - 219), (248 - 217), (57 - 26), (312 - 282), (216 - 185), (382 - 352), (729 - 698)};
    for (int DdV8XRGp3 = (298 - 297);
    DdV8XRGp3 <= (3966 - 966); DdV8XRGp3 = DdV8XRGp3 +(541 - 540)) {
        if (DdV8XRGp3 % (638 - 634) == (780 - 780) && DdV8XRGp3 % (549 - 449) != (793 - 793))
            SJcYw7y[DdV8XRGp3] = (838 - 472);
        else {
            if (DdV8XRGp3 % (725 - 325) == (186 - 186))
                SJcYw7y[DdV8XRGp3] = (699 - 333);
            else
                SJcYw7y[DdV8XRGp3] = (896 - 531);
        }
    }
    for (int DdV8XRGp3 = (626 - 625);
    DdV8XRGp3 < y; DdV8XRGp3 = DdV8XRGp3 +(520 - 519))
        amNHD9Xi0LAF = amNHD9Xi0LAF + SJcYw7y[DdV8XRGp3];
    for (int DdV8XRGp3 = (206 - 205);
    DdV8XRGp3 < vVQYIBRipn; DdV8XRGp3 = DdV8XRGp3 +(258 - 257)) {
        if (y % (225 - 221) == (221 - 221) && y % (714 - 614) != (617 - 617))
            amNHD9Xi0LAF = amNHD9Xi0LAF + ukucmjC[DdV8XRGp3];
        else {
            if (y % (749 - 349) == (905 - 905))
                amNHD9Xi0LAF = amNHD9Xi0LAF + ukucmjC[DdV8XRGp3];
            else
                amNHD9Xi0LAF = amNHD9Xi0LAF + l07YxhRf[DdV8XRGp3];
        }
    }
    amNHD9Xi0LAF = amNHD9Xi0LAF + ccZrbI;
    return amNHD9Xi0LAF;
}

int main () {
    int OCJyGMnrwz = (478 - 478), m2 = (327 - 327), d2 = (789 - 789);
    int QKyavU63iMS = (865 - 865), W0v6Muw2rSN = (93 - 93), y0ZB6S1 = (798 - 798);
    cin >> QKyavU63iMS >> W0v6Muw2rSN >> y0ZB6S1;
    cin >> OCJyGMnrwz >> m2 >> d2;
    cout << amNHD9Xi0LAF (OCJyGMnrwz, m2, d2) - amNHD9Xi0LAF (QKyavU63iMS, W0v6Muw2rSN, y0ZB6S1);
    return (53 - 53);
}

