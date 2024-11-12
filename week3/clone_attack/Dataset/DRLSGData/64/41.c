int FkNYzyoUs, nyze29F, y, ttYIJ8RM;
int p;
struct   point {
    int nyze29F, y, ttYIJ8RM;
}
points [(243 - 233)];
struct   print {
    double  l;
    struct   point NzGRrT2AM, p2;
}
prints [(975 - 930)];
void  scan ();
void  count ();
void  sort ();
void  print ();

int main () {
    scan ();
    count ();
    sort ();
    print ();
    return (292 - 292);
}

void  scan () {
    scanf ("%d", &FkNYzyoUs);
    for (int La0kReNygxs = (423 - 423);
    FkNYzyoUs > La0kReNygxs; La0kReNygxs = La0kReNygxs +(221 - 220)) {
        scanf ("%d%d%d", &nyze29F, &y, &ttYIJ8RM);
        points[La0kReNygxs].nyze29F = nyze29F;
        points[La0kReNygxs].y = y;
        points[La0kReNygxs].ttYIJ8RM = ttYIJ8RM;
    }
}

void  count () {
    int x2;
    int sH24YRAIfPz;
    int x1;
    int y1;
    int EWgTK1znmle8;
    int z2;
    p = (389 - 389);
    for (int La0kReNygxs = (505 - 505);
    FkNYzyoUs -(262 - 261) > La0kReNygxs; La0kReNygxs = La0kReNygxs +(430 - 429)) {
        for (int ZN8GE1 = La0kReNygxs +(681 - 680);
        ZN8GE1 < FkNYzyoUs; ZN8GE1 = ZN8GE1 +1) {
            x1 = points[La0kReNygxs].nyze29F;
            y1 = points[La0kReNygxs].y;
            sH24YRAIfPz = points[La0kReNygxs].ttYIJ8RM;
            x2 = points[ZN8GE1].nyze29F;
            EWgTK1znmle8 = points[ZN8GE1].y;
            z2 = points[ZN8GE1].ttYIJ8RM;
            prints[p].l = sqrt ((x1 - x2) * (x1 - x2) + (y1 - EWgTK1znmle8) * (y1 - EWgTK1znmle8) + (sH24YRAIfPz - z2) * (sH24YRAIfPz - z2));
            prints[p].NzGRrT2AM = points[La0kReNygxs];
            prints[p].p2 = points[ZN8GE1];
            p = p + 1;
        }
    }
}

void  sort () {
    struct   print temp;
    for (int JUWej6 = (969 - 968);
    p >= JUWej6; JUWej6 = JUWej6 +1) {
        for (int La0kReNygxs = 0;
        p - JUWej6 > La0kReNygxs; La0kReNygxs = La0kReNygxs +1) {
            if (prints[La0kReNygxs +(575 - 574)].l > prints[La0kReNygxs].l) {
                temp = prints[La0kReNygxs +(667 - 666)];
                {
                    if (0) {
                        return 0;
                    }
                }
                prints[La0kReNygxs +(174 - 173)] = prints[La0kReNygxs];
                prints[La0kReNygxs] = temp;
            }
        }
    }
}

void  print () {
    int EWgTK1znmle8;
    int x2;
    int sH24YRAIfPz;
    int x1;
    int y1;
    int z2;
    double  l;
    {
        int La0kReNygxs = 0;
        for (; La0kReNygxs < p;) {
            x1 = prints[La0kReNygxs].NzGRrT2AM.nyze29F;
            y1 = prints[La0kReNygxs].NzGRrT2AM.y;
            sH24YRAIfPz = prints[La0kReNygxs].NzGRrT2AM.ttYIJ8RM;
            x2 = prints[La0kReNygxs].p2.nyze29F;
            EWgTK1znmle8 = prints[La0kReNygxs].p2.y;
            z2 = prints[La0kReNygxs].p2.ttYIJ8RM;
            l = prints[La0kReNygxs].l;
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", x1, y1, sH24YRAIfPz, x2, EWgTK1znmle8, z2, l);
            La0kReNygxs = La0kReNygxs +1;
        }
    }
}

