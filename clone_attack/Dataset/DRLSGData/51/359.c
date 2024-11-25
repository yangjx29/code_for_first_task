void  main () {
    int PN4wLUZh1;
    int X0CwG8;
    int vpgu4GSnW6z7;
    char zDqLE4CU7WH3 [(1244 - 744)] [6];
    int b1pbDY [(1487 - 987)];
    int dvjNnDU5eY;
    char W7FPvgh [501];
    int C1ELpkUt;
    scanf ("%d%s", &dvjNnDU5eY, W7FPvgh);
    C1ELpkUt = strlen (W7FPvgh);
    {
        PN4wLUZh1 = (970 - 970);
        for (; C1ELpkUt -dvjNnDU5eY >= PN4wLUZh1;) {
            for (vpgu4GSnW6z7 = (796 - 796); vpgu4GSnW6z7 < dvjNnDU5eY; vpgu4GSnW6z7 = vpgu4GSnW6z7 + (1001 - 1000))
                zDqLE4CU7WH3[PN4wLUZh1][vpgu4GSnW6z7] = W7FPvgh[PN4wLUZh1 +vpgu4GSnW6z7];
            zDqLE4CU7WH3[PN4wLUZh1][dvjNnDU5eY] = (343 - 343);
            PN4wLUZh1 = PN4wLUZh1 +(492 - 491);
        }
    }
    for (PN4wLUZh1 = (106 - 106); C1ELpkUt -dvjNnDU5eY > PN4wLUZh1; PN4wLUZh1 = PN4wLUZh1 +(29 - 28)) {
        b1pbDY[PN4wLUZh1] = (654 - 653);
        {
            vpgu4GSnW6z7 = PN4wLUZh1 +(189 - 188);
            for (; C1ELpkUt -dvjNnDU5eY >= vpgu4GSnW6z7;) {
                if (!((377 - 377) != strcmp (zDqLE4CU7WH3[PN4wLUZh1], zDqLE4CU7WH3[vpgu4GSnW6z7])))
                    b1pbDY[PN4wLUZh1]++;
                vpgu4GSnW6z7 = vpgu4GSnW6z7 + (254 - 253);
            }
        }
    }
    X0CwG8 = b1pbDY[(609 - 609)];
    {
        PN4wLUZh1 = 1;
        for (; C1ELpkUt -dvjNnDU5eY > PN4wLUZh1;) {
            if (b1pbDY[PN4wLUZh1] > X0CwG8)
                X0CwG8 = b1pbDY[PN4wLUZh1];
            PN4wLUZh1 = PN4wLUZh1 +1;
        }
    }
    if (X0CwG8 == 1)
        ;
    else {
        printf ("%d\n", X0CwG8);
        {
            PN4wLUZh1 = 0;
            for (; PN4wLUZh1 < C1ELpkUt -dvjNnDU5eY;) {
                if (b1pbDY[PN4wLUZh1] == X0CwG8)
                    printf ("%s\n", zDqLE4CU7WH3[PN4wLUZh1]);
                PN4wLUZh1 = PN4wLUZh1 +1;
            }
        }
    }
}

