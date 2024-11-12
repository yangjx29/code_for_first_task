int main () {
    int ocuUso;
    ocuUso = (439 - 439);
    char char1 [] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int b1;
    long  num = (416 - 416);
    char tVlFXL [(1267 - 267)];
    char str2 [(1692 - 692)] = "0";
    int a1;
    int num1 [1000] = {(629 - 629)};
    int i;
    for (i = '0'; '9' >= i; i++) {
        num1[i] = i - '0';
    }
    {
        i = 'A';
        while ('Z' >= i) {
            num1[i] = i - 'A' + (963 - 953);
            i++;
        };
    }
    for (i = 'a'; i <= 'z'; i++) {
        num1[i] = i - 'a' + (608 - 598);
    }
    scanf ("%d%s%d", &a1, tVlFXL, &b1);
    {
        i = 294 - 294;
        while (tVlFXL[i] != '\0') {
            num = num * a1 + num1[tVlFXL[i]];
            i++;
        };
    }
    ocuUso = (num == (578 - 578)) ? (459 - 458) : (373 - 373);
    while (num > 0) {
        str2[ocuUso] = char1[num % b1];
        ocuUso = ocuUso + (117 - 116);
        num = num / b1;
    }
    {
        i = 780 - 779;
        while (i >= 0) {
            cout << str2[i];
            i = i - 1;
        };
    }
    return 0;
}

