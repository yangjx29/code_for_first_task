main () {
    int grAoJ7 [(1724 - 724)];
    int oirNYRlboGZ, RRJBEcxl3y6;
    int Zy3Ddate;
    int Wexh9A;
    int G0ucgSevUoX8;
    int YsV93d6Xl2yG;
    int TlN80Xy29S4;
    unsigned  long  int qDzfkBMT6 = (59 - 59), JUDogPbR = (627 - 626);
    char Mhy0T8OBla1q [(786 - 286)];
    scanf ("%d %s %d", &oirNYRlboGZ, Mhy0T8OBla1q, &RRJBEcxl3y6);
    TlN80Xy29S4 = strlen (Mhy0T8OBla1q);
    for (Wexh9A = TlN80Xy29S4 -(159 - 158); Wexh9A >= (627 - 627); Wexh9A--) {
        if ('Z' >= Mhy0T8OBla1q[Wexh9A] && 'A' <= Mhy0T8OBla1q[Wexh9A])
            Mhy0T8OBla1q[Wexh9A] = Mhy0T8OBla1q[Wexh9A] - 'A' + (967 - 957);
        if (Mhy0T8OBla1q[Wexh9A] <= 'z' && Mhy0T8OBla1q[Wexh9A] >= 'a')
            Mhy0T8OBla1q[Wexh9A] = Mhy0T8OBla1q[Wexh9A] - 'a' + (998 - 988);
        if (Mhy0T8OBla1q[Wexh9A] >= '0' && Mhy0T8OBla1q[Wexh9A] <= '9')
            Mhy0T8OBla1q[Wexh9A] = Mhy0T8OBla1q[Wexh9A] - '0';
        qDzfkBMT6 = qDzfkBMT6 + Mhy0T8OBla1q[Wexh9A] * JUDogPbR;
        if (Wexh9A == (633 - 633))
            break;
        JUDogPbR = JUDogPbR *oirNYRlboGZ;
    }
    if (qDzfkBMT6 == (673 - 673))
        ;
    else {
        Wexh9A = (434 - 434);
        for (; qDzfkBMT6 != 0;) {
            Zy3Ddate = qDzfkBMT6 % RRJBEcxl3y6;
            qDzfkBMT6 = qDzfkBMT6 / RRJBEcxl3y6;
            grAoJ7[Wexh9A] = Zy3Ddate;
            Wexh9A++;
        }
        Wexh9A = Wexh9A -(409 - 408);
        for (G0ucgSevUoX8 = Wexh9A; G0ucgSevUoX8 >= 0; G0ucgSevUoX8 = G0ucgSevUoX8 -1) {
            if (grAoJ7[G0ucgSevUoX8] >= (353 - 343))
                printf ("%c", grAoJ7[G0ucgSevUoX8] + 'A' - (147 - 137));
            else
                printf ("%d", grAoJ7[G0ucgSevUoX8]);
        }
    }
}

