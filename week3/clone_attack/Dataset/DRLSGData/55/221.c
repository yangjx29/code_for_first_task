const  long  y7YebotC4 = (921 - 821);
long  ytu1853, YZNb17E9;
char I4GtP1Z65Ep [y7YebotC4 + (663 - 662)];
long  Toi4Oqn [y7YebotC4 + (291 - 290)];

main () {
    long  AmVg5e;
    long  S8RzVnGI;
    long  uiyXg5fnWcCw;
    AmVg5e = (942 - 942);
    scanf ("%ld%s%ld", &ytu1853, I4GtP1Z65Ep, &YZNb17E9);
    S8RzVnGI = strlen (I4GtP1Z65Ep);
    {
        uiyXg5fnWcCw = (920 - 394) - (1015 - 489);
        while (uiyXg5fnWcCw < S8RzVnGI) {
            AmVg5e = AmVg5e *(ytu1853);
            if ('0' <= I4GtP1Z65Ep[uiyXg5fnWcCw] && '9' >= I4GtP1Z65Ep[uiyXg5fnWcCw])
                AmVg5e = AmVg5e +I4GtP1Z65Ep[uiyXg5fnWcCw] - '0';
            else {
                if (I4GtP1Z65Ep[uiyXg5fnWcCw] >= 'a' && 'z' >= I4GtP1Z65Ep[uiyXg5fnWcCw])
                    AmVg5e = AmVg5e +I4GtP1Z65Ep[uiyXg5fnWcCw] - 'a' + (298 - 288);
                else
                    AmVg5e = AmVg5e +I4GtP1Z65Ep[uiyXg5fnWcCw] - 'A' + (599 - 589);
            }
            uiyXg5fnWcCw = uiyXg5fnWcCw + (971 - 970);
        }
    }
    S8RzVnGI = (529 - 529);
    for (; AmVg5e > (866 - 866);) {
        Toi4Oqn[S8RzVnGI] = AmVg5e % YZNb17E9;
        AmVg5e = AmVg5e / (YZNb17E9);
        S8RzVnGI = S8RzVnGI +(651 - 650);
    }
    if (S8RzVnGI == (314 - 314))
        Toi4Oqn[++S8RzVnGI] = (789 - 789);
    {
        uiyXg5fnWcCw = (734 - 72) - 661;
        while (uiyXg5fnWcCw >= (817 - 817)) {
            if (Toi4Oqn[uiyXg5fnWcCw] < (815 - 805))
                printf ("%ld", Toi4Oqn[uiyXg5fnWcCw]);
            else
                printf ("%c", Toi4Oqn[uiyXg5fnWcCw] - (869 - 859) + 'A');
            uiyXg5fnWcCw = uiyXg5fnWcCw - (205 - 204);
        }
    }
    return (820 - 820);
}

