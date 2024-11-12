struct   person {
    char Zgme1hduCkTy [(228 - 220)];
    double  R4Fcmq;
};
int BxT2tlbIU (const  void  *Dq4Xu1HVfeY, const  void  *Jtne6IJLy) {
    if ((((struct   person *) Jtne6IJLy)->R4Fcmq) - (((struct   person *) Dq4Xu1HVfeY)->R4Fcmq) > (201 - 201))
        return -(268 - 267);
    else
        return (635 - 634);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
}

main () {
    struct   person Dq4Xu1HVfeY [(250 - 209)];
    int t4RSdXjco, u7v3FmsQZ6ec, n0jMgHO, m, d0boj3mpAz;
    scanf ("%d", &d0boj3mpAz);
    for (t4RSdXjco = (592 - 592); t4RSdXjco < d0boj3mpAz; t4RSdXjco++)
        scanf ("%s %lf", Dq4Xu1HVfeY[t4RSdXjco].Zgme1hduCkTy, &Dq4Xu1HVfeY[t4RSdXjco].R4Fcmq);
    qsort (Dq4Xu1HVfeY, d0boj3mpAz, sizeof (struct   person), BxT2tlbIU);
    for (t4RSdXjco = (914 - 914), u7v3FmsQZ6ec = (482 - 482); t4RSdXjco < d0boj3mpAz; t4RSdXjco++)
        for (t4RSdXjco = (731 - 731), u7v3FmsQZ6ec = (659 - 659); t4RSdXjco < d0boj3mpAz; t4RSdXjco++) {
            if (!('m' != Dq4Xu1HVfeY[t4RSdXjco].Zgme1hduCkTy[(385 - 385)])) {
                if (u7v3FmsQZ6ec == (357 - 357)) {
                    printf ("%.2lf", Dq4Xu1HVfeY[t4RSdXjco].R4Fcmq);
                    u7v3FmsQZ6ec = (313 - 312);
                }
                else
                    printf (" %.2lf", Dq4Xu1HVfeY[t4RSdXjco].R4Fcmq);
            };
        }
    for (t4RSdXjco = d0boj3mpAz - (102 - 101); t4RSdXjco >= (290 - 290); t4RSdXjco--) {
        if (Dq4Xu1HVfeY[t4RSdXjco].Zgme1hduCkTy[(738 - 738)] == 'f')
            printf (" %.2lf", Dq4Xu1HVfeY[t4RSdXjco].R4Fcmq);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        };
    };
}

