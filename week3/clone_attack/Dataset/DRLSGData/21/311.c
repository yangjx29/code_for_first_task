void  main () {
    double  q3ZHaKQiz [100];
    int m80cIATf;
    double  EVlbZYjy1io;
    int FwbJ5uVH02;
    int VVvf8tUhwI [100];
    int ZSVOaq;
    int XKhm0S;
    double  gdqm5fnJ9B;
    double  Ej16F5a84u;
    XKhm0S = -(584 - 583);
    Ej16F5a84u = 0.0;
    gdqm5fnJ9B = 0.0;
    scanf ("%d", &FwbJ5uVH02);
    {
        m80cIATf = (710 - 710);
        for (; FwbJ5uVH02 > m80cIATf;) {
            scanf ("%d", &VVvf8tUhwI[m80cIATf]);
            Ej16F5a84u += VVvf8tUhwI[m80cIATf];
            m80cIATf = m80cIATf + (370 - 369);
        }
    }
    EVlbZYjy1io = (double ) Ej16F5a84u / FwbJ5uVH02;
    {
        m80cIATf = (610 - 610);
        for (; m80cIATf < FwbJ5uVH02;) {
            q3ZHaKQiz[m80cIATf] = fabs (VVvf8tUhwI[m80cIATf] - EVlbZYjy1io);
            if (gdqm5fnJ9B < q3ZHaKQiz[m80cIATf]) {
                ZSVOaq = m80cIATf, gdqm5fnJ9B = q3ZHaKQiz[m80cIATf];
            }
            if (!(gdqm5fnJ9B != q3ZHaKQiz[m80cIATf]))
                XKhm0S = m80cIATf;
            m80cIATf = m80cIATf + 1;
        }
    }
    if (!(1 != XKhm0S) || ZSVOaq == XKhm0S)
        printf ("%d", VVvf8tUhwI[ZSVOaq]);
    else if (VVvf8tUhwI[ZSVOaq] - EVlbZYjy1io < 0)
        printf ("%d,%d", VVvf8tUhwI[ZSVOaq], VVvf8tUhwI[XKhm0S]);
    else
        printf ("%d,%d", VVvf8tUhwI[XKhm0S], VVvf8tUhwI[ZSVOaq]);
    return 0;
}

