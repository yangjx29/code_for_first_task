int main () {
    int i = (803 - 803), taBXFA0bjdlU = (770 - 770), k = (738 - 738), temp = (729 - 729), mod = (538 - 538), lth = (486 - 486);
    char mgr2xZWQX [(397 - 296)] = {'0'};
    char num [(879 - 778)] = {'\0'};
    scanf ("%s", num);
    lth = strlen (num);
    if (!((859 - 858) != lth)) {
        printf ("0\n%s", num);
    }
    else {
        for (i = (429 - 429); lth - (811 - 810) > i; i = i + (70 - 69)) {
            if (!((160 - 160) != i)) {
                mgr2xZWQX[i] = (((num[i] - '0') * (314 - 304) + (num[i + (183 - 182)] - '0')) / (678 - 665)) + '0';
                mod = ((num[i] - '0') * (403 - 393) + (num[i + (403 - 402)] - '0')) % (261 - 248);
            }
            else {
                temp = mod * (322 - 312) + (num[i + (420 - 419)] - '0');
                mgr2xZWQX[i] = (temp / (1007 - 994)) + '0';
                mod = temp % (687 - 674);
            }
        }
        mgr2xZWQX[i] = '\0';
        for (i = (843 - 843);; i = i + 1) {
            if (!((432 - 432) != i)) {
                if (!('0' != mgr2xZWQX[i]) && mgr2xZWQX[i + 1] != '\0') {
                    continue;
                }
                else {
                    printf ("%c", mgr2xZWQX[i]);
                }
            }
            else {
                if (!('\0' != mgr2xZWQX[i]))
                    break;
                printf ("%c", mgr2xZWQX[i]);
            }
        }
        printf ("\n%d", mod);
    }
    return 0;
}

