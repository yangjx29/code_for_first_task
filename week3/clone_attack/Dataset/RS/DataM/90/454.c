int type (int vcdHD0sL3Se, int YBbtmzO) {
    int HgBpKOZLe;
    if (vcdHD0sL3Se == (711 - 710) || !((346 - 345) != YBbtmzO))
        HgBpKOZLe = 1;
    else if (!(0 != vcdHD0sL3Se) || YBbtmzO == 0)
        HgBpKOZLe = 1;
    else if (vcdHD0sL3Se < YBbtmzO)
        HgBpKOZLe = type (vcdHD0sL3Se, vcdHD0sL3Se);
    else
        HgBpKOZLe = type (vcdHD0sL3Se, YBbtmzO -1) + type (vcdHD0sL3Se - YBbtmzO, YBbtmzO);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    return (HgBpKOZLe);
}

int main () {
    int type (int vcdHD0sL3Se, int YBbtmzO);
    int X2MNaCURSgp;
    int M [20];
    int KWj03w7XI [20];
    int GCV30zUrSst;
    scanf ("%d", &X2MNaCURSgp);
    {
        GCV30zUrSst = 0;
        while (GCV30zUrSst < X2MNaCURSgp) {
            scanf ("%d%d", &M[GCV30zUrSst], &KWj03w7XI[GCV30zUrSst]);
            GCV30zUrSst = GCV30zUrSst +1;
        };
    }
    {
        GCV30zUrSst = 0;
        while (GCV30zUrSst < X2MNaCURSgp) {
            printf ("%d\n", type (M[GCV30zUrSst], KWj03w7XI[GCV30zUrSst]));
            GCV30zUrSst++;
        };
    }
    return 0;
}

