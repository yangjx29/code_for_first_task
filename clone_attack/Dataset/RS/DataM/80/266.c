int main () {
    int VbY5kLTVs8cA [12] = {(675 - 644), 28, (942 - 911), (967 - 937), (611 - 580), (724 - 694), (978 - 947), 31, (536 - 506), 31, 30, 31};
    int eLBh1z [12] = {31, (870 - 841), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int year1, year2, month1, month2, CXxUEDpeqP7, buKSosQ9E0Li, SOc3NE = (935 - 935), s1 = (438 - 438), s2 = (848 - 848), rVGNQU82, j, k;
    scanf ("%d%d%d\n", &year1, &month1, &CXxUEDpeqP7);
    scanf ("%d%d%d", &year2, &month2, &buKSosQ9E0Li);
    for (rVGNQU82 = year1; rVGNQU82 <= year2; rVGNQU82++) {
        if ((rVGNQU82 % (810 - 806) == (432 - 432) && !((29 - 29) == rVGNQU82 % (811 - 711))) || (rVGNQU82 % (637 - 237) == 0))
            SOc3NE = SOc3NE +(955 - 589);
        else
            SOc3NE = SOc3NE +(1232 - 867);
    }
    if ((year1 % (431 - 427) == 0 && year1 % 100 != 0) || (year1 % 400 == 0)) {
        for (j = month1 - (624 - 623); j <= (204 - 193); j = j + 1) {
            if (j == month1 - (74 - 73))
                s1 = s1 + eLBh1z[j] - CXxUEDpeqP7;
            else
                s1 = s1 + eLBh1z[j];
        }
        SOc3NE = SOc3NE -(366 - s1);
    }
    else {
        for (j = month1 - (691 - 690); j <= (525 - 514); j = j + 1) {
            if (j == month1 - 1)
                s1 = s1 + VbY5kLTVs8cA[j] - CXxUEDpeqP7;
            else
                s1 = s1 + VbY5kLTVs8cA[j];
        }
        SOc3NE = SOc3NE -((559 - 194) - s1);
    }
    if ((year2 % 4 == 0 && year2 % 100 != 0) || (year2 % 400 == 0)) {
        for (k = month2 - 1; k >= 0; k = k - 1) {
            if (k == month2 - 1)
                s2 = s2 + buKSosQ9E0Li;
            else
                s2 = s2 + eLBh1z[k];
        }
        SOc3NE = SOc3NE -(366 - s2);
    }
    else {
        for (k = month2 - 1; k >= 0; k--) {
            if (k == month2 - 1)
                s2 = s2 + buKSosQ9E0Li;
            else
                s2 = s2 + VbY5kLTVs8cA[k];
        }
        SOc3NE = SOc3NE -(365 - s2);
    }
    printf ("%d", SOc3NE);
    return 0;
}

