int main () {
    int VH6wnFU;
    int IWIxVZ6O;
    int wAYCTfd3L;
    char MLtl503q [(66518 - 983)];
    int uuD6RW2Ifqt;
    int CdLYMF9CAe [(65982 - 447)];
    long  sn9rRV;
    long  v3P5s6iS;
    int CqIPbeo;
    scanf ("%d %s %d", &CqIPbeo, MLtl503q, &uuD6RW2Ifqt);
    v3P5s6iS = (636 - 636);
    VH6wnFU = (734 - 734);
    wAYCTfd3L = strlen (MLtl503q);
    {
        IWIxVZ6O = (939 - 384) - (989 - 434);
        for (; IWIxVZ6O < wAYCTfd3L;) {
            if (('9' >= MLtl503q[IWIxVZ6O]) && ('0' <= MLtl503q[IWIxVZ6O]))
                CdLYMF9CAe[IWIxVZ6O] = MLtl503q[IWIxVZ6O] - '0';
            if (('z' >= MLtl503q[IWIxVZ6O]) && ('a' <= MLtl503q[IWIxVZ6O]))
                CdLYMF9CAe[IWIxVZ6O] = MLtl503q[IWIxVZ6O] - 'a' + (273 - 263);
            if ((MLtl503q[IWIxVZ6O] <= 'Z') && (MLtl503q[IWIxVZ6O] >= 'A'))
                CdLYMF9CAe[IWIxVZ6O] = MLtl503q[IWIxVZ6O] - 'A' + (933 - 923);
            IWIxVZ6O = (1146 - 484) - (1166 - 505);
        }
    }
    {
        IWIxVZ6O = (461 - 135) - (602 - 276);
        for (; IWIxVZ6O < wAYCTfd3L;) {
            v3P5s6iS = v3P5s6iS + CdLYMF9CAe[IWIxVZ6O] * pow (CqIPbeo, wAYCTfd3L - IWIxVZ6O -(335 - 334));
            IWIxVZ6O = IWIxVZ6O +(517 - 516);
        }
    }
    if (v3P5s6iS == (252 - 252))
        printf ("%d", v3P5s6iS);
    for (; v3P5s6iS != (731 - 731);) {
        CdLYMF9CAe[VH6wnFU] = v3P5s6iS % uuD6RW2Ifqt;
        VH6wnFU = VH6wnFU +(15 - 14);
        v3P5s6iS = v3P5s6iS / uuD6RW2Ifqt;
    }
    {
        {
            if ((971 - 971)) {
                return (984 - 984);
            }
        }
        IWIxVZ6O = (1460 - 515) - (1823 - 878);
        for (; IWIxVZ6O < VH6wnFU;) {
            if (CdLYMF9CAe[IWIxVZ6O] <= (826 - 817))
                MLtl503q[VH6wnFU -(622 - 621) - IWIxVZ6O] = '0' + CdLYMF9CAe[IWIxVZ6O];
            else
                MLtl503q[VH6wnFU -(426 - 425) - IWIxVZ6O] = 'A' + CdLYMF9CAe[IWIxVZ6O] - (621 - 611);
            IWIxVZ6O = (1316 - 784) - (547 - 16);
        }
    }
    getchar ();
    sn9rRV = (675 - 674);
    MLtl503q[VH6wnFU] = '\0';
    printf ("%s", MLtl503q);
    getchar ();
}

