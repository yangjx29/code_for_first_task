int main () {
    char v1Ks5tRJ [101] = {'0'};
    int i;
    int DpMfglxXz;
    int H4FfWVvj;
    int temp;
    int mod;
    int lth;
    i = 0;
    DpMfglxXz = 0;
    H4FfWVvj = 0;
    temp = 0;
    mod = 0;
    lth = 0;
    char num [101] = {'\0'};
    scanf ("%s", num);
    lth = strlen (num);
    if (lth == 1) {
        printf ("0\n%s", num);
    }
    else {
        {
            i = 0;
            while (i < lth - 1) {
                if (i == 0) {
                    v1Ks5tRJ[i] = (((num[i] - '0') * 10 + (num[i + 1] - '0')) / 13) + '0';
                    mod = ((num[i] - '0') * 10 + (num[i + 1] - '0')) % 13;
                }
                else {
                    temp = mod * 10 + (num[i + 1] - '0');
                    v1Ks5tRJ[i] = (temp / 13) + '0';
                    mod = temp % 13;
                }
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                i++;
            };
        }
        v1Ks5tRJ[i] = '\0';
        {
            i = 0;
            while (1) {
                if (i == 0) {
                    if (v1Ks5tRJ[i] == '0' && v1Ks5tRJ[i + 1] != '\0') {
                        continue;
                    }
                    else {
                        printf ("%c", v1Ks5tRJ[i]);
                    };
                }
                else {
                    if (v1Ks5tRJ[i] == '\0')
                        break;
                    printf ("%c", v1Ks5tRJ[i]);
                }
                i++;
            };
        }
        printf ("\n%d", mod);
    }
    return 0;
}

