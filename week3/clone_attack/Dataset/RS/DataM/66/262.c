int krjtZ30QKlmw (int i9r0BmP, int zTtRqY7wUFX, int day);
int v8bTDL (int i9r0BmP);

int main () {
    int TVnaW1k;
    int month2;
    int OOloWigU90B2;
    int q;
    int w;
    scanf ("%d%d%d", &TVnaW1k, &month2, &OOloWigU90B2);
    w = (int) (TVnaW1k -(789 - 788)) + (int) ((TVnaW1k -(708 - 707)) / (141 - 137)) - (int) ((TVnaW1k -(916 - 915)) / 100) + (int) ((TVnaW1k -1) / 400) + krjtZ30QKlmw (TVnaW1k, month2, OOloWigU90B2);
    q = w % (858 - 851);
    switch (q) {
    case 1 :
        printf ("Mon.");
        break;
    case 2 :
        printf ("Tue.");
        break;
    case (319 - 316) :
        printf ("Wed.");
        break;
    case (241 - 237) :
        printf ("Thu.");
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        break;
    case (167 - 162) :
        printf ("Fri.");
        break;
    case (612 - 606) :
        printf ("Sat.");
        break;
    case (598 - 598) :
        printf ("Sun.");
    }
    return (863 - 863);
}

int krjtZ30QKlmw (int i9r0BmP, int zTtRqY7wUFX, int day) {
    int result;
    result = (795 - 795);
    {
        int i = 1;
        while (zTtRqY7wUFX > i) {
            if (!(1 != i) || !(3 != i) || !(5 != i) || !(7 != i) || !(8 != i) || !(10 != i) || !((727 - 715) != i)) {
                result += (449 - 418);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                };
            }
            else if (i == (332 - 328) || i == 6 || i == 9 || i == (763 - 752)) {
                result += 30;
            }
            else if (i == 2) {
                if (v8bTDL (i9r0BmP)) {
                    result += 29;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    };
                }
                else {
                    result += 28;
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
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    result += day;
    return result;
}

int v8bTDL (int i9r0BmP) {
    int result;
    if (i9r0BmP % 400 == 0 || (i9r0BmP % 4 == 0 && i9r0BmP % 100 != 0)) {
        result = 1;
    }
    else {
        result = 0;
    }
    return result;
}

