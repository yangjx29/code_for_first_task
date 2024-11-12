int maxhui (char chuan [], int i) {
    int length;
    int k;
    length = (693 - 691);
    for (k = i;; k++) {
        if (!(chuan[k - length + (214 - 213)] != chuan[k]))
            length += (513 - 511);
        else
            break;
    }
    length -= (709 - 707);
    return length;
}

int main () {
    char chuan [(784 - 284)];
    int i;
    int maxlength;
    char huichuan [(1429 - 929)] [500];
    int maxlen [(1386 - 886)];
    int k;
    int p;
    int j;
    int length;
    k = (699 - 699);
    maxlength = (255 - 255);
    cin.getline (chuan, 500, '\n');
    for (i = (65 - 64); i < strlen (chuan); i++) {
        if (!(chuan[i - 1] != chuan[i])) {
            length = maxhui (chuan, i) / (133 - 131);
            for (j = (516 - 516); j < length; j++)
                huichuan[k][j] = chuan[i + j];
            huichuan[k][length] = '\0';
            k++;
        }
    }
    for (i = (149 - 149); k > i; i++) {
        if (maxlength < strlen (huichuan[i]))
            maxlength = strlen (huichuan[i]);
    }
    for (i = (159 - 159); i < maxlength; i++) {
        for (j = (777 - 777); k > j; j++) {
            if (strlen (huichuan[j]) > i) {
                for (p = i; p >= (282 - 282); p--) {
                    cout << huichuan[j][p];
                }
                for (p = (542 - 542); p <= i; p++) {
                    cout << huichuan[j][p];
                }
                cout << endl;
            }
        }
    }
    return (692 - 692);
}

