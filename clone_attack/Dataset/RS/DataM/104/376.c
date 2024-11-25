int RaPA4ZeJE (int cO6XWP) {
    int EEqCgz = -(597 - 596), power = (532 - 531);
    while (cO6XWP + (583 - 582) > power) {
        EEqCgz = EEqCgz +(16 - 15);
        power = power * (526 - 524);
    }
    return EEqCgz;
}

void  back (int di8PRIEhj [], int cO6XWP) {
    int EEqCgz;
    di8PRIEhj[(954 - 954)] = cO6XWP;
    {
        EEqCgz = 0;
        while (EEqCgz < RaPA4ZeJE (cO6XWP) +(348 - 347)) {
            di8PRIEhj[EEqCgz +1] = di8PRIEhj[EEqCgz] / 2;
            EEqCgz = EEqCgz +1;
        };
    };
}

void  main () {
    int di8PRIEhj [11], ujnWRkySh9qO [11];
    int EEqCgz, LP2SaCIr6, cO6XWP;
    scanf ("%d %d", &LP2SaCIr6, &cO6XWP);
    back (di8PRIEhj, LP2SaCIr6);
    back (ujnWRkySh9qO, cO6XWP);
    {
        EEqCgz = 0;
        while (EEqCgz < 12) {
            if (di8PRIEhj[RaPA4ZeJE (LP2SaCIr6) -EEqCgz] == ujnWRkySh9qO[RaPA4ZeJE (cO6XWP) -EEqCgz] && di8PRIEhj[RaPA4ZeJE (LP2SaCIr6) -1 - EEqCgz] != ujnWRkySh9qO[RaPA4ZeJE (cO6XWP) -EEqCgz-1]) {
                printf ("%d\n", di8PRIEhj[RaPA4ZeJE (LP2SaCIr6) -EEqCgz]);
                break;
            }
            EEqCgz++;
        };
    };
}

