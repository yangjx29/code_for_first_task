int main () {
    int Ga2P4Upg;
    int MlPY9T;
    int HQgv14;
    int KTLDAby7rh;
    struct   student {
        char QumR20N9aOx [200];
        int i6zFLxJslVEK, VgpGXYlqb0x, vPS0DyIA8zu, ZC5XzNoqJ1;
        char yRqQcOe, w4Hvtc0IqP;
    }
    cd3sXYmq6z [101];
    int MpovVxlb1h;
    Ga2P4Upg = 0;
    MpovVxlb1h = 0;
    scanf ("%d", &KTLDAby7rh);
    for (HQgv14 = 0; KTLDAby7rh -1 >= HQgv14; HQgv14 = HQgv14 +1) {
        cd3sXYmq6z[HQgv14].ZC5XzNoqJ1 = 0;
        scanf ("%s %d %d %c %c %d", cd3sXYmq6z[HQgv14].QumR20N9aOx, &cd3sXYmq6z[HQgv14].i6zFLxJslVEK, &cd3sXYmq6z[HQgv14].VgpGXYlqb0x, &cd3sXYmq6z[HQgv14].yRqQcOe, &cd3sXYmq6z[HQgv14].w4Hvtc0IqP, &cd3sXYmq6z[HQgv14].vPS0DyIA8zu);
        if (cd3sXYmq6z[HQgv14].i6zFLxJslVEK > 80 && cd3sXYmq6z[HQgv14].vPS0DyIA8zu != 0)
            cd3sXYmq6z[HQgv14].ZC5XzNoqJ1 = cd3sXYmq6z[HQgv14].ZC5XzNoqJ1 + 8000;
        if (85 < cd3sXYmq6z[HQgv14].i6zFLxJslVEK && 80 < cd3sXYmq6z[HQgv14].VgpGXYlqb0x)
            cd3sXYmq6z[HQgv14].ZC5XzNoqJ1 = cd3sXYmq6z[HQgv14].ZC5XzNoqJ1 + 4000;
        if (90 < cd3sXYmq6z[HQgv14].i6zFLxJslVEK)
            cd3sXYmq6z[HQgv14].ZC5XzNoqJ1 = cd3sXYmq6z[HQgv14].ZC5XzNoqJ1 + 2000;
        if (cd3sXYmq6z[HQgv14].i6zFLxJslVEK > 85 && !('Y' != cd3sXYmq6z[HQgv14].w4Hvtc0IqP))
            cd3sXYmq6z[HQgv14].ZC5XzNoqJ1 = cd3sXYmq6z[HQgv14].ZC5XzNoqJ1 + 1000;
        if (cd3sXYmq6z[HQgv14].VgpGXYlqb0x > 80 && cd3sXYmq6z[HQgv14].yRqQcOe == 'Y')
            cd3sXYmq6z[HQgv14].ZC5XzNoqJ1 = cd3sXYmq6z[HQgv14].ZC5XzNoqJ1 + 850;
        if (cd3sXYmq6z[HQgv14].ZC5XzNoqJ1 > Ga2P4Upg) {
            Ga2P4Upg = cd3sXYmq6z[HQgv14].ZC5XzNoqJ1;
            MlPY9T = HQgv14;
        }
        MpovVxlb1h = MpovVxlb1h +cd3sXYmq6z[HQgv14].ZC5XzNoqJ1;
    }
    printf ("%s\n%d\n%d\n", cd3sXYmq6z[MlPY9T].QumR20N9aOx, cd3sXYmq6z[MlPY9T].ZC5XzNoqJ1, MpovVxlb1h);
    return (0);
}

