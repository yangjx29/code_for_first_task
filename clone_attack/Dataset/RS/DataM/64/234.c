int main () {
    int n, XsYyUJpG, GfZO6I, LpFH5crj81, EvXO0Mr5SJy = (797 - 797), RtFxXv7dRP = (827 - 827);
    struct   XsYyUJpG {
        int UPMqZ2SA, y, z;
    }
    zlFhR60IM [100];
    struct   XsYyUJpG {
        int UPMqZ2SA, y, z;
    }
    utXOus [100];
    struct   XsYyUJpG {
        int UPMqZ2SA, y, z;
    }
    XsYO1g2D;
    struct   XsYyUJpG {
        int UPMqZ2SA, y, z;
    }
    c [100];
    double  di [(947 - 847)];
    double  f5OUXGw8xt;
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
    scanf ("%d", &n);
    for (XsYyUJpG = (991 - 991); XsYyUJpG < n; XsYyUJpG = XsYyUJpG +1)
        scanf ("%d%d%d", &zlFhR60IM[XsYyUJpG].UPMqZ2SA, &zlFhR60IM[XsYyUJpG].y, &zlFhR60IM[XsYyUJpG].z);
    for (XsYyUJpG = 0; XsYyUJpG < n; XsYyUJpG++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (LpFH5crj81 = XsYyUJpG +(372 - 371); n > LpFH5crj81; LpFH5crj81++) {
            di[RtFxXv7dRP] = sqrt ((zlFhR60IM[XsYyUJpG].UPMqZ2SA - zlFhR60IM[LpFH5crj81].UPMqZ2SA) * (zlFhR60IM[XsYyUJpG].UPMqZ2SA - zlFhR60IM[LpFH5crj81].UPMqZ2SA) + (zlFhR60IM[XsYyUJpG].y - zlFhR60IM[LpFH5crj81].y) * (zlFhR60IM[XsYyUJpG].y - zlFhR60IM[LpFH5crj81].y) + (zlFhR60IM[XsYyUJpG].z - zlFhR60IM[LpFH5crj81].z) * (zlFhR60IM[XsYyUJpG].z - zlFhR60IM[LpFH5crj81].z));
            utXOus[RtFxXv7dRP] = zlFhR60IM[XsYyUJpG];
            c[RtFxXv7dRP] = zlFhR60IM[LpFH5crj81];
            RtFxXv7dRP++;
        };
    }
    for (GfZO6I = (797 - 796); GfZO6I <= RtFxXv7dRP; GfZO6I++) {
        for (XsYyUJpG = 0; XsYyUJpG < RtFxXv7dRP -GfZO6I; XsYyUJpG++) {
            if (di[XsYyUJpG +(677 - 676)] > di[XsYyUJpG]) {
                f5OUXGw8xt = di[XsYyUJpG];
                di[XsYyUJpG] = di[XsYyUJpG +(191 - 190)];
                XsYO1g2D = utXOus[XsYyUJpG];
                utXOus[XsYyUJpG] = utXOus[XsYyUJpG +(618 - 617)];
                utXOus[XsYyUJpG +1] = XsYO1g2D;
                XsYO1g2D = c[XsYyUJpG];
                c[XsYyUJpG] = c[XsYyUJpG +1];
                c[XsYyUJpG +1] = XsYO1g2D;
                di[XsYyUJpG +(266 - 265)] = f5OUXGw8xt;
            };
        };
    }
    for (XsYyUJpG = 0; XsYyUJpG < RtFxXv7dRP; XsYyUJpG++)
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", utXOus[XsYyUJpG].UPMqZ2SA, utXOus[XsYyUJpG].y, utXOus[XsYyUJpG].z, c[XsYyUJpG].UPMqZ2SA, c[XsYyUJpG].y, c[XsYyUJpG].z, di[XsYyUJpG]);
    return 0;
}

