struct   student {
    int bSvFW7;
    int aTk7DKFGp6Y;
    int r6eqDG7;
    int WzjclF;
};
void  main () {
    int H0RZETVd;
    int i;
    struct   student s;
    struct   student hBJuZI4Uqld;
    struct   student fK1kCshPJl;
    struct   student UbqgcpIaSj;
    fK1kCshPJl.WzjclF = hBJuZI4Uqld.WzjclF = UbqgcpIaSj.WzjclF = -(780 - 779);
    scanf ("%d", &H0RZETVd);
    for (i = 0; i < H0RZETVd; i = i + 1) {
        scanf ("%d %d %d", &s.bSvFW7, &s.aTk7DKFGp6Y, &s.r6eqDG7);
        s.WzjclF = s.aTk7DKFGp6Y + s.r6eqDG7;
        if (s.WzjclF > hBJuZI4Uqld.WzjclF) {
            UbqgcpIaSj = fK1kCshPJl;
            fK1kCshPJl = hBJuZI4Uqld;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            hBJuZI4Uqld = s;
        }
        else {
            if (s.WzjclF > fK1kCshPJl.WzjclF) {
                UbqgcpIaSj = fK1kCshPJl;
                fK1kCshPJl = s;
            }
            else {
                if (s.WzjclF > UbqgcpIaSj.WzjclF)
                    UbqgcpIaSj = s;
            };
        };
    }
    printf ("%d %d\n", hBJuZI4Uqld.bSvFW7, hBJuZI4Uqld.WzjclF);
    printf ("%d %d\n", fK1kCshPJl.bSvFW7, fK1kCshPJl.WzjclF);
    printf ("%d %d\n", UbqgcpIaSj.bSvFW7, UbqgcpIaSj.WzjclF);
}

