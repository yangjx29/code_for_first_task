int main () {
    int YGnsN9xSe8R;
    int RFsRAi7;
    int dZkzlPuiRe [300];
    int T8ZwT3aYGRp [300];
    int GImwlBzNnig;
    int Vos0yWvr;
    int rWkHBt0G;
    scanf ("%d", &rWkHBt0G);
    scanf ("%d", &T8ZwT3aYGRp[0]);
    GImwlBzNnig = 1;
    dZkzlPuiRe[0] = T8ZwT3aYGRp[0];
    {
        YGnsN9xSe8R = 1;
        for (; rWkHBt0G > YGnsN9xSe8R;) {
            Vos0yWvr = 0;
            scanf ("%d", &T8ZwT3aYGRp[YGnsN9xSe8R]);
            {
                RFsRAi7 = 0;
                for (; RFsRAi7 < YGnsN9xSe8R;) {
                    if (!(T8ZwT3aYGRp[RFsRAi7] != T8ZwT3aYGRp[YGnsN9xSe8R]))
                        Vos0yWvr = Vos0yWvr +1;
                    RFsRAi7 = RFsRAi7 +1;
                }
            }
            if (!(0 != Vos0yWvr)) {
                dZkzlPuiRe[GImwlBzNnig] = T8ZwT3aYGRp[YGnsN9xSe8R];
                GImwlBzNnig = GImwlBzNnig +1;
            }
            YGnsN9xSe8R = YGnsN9xSe8R +1;
        }
    }
    printf ("%d", dZkzlPuiRe[0]);
    {
        YGnsN9xSe8R = 1;
        for (; YGnsN9xSe8R < GImwlBzNnig;) {
            printf (",%d", dZkzlPuiRe[YGnsN9xSe8R]);
            YGnsN9xSe8R = YGnsN9xSe8R +1;
        }
    }
    return 0;
}

