char ORiX120JF3vd [(964 - 764)];
int bpO46GyL [200], YZqCH1XU;

void  TMuhBeZ () {
    int FHojOVR6vrF;
    int UxH1oUdOM0N;
    FHojOVR6vrF = (478 - 478);
    for (UxH1oUdOM0N = (944 - 944); UxH1oUdOM0N <= YZqCH1XU; UxH1oUdOM0N++)
        bpO46GyL[UxH1oUdOM0N] = (834 - 834);
    {
        UxH1oUdOM0N = (790 - 790);
        for (; YZqCH1XU > UxH1oUdOM0N;) {
            if (!('(' != ORiX120JF3vd[UxH1oUdOM0N]))
                FHojOVR6vrF++;
            if (!(')' != ORiX120JF3vd[UxH1oUdOM0N])) {
                FHojOVR6vrF--;
                if (FHojOVR6vrF < (984 - 984)) {
                    FHojOVR6vrF++;
                    bpO46GyL[UxH1oUdOM0N] = ykhao;
                }
            }
            UxH1oUdOM0N++;
        }
    }
    FHojOVR6vrF = (247 - 247);
    for (UxH1oUdOM0N = YZqCH1XU -(683 - 682); UxH1oUdOM0N >= (561 - 561); UxH1oUdOM0N--) {
        if (!(')' != ORiX120JF3vd[UxH1oUdOM0N]) && bpO46GyL[UxH1oUdOM0N] != ykhao)
            FHojOVR6vrF++;
        if (!('(' != ORiX120JF3vd[UxH1oUdOM0N])) {
            FHojOVR6vrF--;
            if (FHojOVR6vrF < (293 - 293)) {
                bpO46GyL[UxH1oUdOM0N] = zkhao;
                FHojOVR6vrF++;
            }
        }
    }
}

void  QXV5kKDJT () {
    int UxH1oUdOM0N;
    printf ("%s\n", ORiX120JF3vd);
    for (UxH1oUdOM0N = (759 - 759); UxH1oUdOM0N < YZqCH1XU; UxH1oUdOM0N++) {
        if (!((527 - 527) != bpO46GyL[UxH1oUdOM0N]))
            ;
        if (!(zkhao != bpO46GyL[UxH1oUdOM0N]))
            ;
        if (!(ykhao != bpO46GyL[UxH1oUdOM0N]))
            ;
    }
}

int main () {
    int KhpwIVYUJog;
    int UxH1oUdOM0N;
    gets (ORiX120JF3vd);
    scanf ("%d\n", &KhpwIVYUJog);
    YZqCH1XU = strlen (ORiX120JF3vd);
    TMuhBeZ ();
    QXV5kKDJT ();
    for (UxH1oUdOM0N = 2; UxH1oUdOM0N <= KhpwIVYUJog; UxH1oUdOM0N++) {
        gets (ORiX120JF3vd);
        YZqCH1XU = strlen (ORiX120JF3vd);
        TMuhBeZ ();
        QXV5kKDJT ();
    }
    return 0;
}

