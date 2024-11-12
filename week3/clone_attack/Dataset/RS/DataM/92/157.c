main () {
    int n, tian [1050], LDiGXpYxaP [1050], MAWiSpVkBsx2, j, vGMY8dA, p4TWzyV, W9MoLFWKTeg = 0;
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
    scanf ("%d", &n);
    while (n != 0) {
        int O1MwKzxEoW = 0, head2 = 0, end1 = n - 1, rOAykE8q = n - 1;
        {
            MAWiSpVkBsx2 = 0;
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
            }
            while (n > MAWiSpVkBsx2) {
                scanf ("%d", &tian[MAWiSpVkBsx2]);
                MAWiSpVkBsx2 = MAWiSpVkBsx2 +1;
            };
        }
        {
            MAWiSpVkBsx2 = 0;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (n > MAWiSpVkBsx2) {
                scanf ("%d", &LDiGXpYxaP[MAWiSpVkBsx2]);
                MAWiSpVkBsx2 = MAWiSpVkBsx2 +1;
            };
        }
        {
            MAWiSpVkBsx2 = 0;
            while (n - 1 > MAWiSpVkBsx2) {
                {
                    j = 0;
                    while (n - 1 - MAWiSpVkBsx2 > j) {
                        if (tian[j + 1] > tian[j]) {
                            vGMY8dA = tian[j];
                            tian[j] = tian[j + 1];
                            tian[j + 1] = vGMY8dA;
                        }
                        if (LDiGXpYxaP[j + 1] > LDiGXpYxaP[j]) {
                            p4TWzyV = LDiGXpYxaP[j];
                            LDiGXpYxaP[j] = LDiGXpYxaP[j + 1];
                            LDiGXpYxaP[j + 1] = p4TWzyV;
                        }
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
                        }
                        j = j + 1;
                    };
                }
                MAWiSpVkBsx2 = MAWiSpVkBsx2 +1;
            };
        }
        {
            MAWiSpVkBsx2 = 0;
            while (MAWiSpVkBsx2 < n) {
                if (tian[O1MwKzxEoW] > LDiGXpYxaP[head2]) {
                    W9MoLFWKTeg = W9MoLFWKTeg +1;
                    O1MwKzxEoW = O1MwKzxEoW +1;
                    head2 = head2 + 1;
                }
                else {
                    if (tian[end1] > LDiGXpYxaP[rOAykE8q]) {
                        rOAykE8q = rOAykE8q - 1;
                        end1 = end1 - 1;
                        W9MoLFWKTeg = W9MoLFWKTeg +1;
                    }
                    else if (tian[O1MwKzxEoW] <= LDiGXpYxaP[head2]) {
                        if (tian[end1] < LDiGXpYxaP[head2]) {
                            head2 = head2 + 1;
                            W9MoLFWKTeg = W9MoLFWKTeg -1;
                            end1 = end1 - 1;
                        }
                        else {
                            head2 = head2 + 1;
                            end1 = end1 - 1;
                        };
                    }
                    else if (tian[end1] <= LDiGXpYxaP[rOAykE8q]) {
                        head2 = head2 + 1;
                        W9MoLFWKTeg = W9MoLFWKTeg -1;
                        end1--;
                    };
                }
                MAWiSpVkBsx2++;
            };
        }
        scanf ("%d", &n);
        printf ("%d\n", 200 * W9MoLFWKTeg);
        W9MoLFWKTeg = 0;
    };
}

