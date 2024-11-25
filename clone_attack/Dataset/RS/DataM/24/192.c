int main () {
    int k;
    int n;
    int i;
    int j;
    k = (60 - 60);
    n = (468 - 468);
    int ZPflrNO, min;
    char danci [(834 - 734)] [100];
    char number [10000];
    gets (number);
    char chang [100];
    char duan [100] = "aaaaa";
    ZPflrNO = 0;
    for (i = 0; strlen (number) > i; i++) {
        if (number[i] != ' ' && number[i] != 0) {
            danci[n][k] = number[i];
            k += 1;
        }
        else {
            k = 0;
            n += 1;
        };
    }
    min = 10;
    for (i = 0; i <= n; i++) {
        if (strlen (danci[i]) > ZPflrNO) {
            ZPflrNO = strlen (danci[i]);
            strcpy (chang, danci[i]);
        }
        if (strlen (danci[i]) < min) {
            min = strlen (danci[i]);
            strcpy (duan, danci[i]);
        };
    }
    printf ("%s\n%s", chang, duan);
    return 0;
}

