struct   kMRfk1 {
    char CCX391i2ft [10];
    int age;
}
kMRfk1 [100];

void  main () {
    char Lh8rR4 [100] [10];
    char tkBdcRCDjqLh [100];
    int cUw4pO, JB40lXhxnRI = -1, FU2B5aCn, nQphnf1s, max;
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
    scanf ("%d", &nQphnf1s);
    {
        cUw4pO = 0;
        while (cUw4pO < nQphnf1s) {
            scanf ("%s %d", &kMRfk1[cUw4pO].CCX391i2ft, &kMRfk1[cUw4pO].age);
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
            cUw4pO = cUw4pO + 1;
        };
    }
    {
        cUw4pO = 0;
        while (cUw4pO < nQphnf1s) {
            tkBdcRCDjqLh[cUw4pO] = kMRfk1[cUw4pO].age;
            if (kMRfk1[cUw4pO].age >= 60)
                JB40lXhxnRI = JB40lXhxnRI +1;
            cUw4pO = cUw4pO + 1;
        };
    }
    for (FU2B5aCn = 0; FU2B5aCn <= JB40lXhxnRI; FU2B5aCn = FU2B5aCn +1) {
        max = 0;
        {
            cUw4pO = 0;
            while (cUw4pO < nQphnf1s) {
                max = (max >= tkBdcRCDjqLh[cUw4pO]) ? max : tkBdcRCDjqLh[cUw4pO];
                cUw4pO = cUw4pO + 1;
            };
        }
        {
            cUw4pO = 0;
            while (cUw4pO < nQphnf1s) {
                if (tkBdcRCDjqLh[cUw4pO] == max) {
                    printf ("%s\n", kMRfk1[cUw4pO].CCX391i2ft);
                    tkBdcRCDjqLh[cUw4pO] = 0;
                    break;
                }
                cUw4pO = cUw4pO + 1;
            };
        };
    }
    {
        cUw4pO = 0;
        while (cUw4pO < nQphnf1s) {
            if (kMRfk1[cUw4pO].age < 60)
                printf ("%s\n", kMRfk1[cUw4pO].CCX391i2ft);
            cUw4pO = cUw4pO + 1;
        };
    };
}

