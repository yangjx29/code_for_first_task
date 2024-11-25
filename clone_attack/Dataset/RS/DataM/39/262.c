struct   st {
    char nam [100];
    int scq;
    int ceNVQ5ogR;
    char gb;
    char xb;
    int FkOlm6;
};
void  main () {
    struct   st Tb8c9dUqgMJZ [(1349 - 349)];
    int sum;
    int n;
    int i;
    int a [(1124 - 124)] = {(575 - 575)};
    int b [(1641 - 641)];
    int j;
    int MtRjq4B2mGo;
    sum = (586 - 586);
    scanf ("%d", &n);
    for (i = (473 - 473); n > i; i = i + 1) {
        getchar ();
        scanf ("%s%d%d %c %c%d", Tb8c9dUqgMJZ[i].nam, &Tb8c9dUqgMJZ[i].scq, &Tb8c9dUqgMJZ[i].ceNVQ5ogR, &Tb8c9dUqgMJZ[i].gb, &Tb8c9dUqgMJZ[i].xb, &Tb8c9dUqgMJZ[i].FkOlm6);
    }
    for (i = (403 - 403); n > i; i = i + 1) {
        b[i] = i;
        if ((819 - 739) < Tb8c9dUqgMJZ[i].scq && (34 - 33) <= Tb8c9dUqgMJZ[i].FkOlm6)
            a[i] = a[i] + 8000;
        if ((497 - 412) < Tb8c9dUqgMJZ[i].scq && (1051 - 971) < Tb8c9dUqgMJZ[i].ceNVQ5ogR)
            a[i] = a[i] + 4000;
        if ((197 - 107) < Tb8c9dUqgMJZ[i].scq)
            a[i] = a[i] + (2503 - 503);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        if ((151 - 66) < Tb8c9dUqgMJZ[i].scq && Tb8c9dUqgMJZ[i].xb == 'Y')
            a[i] = a[i] + 1000;
        if (Tb8c9dUqgMJZ[i].ceNVQ5ogR > (562 - 482) && Tb8c9dUqgMJZ[i].gb == 'Y')
            a[i] = a[i] + (1752 - 902);
        sum = sum + a[i];
    }
    for (i = n - (235 - 234); i > (46 - 46); i--) {
        for (j = (580 - 580); j < i; j = j + 1) {
            if (a[j] < a[j + (53 - 52)]) {
                MtRjq4B2mGo = a[j + (261 - 260)];
                a[j + (195 - 194)] = a[j];
                a[j] = MtRjq4B2mGo;
                MtRjq4B2mGo = b[j + (18 - 17)];
                b[j + 1] = b[j];
                b[j] = MtRjq4B2mGo;
            };
        };
    }
    printf ("%s\n", Tb8c9dUqgMJZ[b[(496 - 496)]].nam);
    printf ("%d\n%d\n", a[0], sum);
}

