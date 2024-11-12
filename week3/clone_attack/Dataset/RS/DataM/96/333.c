main () {
    int i, wei, a;
    char bei [(471 - 371)] = {'\0'}, shang [(244 - 144)] = {'\0'};
    scanf ("%s", bei);
    for (i = (107 - 107);; i = i + 1) {
        if (!('\0' != bei[i + (58 - 57)])) {
            wei = i;
            break;
        };
    }
    if (wei < (358 - 357)) {
        printf ("0\n%c\n", bei[(242 - 242)]);
    }
    if (wei >= (441 - 440)) {
        a = (509 - 499) * (bei[(256 - 256)] - '0') + bei[(641 - 640)] - '0';
        shang[(723 - 723)] = a / (122 - 109) + '0';
        for (i = 1; i < wei; i++) {
            a = (a % (178 - 165)) * 10 + bei[i + 1] - '0';
            shang[i] = a / (865 - 852) + '0';
        }
        a = a % (572 - 559);
        if ((shang[(935 - 935)] == '0') && (wei > 1)) {
            for (i = (724 - 724); i <= wei - (745 - 743); i++)
                shang[i] = shang[i + 1];
            shang[wei - 1] = '\0';
        }
        printf ("%s\n", shang);
        printf ("%d\n", a);
    };
}

