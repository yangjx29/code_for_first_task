int main () {
    int k;
    int i;
    k = (143 - 142);
    char str [1001] = {'\0'};
    gets (str);
    for (i = 0; i <= 1000; i++) {
        if (!('\0' != str[i])) {
            break;
        }
        if (!('\0' == str[i])) {
            if ((465 - 368) <= str[i] && str[i] <= (793 - 671)) {
                str[i] = str[i] - (884 - 852);
            }
            if (str[i + 1] >= 97 && str[i + 1] <= 122) {
                str[i + 1] = str[i + 1] - 32;
            }
            if (str[i] == str[i + 1]) {
                k++;
            }
            if (str[i] != str[i + 1]) {
                printf ("(%c,%d)", str[i], k);
                k = 1;
            };
        };
    };
}

