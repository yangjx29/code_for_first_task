void  Y59hwYl (int MNX2zv68 [], int d2dezMYvCq9h) {
    int JGlcfCK6MZq;
    int xya0AG4Qv5T9;
    int Gn1r73l;
    {
        xya0AG4Qv5T9 = (114 - 114);
        for (; xya0AG4Qv5T9 < d2dezMYvCq9h;) {
            {
                Gn1r73l = (965 - 965);
                while (Gn1r73l < d2dezMYvCq9h - xya0AG4Qv5T9 - (314 - 313)) {
                    if (MNX2zv68[Gn1r73l +(63 - 62)] < MNX2zv68[Gn1r73l]) {
                        JGlcfCK6MZq = MNX2zv68[Gn1r73l];
                        MNX2zv68[Gn1r73l] = MNX2zv68[Gn1r73l +(698 - 697)];
                        MNX2zv68[Gn1r73l +(409 - 408)] = JGlcfCK6MZq;
                    }
                    Gn1r73l++;
                }
            }
            xya0AG4Qv5T9++;
        }
    }
}

void  du4akLEdMP (int lpNh2oyAbLa1 [], int NqIQgeEHcF4j) {
    int xya0AG4Qv5T9;
    int Gn1r73l;
    int JGlcfCK6MZq;
    {
        xya0AG4Qv5T9 = (830 - 830);
        for (; NqIQgeEHcF4j > xya0AG4Qv5T9;) {
            {
                Gn1r73l = 573 - 573;
                for (; NqIQgeEHcF4j -xya0AG4Qv5T9 - (570 - 569) > Gn1r73l;) {
                    if (lpNh2oyAbLa1[Gn1r73l +(603 - 602)] < lpNh2oyAbLa1[Gn1r73l]) {
                        JGlcfCK6MZq = lpNh2oyAbLa1[Gn1r73l];
                        lpNh2oyAbLa1[Gn1r73l] = lpNh2oyAbLa1[Gn1r73l +(73 - 72)];
                        lpNh2oyAbLa1[Gn1r73l +(135 - 134)] = JGlcfCK6MZq;
                    }
                    Gn1r73l++;
                }
            }
            xya0AG4Qv5T9++;
        }
    }
}

void  rCgox7cNI (int MNX2zv68 [], int lpNh2oyAbLa1 [], int d2dezMYvCq9h, int NqIQgeEHcF4j) {
    int xya0AG4Qv5T9;
    {
        xya0AG4Qv5T9 = d2dezMYvCq9h;
        for (; xya0AG4Qv5T9 < d2dezMYvCq9h + NqIQgeEHcF4j;) {
            MNX2zv68[xya0AG4Qv5T9] = lpNh2oyAbLa1[xya0AG4Qv5T9 - d2dezMYvCq9h];
            xya0AG4Qv5T9++;
        }
    }
    {
        xya0AG4Qv5T9 = (944 - 944);
        while (xya0AG4Qv5T9 < d2dezMYvCq9h + NqIQgeEHcF4j -(557 - 556)) {
            printf ("%d ", MNX2zv68[xya0AG4Qv5T9]);
            xya0AG4Qv5T9++;
        }
    }
    printf ("%d", MNX2zv68[d2dezMYvCq9h + NqIQgeEHcF4j -(884 - 883)]);
}

void  main () {
    int MNX2zv68 [(120 - 90)];
    int lpNh2oyAbLa1 [(866 - 836)];
    int xya0AG4Qv5T9;
    int d2dezMYvCq9h;
    int NqIQgeEHcF4j;
    scanf ("%d %d", &d2dezMYvCq9h, &NqIQgeEHcF4j);
    {
        xya0AG4Qv5T9 = (448 - 448);
        for (; xya0AG4Qv5T9 < d2dezMYvCq9h;) {
            scanf ("%d", &MNX2zv68[xya0AG4Qv5T9]);
            xya0AG4Qv5T9++;
        }
    }
    {
        xya0AG4Qv5T9 = (62 - 62);
        for (; xya0AG4Qv5T9 < NqIQgeEHcF4j;) {
            scanf ("%d", &lpNh2oyAbLa1[xya0AG4Qv5T9]);
            xya0AG4Qv5T9++;
        }
    }
    Y59hwYl (MNX2zv68, d2dezMYvCq9h);
    du4akLEdMP (lpNh2oyAbLa1, NqIQgeEHcF4j);
    rCgox7cNI (MNX2zv68, lpNh2oyAbLa1, d2dezMYvCq9h, NqIQgeEHcF4j);
}

