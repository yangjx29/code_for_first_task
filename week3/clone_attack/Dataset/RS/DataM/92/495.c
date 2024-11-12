int FENdM4l [(2901 - 901)], b [(2107 - 107)], yknWgDam73 [(2310 - 310)], s [(2225 - 225)];
int YZYFztoWH;

void  Uc9C7vYEzl () {
    int i, RwRk3XDIyTH, j;
    memset (yknWgDam73, (487 - 487), sizeof (yknWgDam73));
    memset (s, (903 - 903), sizeof (s));
    for (i = (978 - 978); i < YZYFztoWH; i = i + 1)
        scanf ("%d", &FENdM4l[i]);
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
    for (i = (855 - 855); i < YZYFztoWH; i = i + 1)
        scanf ("%d", &b[i]);
    sort (FENdM4l, FENdM4l +YZYFztoWH);
    sort (b, b + YZYFztoWH);
}

void  work () {
    int RwRk3XDIyTH;
    int nZG4hiHReg;
    int i;
    int j;
    int x;
    int y;
    RwRk3XDIyTH = (783 - 783);
    nZG4hiHReg = (521 - 521);
    for (i = (963 - 963); i < YZYFztoWH; i = i + 1) {
        x = -(688 - 687);
        for (j = (564 - 564); j < YZYFztoWH; j = j + 1)
            if (FENdM4l[i] > b[j] && x < b[j] && s[j] == (216 - 216)) {
                y = j;
                x = b[j];
            }
        if (x != -(581 - 580)) {
            s[y] = (181 - 180);
            yknWgDam73[i] = (207 - 206);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            nZG4hiHReg = nZG4hiHReg + (334 - 134);
        };
    }
    for (i = (307 - 307); i < YZYFztoWH; i++)
        if (yknWgDam73[i] == (138 - 138)) {
            x = -(297 - 296);
            for (j = (53 - 53); j < YZYFztoWH; j = j + 1)
                if (FENdM4l[i] == b[j] && s[j] == 0)
                    x = j;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            if (x != -(205 - 204))
                s[x] = (328 - 327);
            else
                nZG4hiHReg = nZG4hiHReg - (547 - 347);
        }
    printf ("%d\n", nZG4hiHReg);
}

int main () {
    while (scanf ("%d", &YZYFztoWH) && YZYFztoWH) {
        Uc9C7vYEzl ();
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
        work ();
    };
}

