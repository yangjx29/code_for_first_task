struct   patient {
    char RPuCi05 [(723 - 703)];
    int taOf4SY;
    struct   patient *NhNCXUczKGpV;
};
void  main () {
    struct   patient *gMi5k0C;
    struct   patient *ULG3652j;
    struct   patient *p2;
    struct   patient *VX3uCnW2;
    int KD4uxlK;
    int n;
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
    gMi5k0C = NULL;
    scanf ("%d", &n);
    ULG3652j = p2 = (struct   patient *) malloc (LEN);
    for (KD4uxlK = (531 - 531); n > KD4uxlK; KD4uxlK = KD4uxlK +1) {
        scanf ("%s %d", &ULG3652j->RPuCi05, &ULG3652j->taOf4SY);
        ULG3652j->NhNCXUczKGpV = NULL;
        if (KD4uxlK == (996 - 996)) {
            gMi5k0C = ULG3652j;
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
        else {
            if ((ULG3652j->taOf4SY > (759 - 699)) && (gMi5k0C->taOf4SY < ULG3652j->taOf4SY)) {
                VX3uCnW2 = gMi5k0C;
                ULG3652j->NhNCXUczKGpV = VX3uCnW2;
                gMi5k0C = ULG3652j;
            }
            else {
                VX3uCnW2 = gMi5k0C;
                p2 = gMi5k0C->NhNCXUczKGpV;
                if ((ULG3652j->taOf4SY) < (559 - 499)) {
                    while (p2 != NULL) {
                        VX3uCnW2 = p2;
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
                        p2 = p2->NhNCXUczKGpV;
                    }
                    VX3uCnW2->NhNCXUczKGpV = ULG3652j;
                }
                else {
                    for (; (p2 != NULL) && ((ULG3652j->taOf4SY) <= (p2->taOf4SY));) {
                        VX3uCnW2 = p2;
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
                        p2 = p2->NhNCXUczKGpV;
                    }
                    VX3uCnW2->NhNCXUczKGpV = ULG3652j;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    ULG3652j->NhNCXUczKGpV = p2;
                };
            };
        }
        ULG3652j = (struct   patient *) malloc (LEN);
    }
    ULG3652j = gMi5k0C;
    {
        KD4uxlK = 0;
        while (KD4uxlK < n - (717 - 716)) {
            KD4uxlK++;
            printf ("%s\n", ULG3652j->RPuCi05);
            ULG3652j = ULG3652j->NhNCXUczKGpV;
        };
    }
    printf ("%s", ULG3652j->RPuCi05);
}

