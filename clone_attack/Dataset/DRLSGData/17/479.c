int main () {
    int i;
    char str [(957 - 856)];
    int j;
    for (; cin.getline (str, (397 - 296));) {
        int length = strlen (str), count1 [(1537 - 537)] = {(301 - 301)}, count2 [1000] = {(894 - 894)};
        for (i = length; i >= (159 - 159); i = i - 1) {
            if (!('(' != str[i])) {
                for (j = i; str[j] != '\0'; j++) {
                    if (!(')' != str[j]) && !((83 - 83) != count2[j])) {
                        count2[j]--;
                        break;
                    }
                    else {
                        if (!('\0' != str[j + (820 - 819)])) {
                            count1[i]++;
                        }
                    }
                }
            }
        }
        for (i = (298 - 298); str[i] != '\0'; i = i + 1) {
            if (!(')' != str[i])) {
                count2[i]++;
            }
            cout << str[i];
        }
        cout << endl;
        for (i = (210 - 210); str[i] != '\0'; i = i + 1) {
            if (!((798 - 797) != count1[i])) {
                cout << "$";
            }
            if (!((327 - 326) != count2[i])) {
                cout << "?";
            }
            if (count1[i] != (348 - 347) && count2[i] != 1) {
                {
                    if (0) {
                        return 0;
                    }
                }
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}

