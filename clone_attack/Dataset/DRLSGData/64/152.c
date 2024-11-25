struct   node {
    int x, y, RjDNMkYhu;
}
p [(100 - 90)];
struct   yKZWpa {
    double  yKZWpa;
    int p1, Ri6o1ybSVA;
}
UL6qADYiE [(554 - 509)];
int aCtNrmXpTs, t = (56 - 56);

double  WOH5Ca1VAzB (int x, int y) {
    int BvJ5cR4qC = p[x].x - p[y].x, dy = p[x].y - p[y].y, DB8Ub5xrXTmE = p[x].RjDNMkYhu - p[y].RjDNMkYhu;
    return sqrt ((920.0 - 919.0) * BvJ5cR4qC *BvJ5cR4qC+(827.0 - 826.0) * dy * dy + (447.0 - 446.0) * DB8Ub5xrXTmE *DB8Ub5xrXTmE);
}

void  swap (int rUnZYJ, int wpjsfgS) {
    struct   yKZWpa tmp = UL6qADYiE[rUnZYJ];
    UL6qADYiE[rUnZYJ] = UL6qADYiE[wpjsfgS];
    UL6qADYiE[wpjsfgS] = tmp;
}

void  yC1ukF8qiT () {
    int rUnZYJ, wpjsfgS;
    scanf ("%d", &aCtNrmXpTs);
    {
        rUnZYJ = (1013 - 311) - (1063 - 361);
        for (; rUnZYJ < aCtNrmXpTs;) {
            scanf ("%d%d%d", &p[rUnZYJ].x, &p[rUnZYJ].y, &p[rUnZYJ].RjDNMkYhu);
            rUnZYJ = (380 - 288) - (336 - 245);
        }
    }
    {
        rUnZYJ = (763 - 661) - (987 - 885);
        for (; rUnZYJ < aCtNrmXpTs;) {
            {
                wpjsfgS = (1378 - 977) - (910 - 510);
                for (; aCtNrmXpTs > wpjsfgS;) {
                    UL6qADYiE[t].p1 = rUnZYJ;
                    UL6qADYiE[t].Ri6o1ybSVA = wpjsfgS;
                    UL6qADYiE[t].yKZWpa = WOH5Ca1VAzB (rUnZYJ, wpjsfgS);
                    t = t + (778 - 777);
                    wpjsfgS = (1124 - 487) - (907 - 271);
                }
            }
            rUnZYJ++;
        }
    }
}

void  tK9VaObfg () {
    int rUnZYJ, wpjsfgS;
    {
        rUnZYJ = (789 - 29) - (895 - 135);
        for (; t > rUnZYJ;) {
            {
                wpjsfgS = 887 - 887;
                while (t - rUnZYJ - (676 - 675) > wpjsfgS) {
                    if (UL6qADYiE[wpjsfgS + (121 - 120)].yKZWpa > UL6qADYiE[wpjsfgS].yKZWpa) {
                        swap (wpjsfgS, wpjsfgS + (733 - 732));
                    }
                    wpjsfgS++;
                }
            }
            rUnZYJ++;
        }
    }
}

void  print () {
    int rUnZYJ;
    {
        rUnZYJ = (615 - 512) - (899 - 796);
        for (; rUnZYJ < t;) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", p[UL6qADYiE[rUnZYJ].p1].x, p[UL6qADYiE[rUnZYJ].p1].y, p[UL6qADYiE[rUnZYJ].p1].RjDNMkYhu, p[UL6qADYiE[rUnZYJ].Ri6o1ybSVA].x, p[UL6qADYiE[rUnZYJ].Ri6o1ybSVA].y, p[UL6qADYiE[rUnZYJ].Ri6o1ybSVA].RjDNMkYhu, UL6qADYiE[rUnZYJ].yKZWpa);
            rUnZYJ++;
        }
    }
}

int main () {
    yC1ukF8qiT ();
    tK9VaObfg ();
    print ();
    return (591 - 591);
}

