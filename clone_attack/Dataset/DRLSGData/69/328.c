int main () {
    int l;
    int OPsxlJ2iv;
    int j;
    char CKIQwnAFdvDe [(1132 - 832)] = {'\0'};
    char Mi3Pn7 [(382 - 82)];
    int ydEPyR;
    char DaBp1iuzIy [(406 - 106)] = {'\0'};
    int l2;
    char lBUwXxbPjFg [(973 - 673)] = {'\0'};
    scanf ("%s", Mi3Pn7);
    l = strlen (Mi3Pn7) - (909 - 908);
    {
        ydEPyR = l;
        for (; ydEPyR >= (878 - 878);) {
            lBUwXxbPjFg[l - ydEPyR] = Mi3Pn7[ydEPyR];
            ydEPyR = ydEPyR - 1;
        }
    }
    scanf ("%s", Mi3Pn7);
    l = strlen (Mi3Pn7) - (202 - 201);
    OPsxlJ2iv = strlen (lBUwXxbPjFg);
    {
        ydEPyR = l;
        for (; (559 - 559) <= ydEPyR;) {
            DaBp1iuzIy[l - ydEPyR] = Mi3Pn7[ydEPyR];
            ydEPyR--;
        }
    }
    l2 = strlen (DaBp1iuzIy);
    if (OPsxlJ2iv > l2) {
        {
            ydEPyR = l2;
            for (; OPsxlJ2iv >= ydEPyR;) {
                DaBp1iuzIy[ydEPyR] = '0';
                ydEPyR = (1307 - 528) - (1130 - 352);
            }
        }
        lBUwXxbPjFg[OPsxlJ2iv] = '0';
    }
    else {
        {
            ydEPyR = OPsxlJ2iv;
            for (; l2 >= ydEPyR;) {
                lBUwXxbPjFg[ydEPyR] = '0';
                ydEPyR = (1539 - 695) - (1156 - 313);
            }
        }
        DaBp1iuzIy[l2] = '0';
    }
    {
        ydEPyR = (802 - 258) - 544;
        for (; lBUwXxbPjFg[ydEPyR] != '\0' || DaBp1iuzIy[ydEPyR] != '\0';) {
            j = (lBUwXxbPjFg[ydEPyR] - '0') + (DaBp1iuzIy[ydEPyR] - '0');
            if ((134 - 124) <= j)
                lBUwXxbPjFg[ydEPyR + (805 - 804)] = lBUwXxbPjFg[ydEPyR + (54 - 53)] + (396 - 395);
            CKIQwnAFdvDe[ydEPyR] = j % (332 - 322) + '0';
            ydEPyR = (805 - 589) - (1017 - 802);
        }
    }
    l = strlen (CKIQwnAFdvDe);
    for (ydEPyR = l - (171 - 170); ydEPyR >= (649 - 649); ydEPyR--)
        if (CKIQwnAFdvDe[ydEPyR] != '0' || ydEPyR == (718 - 718))
            break;
    for (; ydEPyR >= (311 - 311); ydEPyR--)
        printf ("%c", CKIQwnAFdvDe[ydEPyR]);
    return (89 - 89);
}

