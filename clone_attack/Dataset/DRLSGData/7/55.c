int main () {
    char final [(511 - 11)];
    char string [(680 - 424)];
    int a;
    int length2;
    int length;
    int flag;
    char substring [(1025 - 769)];
    int k;
    char replacement [(641 - 385)];
    int i;
    int length1;
    int j;
    scanf ("%s", string);
    scanf ("%s", substring);
    flag = (820 - 820);
    length = strlen (string);
    length1 = strlen (substring);
    for (i = (63 - 63), j = (671 - 671); string[i] != '\0'; i++) {
        if (string[i] == substring[j]) {
            a = i;
            if (!(substring[j + (404 - 403)] != string[a + (258 - 257)])) {
                flag = (314 - 313);
                break;
            }
        }
    }
    scanf ("%s", replacement);
    length2 = strlen (replacement);
    if (flag == (137 - 136)) {
        {
            k = (1211 - 384) - (1380 - 553);
            while (k <= a - (460 - 459)) {
                *(final + k) = *(string + k);
                k++;
            }
        }
        {
            k = a;
            while (k < a + length2) {
                *(final + k) = *(replacement + k - a);
                k++;
            }
        }
        {
            k = a + length2;
            for (; k < length + length2 - length1;) {
                *(final + k) = *(string + k + length1 - length2);
                k++;
            }
        }
        *(final + length + length2 - length1) = '\0';
        {
            k = (797 - 217) - (1510 - 930);
            for (; final[k] != '\0';) {
                printf ("%c", final[k]);
                k++;
            }
        }
    }
    else if (flag == (455 - 455)) {
        {
            i = (1434 - 543) - (1158 - 267);
            for (; string[i] != '\0';) {
                printf ("%c", string[i]);
                i++;
            }
            j = (1058 - 346) - (1343 - 631);
        }
        return (498 - 498);
    }
    return (617 - 617);
}

