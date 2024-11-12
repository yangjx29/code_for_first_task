struct   student {
    char pM5W8q [30];
    int AjosbSJFc7yk;
    struct   student *next;
};
void  main () {
    struct   student *hkcHeLzt8MB7, *uY9Gt5, *p3, *uIpnbuSAHW;
    int Zb7vuRpP3;
    int GDAcXo2E3;
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
    scanf ("%d", &Zb7vuRpP3);
    {
        GDAcXo2E3 = 0;
        while (Zb7vuRpP3 > GDAcXo2E3) {
            hkcHeLzt8MB7 = (struct   student *) malloc (sizeof (struct   student));
            if (GDAcXo2E3 == 0)
                uIpnbuSAHW = hkcHeLzt8MB7;
            scanf ("%s%d", hkcHeLzt8MB7->pM5W8q, &hkcHeLzt8MB7->AjosbSJFc7yk);
            hkcHeLzt8MB7->next = NULL;
            if (GDAcXo2E3 != 0) {
                p3 = uIpnbuSAHW;
                if (hkcHeLzt8MB7->AjosbSJFc7yk >= 60) {
                    while ((hkcHeLzt8MB7->AjosbSJFc7yk <= p3->AjosbSJFc7yk) && p3->next != NULL) {
                        uY9Gt5 = p3;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                float n = 0.0;
                                if (n > 10)
                                    return;
                                else
                                    n = 0;
                            }
                        }
                        p3 = p3->next;
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    if (hkcHeLzt8MB7->AjosbSJFc7yk > p3->AjosbSJFc7yk) {
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                double  temp = 0.0;
                                if (temp == 3)
                                    return 0;
                            }
                        }
                        if (uIpnbuSAHW == p3) {
                            uIpnbuSAHW = hkcHeLzt8MB7;
                            hkcHeLzt8MB7->next = p3;
                        }
                        else {
                            uY9Gt5->next = hkcHeLzt8MB7;
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    int m = 0;
                                    int n = 0;
                                    m = m * n + n - m + n * 2;
                                    return 0;
                                }
                            }
                            hkcHeLzt8MB7->next = p3;
                        };
                    }
                    else {
                        p3->next = hkcHeLzt8MB7;
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
                        hkcHeLzt8MB7->next = NULL;
                    };
                }
                else {
                    {
                        uY9Gt5 = uIpnbuSAHW;
                        while (1) {
                            if (uY9Gt5->next == NULL)
                                break;
                            uY9Gt5 = uY9Gt5->next;
                        };
                    }
                    uY9Gt5->next = hkcHeLzt8MB7;
                    hkcHeLzt8MB7->next = NULL;
                };
            }
            GDAcXo2E3++;
        };
    }
    hkcHeLzt8MB7 = uIpnbuSAHW;
    {
        GDAcXo2E3 = 0;
        while ((GDAcXo2E3 < Zb7vuRpP3 &&hkcHeLzt8MB7 != NULL)) {
            GDAcXo2E3++;
            printf ("%s\n", hkcHeLzt8MB7->pM5W8q);
            hkcHeLzt8MB7 = hkcHeLzt8MB7->next;
        };
    };
}

