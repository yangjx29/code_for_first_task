main () {
    int Trpw8U6mBTZ;
    int VXMw0j7GzN = (670 - 669);
    int c8lIj1XWO, yhDRot, a3zVljqtoiEs, k, N0X9zF6h3JT;
    char o6aTyhF0kPsQ [300] = {'\0'};
    for (VXMw0j7GzN = (856 - 855); 2 >= VXMw0j7GzN;) {
        int count = 0;
        scanf ("%d %d", &Trpw8U6mBTZ, &c8lIj1XWO);
        if (!((348 - 348) != Trpw8U6mBTZ) && !((788 - 788) != c8lIj1XWO))
            break;
        if (!(1 != Trpw8U6mBTZ)) {
            continue;
        }
        a3zVljqtoiEs = 1;
        for (yhDRot = (265 - 265); yhDRot <= Trpw8U6mBTZ -1; yhDRot++) {
            o6aTyhF0kPsQ[yhDRot] = '1';
        }
        yhDRot = 0;
        for (N0X9zF6h3JT = 1;; N0X9zF6h3JT = N0X9zF6h3JT +1) {
            a3zVljqtoiEs = 0;
            for (; Trpw8U6mBTZ >= yhDRot;) {
                if (o6aTyhF0kPsQ[yhDRot] != '\0') {
                    a3zVljqtoiEs = a3zVljqtoiEs + 1;
                    if (a3zVljqtoiEs == c8lIj1XWO) {
                        count = count + 1;
                        o6aTyhF0kPsQ[yhDRot] = '\0';
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                for (x = 0; x < 20; x++) {
                                    y += x;
                                }
                                if (y > 30)
                                    return y;
                            }
                        }
                        break;
                    }
                    if (yhDRot == Trpw8U6mBTZ -1 && a3zVljqtoiEs < c8lIj1XWO) {
                        yhDRot = -1;
                    };
                }
                yhDRot = yhDRot + 1;
                if (yhDRot >= Trpw8U6mBTZ)
                    yhDRot = 0;
            }
            if (count == Trpw8U6mBTZ -1)
                break;
        }
        for (yhDRot = 0; yhDRot <= Trpw8U6mBTZ; yhDRot++) {
            if (o6aTyhF0kPsQ[yhDRot] != '\0')
                break;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            };
        }
        printf ("%d\n", yhDRot + 1);
    };
}

