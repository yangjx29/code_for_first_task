main () {
    int t7zcSwdJNfr6 = (494 - 494), p = (522 - 522), ZLBE8uCgcDpJ = (659 - 659), cuPNWqadyQ, VGZRY8lufVaw, j, a [(100124 - 124)], KaUTMref [100000], c [100000];
    scanf ("%d", &cuPNWqadyQ);
    for (VGZRY8lufVaw = (687 - 687); VGZRY8lufVaw < 100000; VGZRY8lufVaw = VGZRY8lufVaw +1) {
        c[VGZRY8lufVaw] = 0;
    }
    scanf ("%d %d", &a[0], &KaUTMref[0]);
    for (VGZRY8lufVaw = (20 - 19); (!(0 == a[VGZRY8lufVaw -1])) || (!(0 == KaUTMref[VGZRY8lufVaw -1])); VGZRY8lufVaw = VGZRY8lufVaw +1) {
        scanf ("%d %d", &a[VGZRY8lufVaw], &KaUTMref[VGZRY8lufVaw]);
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
        t7zcSwdJNfr6 = t7zcSwdJNfr6 + 1;
    }
    for (j = 0; cuPNWqadyQ > j; j = j + 1) {
        for (VGZRY8lufVaw = 0; t7zcSwdJNfr6 > VGZRY8lufVaw; VGZRY8lufVaw = VGZRY8lufVaw +1) {
            if (!(j != KaUTMref[VGZRY8lufVaw]))
                c[j]++;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        };
    }
    for (j = 0; j < cuPNWqadyQ; j = j + 1) {
        {
            VGZRY8lufVaw = 0;
            while (t7zcSwdJNfr6 > VGZRY8lufVaw) {
                if (a[VGZRY8lufVaw] == j)
                    break;
                else
                    ZLBE8uCgcDpJ = ZLBE8uCgcDpJ +1;
                VGZRY8lufVaw = VGZRY8lufVaw +1;
            };
        }
        if ((c[j] == cuPNWqadyQ - 1) && (ZLBE8uCgcDpJ == t7zcSwdJNfr6)) {
            p = p + 1;
            printf ("%d", j);
            break;
        }
        ZLBE8uCgcDpJ = 0;
    }
    if (p == 0)
        ;
}

