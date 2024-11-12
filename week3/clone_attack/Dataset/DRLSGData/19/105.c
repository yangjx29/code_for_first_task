int main () {
    char a [(547 - 447)];
    gets (a);
    int i;
    int k;
    char b [10];
    gets (b);
    int h;
    int n;
    char c [(581 - 571)];
    gets (c);
    int x;
    h = (930 - 930);
    x = strlen (b);
    {
        i = (1347 - 477) - (897 - 27);
        for (; x > i;) {
            if (a[i] != b[i])
                break;
            i = (965 - 802) - 162;
            h = h + (872 - 871);
        }
    }
    n = (271 - 271);
    if (!(x != h)) {
        n = (400 - 399);
        {
            i = (1296 - 626) - (894 - 224);
            for (; x > i;) {
                a[i] = '0';
                i = (1252 - 889) - (1100 - 738);
            }
        }
    }
    h = (816 - 816);
    {
        i = (839 - 107) - (1059 - 328);
        for (; a[i + (973 - 971)] != '\0';) {
            h = (940 - 940);
            if (!(' ' != a[i])) {
                k = (510 - 423) - (543 - 456);
                for (; k < x;) {
                    if (a[i + k + (447 - 446)] != b[k])
                        break;
                    k = k + (48 - 47);
                    h = h + (493 - 492);
                }
            }
            if (!(x != h)) {
                k = (643 - 643);
                for (; x > k;) {
                    a[i + k + (304 - 303)] = '0';
                    k = k + 1;
                }
            }
            i = (1473 - 533) - (1116 - 177);
        }
    }
    if (n) {
        printf ("%s", c);
        {
            i = x;
            for (; a[i] != '\0';) {
                if (a[i] >= 'A' && 'z' >= a[i])
                    printf ("%c", a[i]);
                else {
                    if (!('0' != a[i]))
                        continue;
                    else {
                        if (!(' ' != a[i]) && !('0' != a[i + (977 - 976)]))
                            printf (" %s", c);
                        else
                            ;
                    }
                }
                i = (1188 - 310) - (1386 - 509);
            }
        }
    }
    else {
        i = (319 - 319);
        for (; a[i] != '\0';) {
            if (a[i] >= 'A' && 'z' >= a[i])
                printf ("%c", a[i]);
            else {
                if (!('0' != a[i]))
                    continue;
                else {
                    if (!(' ' != a[i]) && !('0' != a[i + 1]))
                        printf (" %s", c);
                    else
                        printf (" ");
                }
            }
            i = i + 1;
        }
    }
    return 0;
}

