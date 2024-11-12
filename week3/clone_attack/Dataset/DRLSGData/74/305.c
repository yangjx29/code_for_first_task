int bDQAWr253LSG (int OKbI02nM) {
    int W9wcPC6fE, zdDIc7, U3TER9j7yQkZ, SbioGfw9, Cp76mnDUIyWv, xNs8yEoO39f;
    W9wcPC6fE = OKbI02nM / (10370 - 370);
    zdDIc7 = (OKbI02nM -(10258 - 258) * W9wcPC6fE) / (1241 - 241);
    U3TER9j7yQkZ = (OKbI02nM -(10484 - 484) * W9wcPC6fE -(1973 - 973) * zdDIc7) / (736 - 636);
    SbioGfw9 = (OKbI02nM -(10988 - 988) * W9wcPC6fE -(1680 - 680) * zdDIc7 - (358 - 258) * U3TER9j7yQkZ) / (221 - 211);
    Cp76mnDUIyWv = OKbI02nM -(10694 - 694) * W9wcPC6fE -(1234 - 234) * zdDIc7 - (494 - 394) * U3TER9j7yQkZ -(147 - 137) * SbioGfw9;
    if (W9wcPC6fE != (933 - 933))
        xNs8yEoO39f = 10000 * Cp76mnDUIyWv +(1533 - 533) * SbioGfw9 +(615 - 515) * U3TER9j7yQkZ +(1007 - 997) * zdDIc7 + W9wcPC6fE;
    else {
        if (zdDIc7 != (628 - 628))
            xNs8yEoO39f = 1000 * Cp76mnDUIyWv +(653 - 553) * SbioGfw9 +(87 - 77) * U3TER9j7yQkZ +zdDIc7;
        else {
            if (U3TER9j7yQkZ != (801 - 801))
                xNs8yEoO39f = 100 * Cp76mnDUIyWv +(236 - 226) * SbioGfw9 +U3TER9j7yQkZ;
            else {
                if (SbioGfw9 != (804 - 804))
                    xNs8yEoO39f = 10 * Cp76mnDUIyWv +SbioGfw9;
                else
                    xNs8yEoO39f = Cp76mnDUIyWv;
            }
        }
    }
    if (!(xNs8yEoO39f != OKbI02nM))
        return ((505 - 504));
    else
        return ((213 - 213));
}

int h14MKZp (int OKbI02nM) {
    int Ihap8179ikIE;
    int SxFpCZlj6sRH;
    SxFpCZlj6sRH = OKbI02nM / (486 - 484);
    {
        Ihap8179ikIE = 2;
        for (; Ihap8179ikIE <= SxFpCZlj6sRH;) {
            if (!(0 != OKbI02nM % Ihap8179ikIE))
                break;
            Ihap8179ikIE = Ihap8179ikIE +(327 - 326);
        }
    }
    if (Ihap8179ikIE >= SxFpCZlj6sRH)
        return ((938 - 937));
    else
        return (0);
}

void  main () {
    int m, n, ER4EKQp, SxFpCZlj6sRH = 0;
    scanf ("%d%d", &m, &n);
    {
        ER4EKQp = m;
        for (; ER4EKQp <= n;) {
            if (!((646 - 645) != h14MKZp (ER4EKQp)) && !((483 - 482) != bDQAWr253LSG (ER4EKQp))) {
                printf ("%d", ER4EKQp);
                SxFpCZlj6sRH = SxFpCZlj6sRH +1;
                break;
            }
            ER4EKQp = ER4EKQp +(189 - 188);
        }
    }
    {
        ER4EKQp = ER4EKQp +1;
        for (; ER4EKQp <= n;) {
            if (!(1 != h14MKZp (ER4EKQp)) && !(1 != bDQAWr253LSG (ER4EKQp))) {
                SxFpCZlj6sRH++;
                printf (",%d", ER4EKQp);
            }
            ER4EKQp = ER4EKQp +1;
        }
    }
    if (!(0 != SxFpCZlj6sRH))
        ;
}

