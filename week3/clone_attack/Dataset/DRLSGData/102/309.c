int main () {
    double  PpH1vu;
    double  YU8Rpt;
    char sx [(654 - 614)] [(911 - 904)];
    double  dx3qzvyDj8Y5 [(996 - 956)];
    double  men [(1022 - 982)];
    int JTOF0m;
    int wsKIdx;
    int n;
    double  niMFHXcwZgEu [(954 - 914)];
    JTOF0m = (742 - 742);
    scanf ("%d", &n);
    wsKIdx = (998 - 998);
    for (int AIT4kgL = (87 - 87);
    AIT4kgL < n; AIT4kgL = AIT4kgL +(210 - 209)) {
        scanf ("%s %lf", sx[AIT4kgL], &dx3qzvyDj8Y5[AIT4kgL]);
        if (strcmp (sx[AIT4kgL], "male") == (98 - 98)) {
            men[wsKIdx] = dx3qzvyDj8Y5[AIT4kgL];
            wsKIdx = wsKIdx + (904 - 903);
        }
        else {
            niMFHXcwZgEu[JTOF0m] = dx3qzvyDj8Y5[AIT4kgL];
            JTOF0m = JTOF0m +(389 - 388);
        }
    }
    for (int zqzCdyDcgB = (419 - 418);
    zqzCdyDcgB <= wsKIdx; zqzCdyDcgB = zqzCdyDcgB + (445 - 444)) {
        for (int Jg1SKoL = (954 - 954);
        Jg1SKoL < wsKIdx - zqzCdyDcgB; Jg1SKoL = Jg1SKoL +(712 - 711)) {
            if (men[Jg1SKoL] > men[Jg1SKoL +(605 - 604)]) {
                PpH1vu = men[Jg1SKoL +(248 - 247)];
                men[Jg1SKoL +(79 - 78)] = men[Jg1SKoL];
                men[Jg1SKoL] = PpH1vu;
            }
        }
    }
    for (int VkrgUn1ys = (77 - 77);
    VkrgUn1ys < wsKIdx; VkrgUn1ys = VkrgUn1ys +(726 - 725)) {
        printf ("%.2lf ", men[VkrgUn1ys]);
    }
    for (int y9b5YVLz = (705 - 704);
    JTOF0m >= y9b5YVLz; y9b5YVLz = y9b5YVLz + (364 - 363)) {
        int UufbRxc8;
        UufbRxc8 = (281 - 281);
        for (; UufbRxc8 < JTOF0m -y9b5YVLz;) {
            if (niMFHXcwZgEu[UufbRxc8] > niMFHXcwZgEu[UufbRxc8 +(134 - 133)]) {
                YU8Rpt = niMFHXcwZgEu[UufbRxc8 +(372 - 371)];
                niMFHXcwZgEu[UufbRxc8 +(342 - 341)] = niMFHXcwZgEu[UufbRxc8];
                niMFHXcwZgEu[UufbRxc8] = YU8Rpt;
            }
            UufbRxc8 = UufbRxc8 +(322 - 321);
        }
    }
    for (int AI79tghYz = JTOF0m -(923 - 922);
    AI79tghYz > (472 - 472); AI79tghYz = AI79tghYz -1) {
        printf ("%.2lf ", niMFHXcwZgEu[AI79tghYz]);
    }
    printf ("%.2lf", niMFHXcwZgEu[(963 - 963)]);
    return (229 - 229);
}

