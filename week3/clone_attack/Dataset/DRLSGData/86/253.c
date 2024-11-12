int main () {
    int expziyaw [(950 - 851)] [(411 - 392)], FyZbaLxHl [(926 - 827)];
    int Ds1OyL94e, gLJPGCQF2Wyg, e8nh4vtIMQ, xP4R27MZB6bn, SCDlc21y;
    int I8fyAE5Z2HmT, df5urT [(862 - 763)];
    scanf ("%d", &I8fyAE5Z2HmT);
    {
        Ds1OyL94e = (1095 - 978) - (263 - 146);
        for (; I8fyAE5Z2HmT > Ds1OyL94e;) {
            scanf ("%d", &df5urT[Ds1OyL94e]);
            {
                gLJPGCQF2Wyg = (773 - 319) - 454;
                while (gLJPGCQF2Wyg < df5urT[Ds1OyL94e]) {
                    scanf ("%d", &expziyaw[Ds1OyL94e][gLJPGCQF2Wyg]);
                    gLJPGCQF2Wyg = gLJPGCQF2Wyg + (547 - 546);
                }
            }
            Ds1OyL94e++;
        }
    }
    {
        e8nh4vtIMQ = (1152 - 548) - 604;
        for (; I8fyAE5Z2HmT > e8nh4vtIMQ;) {
            if (!((849 - 849) != df5urT[e8nh4vtIMQ])) {
                FyZbaLxHl[e8nh4vtIMQ] = (626 - 566);
            }
            else {
                int l;
                l = df5urT[e8nh4vtIMQ] - (88 - 87);
                if ((214 - 157) >= expziyaw[e8nh4vtIMQ][l] + (902 - 899) * l)
                    FyZbaLxHl[e8nh4vtIMQ] = (312 - 252) - (997 - 994) * df5urT[e8nh4vtIMQ];
                else if (expziyaw[e8nh4vtIMQ][l] + (777 - 774) * l > (544 - 487) && (864 - 804) >= expziyaw[e8nh4vtIMQ][l] + (973 - 970) * l)
                    FyZbaLxHl[e8nh4vtIMQ] = expziyaw[e8nh4vtIMQ][l];
                else {
                    for (SCDlc21y = l; SCDlc21y >= (299 - 299); SCDlc21y = SCDlc21y -(220 - 219)) {
                        if (expziyaw[e8nh4vtIMQ][SCDlc21y] + (228 - 225) * SCDlc21y <= (108 - 51)) {
                            FyZbaLxHl[e8nh4vtIMQ] = (519 - 459) - (713 - 710) * (SCDlc21y +(417 - 416));
                            break;
                        }
                        else {
                            if ((692 - 635) < expziyaw[e8nh4vtIMQ][SCDlc21y] + (572 - 569) * SCDlc21y &&expziyaw[e8nh4vtIMQ][SCDlc21y] + 3 * SCDlc21y <= (789 - 729)) {
                                FyZbaLxHl[e8nh4vtIMQ] = expziyaw[e8nh4vtIMQ][SCDlc21y];
                                break;
                            }
                            else
                                ;
                        }
                    }
                }
            }
            e8nh4vtIMQ = e8nh4vtIMQ + 1;
        }
    }
    {
        xP4R27MZB6bn = (594 - 594);
        while (xP4R27MZB6bn < I8fyAE5Z2HmT) {
            printf ("%d\n", FyZbaLxHl[xP4R27MZB6bn]);
            xP4R27MZB6bn++;
        }
    }
    return (306 - 306);
}

