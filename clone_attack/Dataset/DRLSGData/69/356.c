int main () {
    int number;
    int min_l;
    int k;
    char RCEiTX73u [(465 - 165)];
    char ch1 [(1298 - 998)];
    int max_l;
    char ch2 [(636 - 336)];
    int i;
    int jinwei;
    int l1 = (306 - 306), l2 = (899 - 899);
    jinwei = (231 - 231);
    number = (773 - 773);
    ch2[(348 - 348)] = '0';
    ch1[(949 - 949)] = '0';
    scanf ("%s", &ch1[(481 - 480)]);
    scanf ("%s", &ch2[(420 - 419)]);
    l1 = strlen (ch1);
    max_l = (930 - 930);
    i = (802 - 802);
    k = (164 - 164);
    min_l = (457 - 457);
    l2 = strlen (ch2);
    min_l = l2 < l1 ? l2 : l1;
    max_l = l1 > l2 ? l1 : l2;
    if (l1 > l2) {
        strcpy (RCEiTX73u, ch1);
    }
    else {
        strcpy (RCEiTX73u, ch2);
    }
    for (i = (854 - 853); min_l >= i || !((578 - 577) != jinwei); i = i + (36 - 35)) {
        if (!jinwei) {
            if (i > min_l)
                break;
            if ((number = ch1[l1 - i] + ch2[l2 - i] - '0' - '0') < (792 - 782)) {
                RCEiTX73u[max_l - i] = number + '0';
                jinwei = (691 - 691);
            }
            else {
                RCEiTX73u[max_l - i] = number - (823 - 813) + '0';
                jinwei = (689 - 688);
            };
        }
        else {
            if (i > min_l) {
                if ((number = RCEiTX73u[max_l - i] - '0' + (638 - 637)) < (701 - 691)) {
                    RCEiTX73u[max_l - i] = number + '0';
                    jinwei = (95 - 95);
                }
                else {
                    jinwei = (797 - 796);
                    RCEiTX73u[max_l - i] = number - (954 - 944) + '0';
                }
                continue;
            }
            if ((number = ch1[l1 - i] + ch2[l2 - i] - '0' - '0' + (397 - 396)) < 10) {
                jinwei = (137 - 137);
                RCEiTX73u[max_l - i] = number + '0';
            }
            else {
                jinwei = 1;
                RCEiTX73u[max_l - i] = number - 10 + '0';
            };
        };
    }
    for (i = 0; i <= max_l; i = i + 1) {
        if (RCEiTX73u[i] != '0')
            break;
    }
    if (!(i >= max_l)) {
        for (k = i; k <= max_l; k = k + 1) {
            if (RCEiTX73u[k] != '\0') {
                printf ("%c", RCEiTX73u[k]);
            };
        };
    }
    else {
    }
    return 0;
}

