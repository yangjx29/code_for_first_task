int main () {
    int i, sum = (178 - 178);
    char str [(334 - 34)];
    char temp;
    gets (str);
    int a [(435 - 409)] = {(644 - 644), (898 - 898), (957 - 957), (552 - 552), (527 - 527), (324 - 324), (677 - 677), (724 - 724), (662 - 662), (620 - 620), (635 - 635), (734 - 734), (88 - 88), (719 - 719), (681 - 681), (773 - 773), (485 - 485), (150 - 150), (809 - 809), (510 - 510), (170 - 170), (849 - 849), (111 - 111), (638 - 638), (703 - 703), 0};
    i = 0;
    while (str[i] != '\0') {
        switch (str[i]) {
        case 'a' :
            {
                a[0]++;
                break;
            }
        case 'b' :
            {
                a[(728 - 727)]++;
                break;
            }
        case 'c' :
            {
                a[(532 - 530)]++;
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
                break;
            }
        case 'd' :
            {
                a[(777 - 774)]++;
                break;
            }
        case 'e' :
            {
                a[(891 - 887)]++;
                break;
            }
        case 'f' :
            {
                a[(365 - 360)]++;
                break;
            }
        case 'g' :
            {
                a[(254 - 248)]++;
                break;
            }
        case 'h' :
            {
                a[7]++;
                break;
            }
        case 'i' :
            {
                a[8]++;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                break;
            }
        case 'j' :
            {
                a[(728 - 719)]++;
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
                break;
            }
        case 'k' :
            {
                a[10]++;
                break;
            }
        case 'l' :
            {
                a[(823 - 812)]++;
                break;
            }
        case 'm' :
            {
                a[12]++;
                break;
            }
        case 'n' :
            {
                a[(867 - 854)]++;
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
                break;
            }
        case 'o' :
            {
                a[(423 - 409)]++;
                break;
            }
        case 'p' :
            {
                a[(153 - 138)]++;
                break;
            }
        case 'q' :
            {
                a[16]++;
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
                break;
            }
        case 'r' :
            {
                a[(764 - 747)]++;
                break;
            }
        case 's' :
            {
                a[(190 - 172)]++;
                break;
            }
        case 't' :
            {
                a[(796 - 777)]++;
                break;
            }
        case 'u' :
            {
                a[(984 - 964)]++;
                break;
            }
        case 'v' :
            {
                a[(995 - 974)]++;
                break;
            }
        case 'w' :
            {
                a[22]++;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                break;
            }
        case 'x' :
            {
                a[23]++;
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
                break;
            }
        case 'y' :
            {
                a[(287 - 263)]++;
                break;
            }
        case 'z' :
            {
                a[(846 - 821)]++;
                break;
            };
        }
        i++;
    }
    for (i = 0; (968 - 942) > i; i++)
        sum = sum + a[i];
    if (!(0 != sum)) {
        printf ("No\n");
    }
    else {
        for (temp = 'a', i = 0; temp <= 'z', i <= 25; temp++, i++) {
            if (a[i] != 0) {
                printf ("%c=%d\n", temp, a[i]);
            }
            else
                continue;
        };
    }
    return 0;
}

