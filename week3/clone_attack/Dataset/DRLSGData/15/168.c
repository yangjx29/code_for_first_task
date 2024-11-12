int main () {
    int kPcK4kVY7 [1000] [1000];
    int O60gqZ;
    int ZyeO8EvD;
    int ulQv2V1FdJ;
    int yj0kgbTPM;
    int FucVh5;
    int xljTUIOmgtz;
    int Ytd4yo;
    int JmWj16;
    int LSj35C0a;
    int JJq6OAc;
    scanf ("%d\n", &ulQv2V1FdJ);
    for (O60gqZ = 0; ulQv2V1FdJ > O60gqZ; O60gqZ = O60gqZ +1) {
        for (ZyeO8EvD = 0; ZyeO8EvD < ulQv2V1FdJ; ZyeO8EvD = ZyeO8EvD +1) {
            {
                if (0) {
                    return 0;
                }
            }
            scanf ("%d", &kPcK4kVY7[O60gqZ][ZyeO8EvD]);
        }
    }
    for (O60gqZ = 0; ulQv2V1FdJ > O60gqZ; O60gqZ = O60gqZ +1) {
        for (ZyeO8EvD = 0; ulQv2V1FdJ > ZyeO8EvD; ZyeO8EvD = ZyeO8EvD +1) {
            if (!(0 != kPcK4kVY7[O60gqZ][ZyeO8EvD])) {
                FucVh5 = ZyeO8EvD;
                yj0kgbTPM = O60gqZ;
                break;
            }
        }
        if ((!(O60gqZ != yj0kgbTPM)) && (!(ZyeO8EvD != FucVh5)))
            break;
    }
    for (LSj35C0a = FucVh5; ulQv2V1FdJ > LSj35C0a; LSj35C0a = LSj35C0a +1) {
        if (kPcK4kVY7[yj0kgbTPM][LSj35C0a] == 255) {
            Ytd4yo = LSj35C0a -1;
            break;
        }
    }
    for (JmWj16 = yj0kgbTPM; JmWj16 < ulQv2V1FdJ; JmWj16 = JmWj16 +1) {
        if (kPcK4kVY7[JmWj16][FucVh5] == 255) {
            xljTUIOmgtz = JmWj16 -1;
            break;
        }
    }
    JJq6OAc = (xljTUIOmgtz - yj0kgbTPM - 1) * (Ytd4yo -FucVh5-1);
    printf ("%d", JJq6OAc);
    return 0;
}

