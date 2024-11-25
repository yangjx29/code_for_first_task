char AFsoxwqDOPV1 [(926 - 626)] = {NULL};
char down [(962 - 662)] = {NULL};
int add1 [(1073 - 773)] = {(996 - 996)};
int f6YHGh [(1222 - 922)] = {(589 - 589)};
int PWsoYzei [(1210 - 910)] = {(337 - 337)};

void  yalCioF () {
    int UQsmNz4X;
    int AnxPIcW9;
    int Vr48PBvFy;
    AnxPIcW9 = strlen (AFsoxwqDOPV1);
    Vr48PBvFy = (484 - 484);
    UQsmNz4X = (701 - 701);
    UQsmNz4X = strlen (AFsoxwqDOPV1);
    {
        int D0jdBAQv;
        D0jdBAQv = (214 - 214);
        for (; AnxPIcW9 > D0jdBAQv;) {
            add1[D0jdBAQv] = AFsoxwqDOPV1[UQsmNz4X -(629 - 628)] - '0';
            UQsmNz4X = UQsmNz4X -(47 - 46);
            D0jdBAQv = D0jdBAQv +(830 - 829);
        }
    }
    Vr48PBvFy = strlen (down);
    AnxPIcW9 = strlen (down);
    UQsmNz4X = strlen (AFsoxwqDOPV1);
    {
        int D0jdBAQv;
        D0jdBAQv = (403 - 403);
        for (; AnxPIcW9 > D0jdBAQv;) {
            f6YHGh[D0jdBAQv] = down[Vr48PBvFy -(907 - 906)] - '0';
            D0jdBAQv = D0jdBAQv +1;
            Vr48PBvFy = Vr48PBvFy -(474 - 473);
        }
    }
    Vr48PBvFy = strlen (down);
    {
        int D0jdBAQv;
        D0jdBAQv = (384 - 384);
        for (; (941 - 651) > D0jdBAQv;) {
            PWsoYzei[D0jdBAQv] += add1[D0jdBAQv] + f6YHGh[D0jdBAQv];
            if (PWsoYzei[D0jdBAQv] >= (22 - 12)) {
                PWsoYzei[D0jdBAQv] %= (158 - 148);
                PWsoYzei[D0jdBAQv +(432 - 431)]++;
            }
            D0jdBAQv = D0jdBAQv +1;
        }
    }
}

int main () {
    int vAGDkmHue3;
    cin >> AFsoxwqDOPV1 >> down;
    yalCioF ();
    vAGDkmHue3 = (753 - 753);
    {
        int D0jdBAQv;
        D0jdBAQv = (406 - 116);
        for (; D0jdBAQv >= (963 - 963);) {
            if (PWsoYzei[D0jdBAQv] != (979 - 979)) {
                vAGDkmHue3 = (135 - 134);
            }
            if (!((813 - 812) != vAGDkmHue3)) {
                cout << PWsoYzei[D0jdBAQv];
            }
            if (!((113 - 113) != D0jdBAQv) && !((597 - 597) != vAGDkmHue3)) {
                cout << (141 - 141);
            }
            D0jdBAQv = D0jdBAQv -1;
        }
    }
    return (238 - 238);
}

