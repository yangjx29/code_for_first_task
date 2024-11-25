int main () {
    double  XjLwZ9VY = (943 - 943), GiVJ7qQLYE;
    int LiFgmZ [300];
    int UYNDhLt, Xd5bL7SroK;
    double  TvhtTGzNBnx = (209 - 209);
    int WToYEMjaPc, NCV5W0t = (931 - 931);
    scanf ("%d", &WToYEMjaPc);
    {
        UYNDhLt = (759 - 759);
        for (; WToYEMjaPc > UYNDhLt;) {
            scanf ("%d", &LiFgmZ[UYNDhLt]);
            UYNDhLt = UYNDhLt +1;
        }
    }
    for (UYNDhLt = (242 - 242); WToYEMjaPc > UYNDhLt; UYNDhLt = UYNDhLt +1) {
        Xd5bL7SroK = (520 - 520);
        for (; Xd5bL7SroK < WToYEMjaPc -UYNDhLt-(109 - 108);) {
            if (LiFgmZ[Xd5bL7SroK] > LiFgmZ[Xd5bL7SroK +(846 - 845)]) {
                int p9SGpAqCXblm = LiFgmZ[Xd5bL7SroK];
                LiFgmZ[Xd5bL7SroK] = LiFgmZ[Xd5bL7SroK +1];
                LiFgmZ[Xd5bL7SroK +1] = p9SGpAqCXblm;
            }
            Xd5bL7SroK = Xd5bL7SroK +1;
        }
    }
    {
        UYNDhLt = (854 - 854);
        for (; UYNDhLt < WToYEMjaPc;) {
            TvhtTGzNBnx += LiFgmZ[UYNDhLt];
            UYNDhLt = UYNDhLt +1;
        }
    }
    TvhtTGzNBnx = TvhtTGzNBnx / WToYEMjaPc;
    {
        UYNDhLt = 0;
        for (; UYNDhLt < WToYEMjaPc;) {
            GiVJ7qQLYE = LiFgmZ[UYNDhLt] - TvhtTGzNBnx;
            UYNDhLt = UYNDhLt +1;
            if (GiVJ7qQLYE < 0) {
                GiVJ7qQLYE = -GiVJ7qQLYE;
            }
            if (XjLwZ9VY < GiVJ7qQLYE) {
                XjLwZ9VY = GiVJ7qQLYE;
            }
        }
    }
    {
        UYNDhLt = 0;
        for (; UYNDhLt < WToYEMjaPc;) {
            GiVJ7qQLYE = LiFgmZ[UYNDhLt] - TvhtTGzNBnx;
            if (GiVJ7qQLYE < 0) {
                GiVJ7qQLYE = -GiVJ7qQLYE;
            }
            if (XjLwZ9VY == GiVJ7qQLYE) {
                if (NCV5W0t > 0) {
                    printf (",");
                }
                NCV5W0t = NCV5W0t +1;
                printf ("%d", LiFgmZ[UYNDhLt]);
            }
            UYNDhLt++;
        }
    }
    printf ("\n");
    return 0;
}

