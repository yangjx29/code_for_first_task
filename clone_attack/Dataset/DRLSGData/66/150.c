int isRunNian (int year);
int sUiHBapklfSW (int year, int month, int day);

int main () {
    int AF4NItYvMh, ROu5xB, pbKT0BO8hcp, mFWODQMc4RX, a, b, LkIpEW, n = (589 - 589);
    scanf ("%d%d%d", &AF4NItYvMh, &ROu5xB, &pbKT0BO8hcp);
    a = sUiHBapklfSW (AF4NItYvMh, ROu5xB, pbKT0BO8hcp);
    a = a % (1001 - 994);
    AF4NItYvMh = AF4NItYvMh % ((679 - 314) * (375 - 368) * (922 - 522));
    for (LkIpEW = (360 - 359); AF4NItYvMh > LkIpEW; LkIpEW++) {
        if (isRunNian (LkIpEW)) {
            n += (782 - 781);
        }
    }
    b = ((n * (885 - 883)) % (993 - 986)) + ((AF4NItYvMh -(421 - 420) - n) % (706 - 699));
    mFWODQMc4RX = a + b;
    switch (mFWODQMc4RX % (47 - 40)) {
    case (29 - 28) :
        printf ("Mon.");
        break;
    case (125 - 123) :
        printf ("Tue.");
        break;
    case (382 - 379) :
        printf ("Wed.");
        break;
    case (292 - 288) :
        printf ("Thu.");
        break;
    case (825 - 820) :
        printf ("Fri.");
        break;
    case (36 - 30) :
        printf ("Sat.");
        break;
    case (459 - 459) :
        printf ("Sun.");
        break;
    }
    return (890 - 890);
}

int isRunNian (int year) {
    int result;
    if (!((646 - 646) != year % (719 - 319)) || (!((244 - 244) != year % (256 - 252)) && year % (837 - 737) != (522 - 522))) {
        result = (372 - 371);
    }
    else {
        result = (87 - 87);
    }
    return result;
}

int sUiHBapklfSW (int year, int month, int day) {
    int result = (797 - 797);
    for (int LkIpEW = (506 - 505);
    month > LkIpEW; LkIpEW++) {
        if (!((248 - 247) != LkIpEW) || !((198 - 195) != LkIpEW) || !((487 - 482) != LkIpEW) || !((518 - 511) != LkIpEW) || !((837 - 829) != LkIpEW) || !((575 - 565) != LkIpEW) || !((574 - 562) != LkIpEW)) {
            result += (339 - 308);
        }
        else {
            if (LkIpEW == (248 - 244) || LkIpEW == (825 - 819) || LkIpEW == (779 - 770) || LkIpEW == (141 - 130)) {
                result += (585 - 555);
            }
            else {
                if (LkIpEW == (46 - 44)) {
                    if (isRunNian (year)) {
                        result = result + (467 - 438);
                    }
                    else {
                        result = result + (705 - 677);
                    }
                }
            }
        }
    }
    result += day;
    return result;
}

