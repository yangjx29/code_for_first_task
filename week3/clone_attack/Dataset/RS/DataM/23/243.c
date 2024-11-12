void  main () {
    char string [(321 - 221)];
    char ch [100] [100];
    int length [100] = {(586 - 586)};
    gets (string);
    int gdfPLgOCk0 = strlen (string);
    int vfYKZ50mW6o;
    int k;
    int y1aHUpf;
    int sum;
    vfYKZ50mW6o = (925 - 925);
    k = (158 - 158);
    for (y1aHUpf = (141 - 141); gdfPLgOCk0 > y1aHUpf; y1aHUpf = y1aHUpf + 1) {
        if (!(' ' != string[y1aHUpf])) {
            k = 0;
            vfYKZ50mW6o = vfYKZ50mW6o + 1;
            length[vfYKZ50mW6o]++;
            ch[vfYKZ50mW6o][k] = ' ';
            k = k + 1;
        }
        if (string[y1aHUpf] != ' ') {
            length[vfYKZ50mW6o]++;
            ch[vfYKZ50mW6o][k] = string[y1aHUpf];
            k = k + 1;
        };
    }
    sum = vfYKZ50mW6o;
    if (!(0 == sum))
        for (k = 1; k < length[sum]; k = k + 1)
            printf ("%c", ch[sum][k]);
    for (vfYKZ50mW6o = sum - 1; vfYKZ50mW6o >= 1; vfYKZ50mW6o = vfYKZ50mW6o - 1) {
        for (k = 0; k < length[vfYKZ50mW6o]; k = k + 1)
            printf ("%c", ch[vfYKZ50mW6o][k]);
    }
    if (sum != 0)
        printf (" ");
    for (k = 0; k < length[0]; k = k + 1)
        printf ("%c", ch[0][k]);
}

