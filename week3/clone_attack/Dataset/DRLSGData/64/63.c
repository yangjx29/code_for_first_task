struct   node {
    int ZbAdwaVotG, RWZLQj3ng, RHycPNi7A;
}
eZS17p [(944 - 934)];
struct   edge {
    int a5ptqc, SPW5bF2Lzu7I;
    double  tTcVD7Hfob;
}
t [(127 - 27)];

double  Ore2DNl1fR (int a, int b) {
    return sqrt ((eZS17p[a].ZbAdwaVotG - eZS17p[b].ZbAdwaVotG) * (eZS17p[a].ZbAdwaVotG - eZS17p[b].ZbAdwaVotG) + (eZS17p[a].RWZLQj3ng - eZS17p[b].RWZLQj3ng) * (eZS17p[a].RWZLQj3ng - eZS17p[b].RWZLQj3ng) + (eZS17p[a].RHycPNi7A - eZS17p[b].RHycPNi7A) * (eZS17p[a].RHycPNi7A - eZS17p[b].RHycPNi7A));
}

int vTIAmvWDqg (int ZbAdwaVotG, int RWZLQj3ng) {
    if (t[RWZLQj3ng].a5ptqc > t[ZbAdwaVotG].a5ptqc || (t[ZbAdwaVotG].a5ptqc == t[RWZLQj3ng].a5ptqc && t[RWZLQj3ng].SPW5bF2Lzu7I > t[ZbAdwaVotG].SPW5bF2Lzu7I))
        return (578 - 578);
    else
        return (533 - 532);
}

int main () {
    int OupOW6xw3kPy;
    int b;
    int a;
    int WFuriT;
    int l;
    int j;
    scanf ("%d", &WFuriT);
    {
        OupOW6xw3kPy = (371 - 371);
        for (; WFuriT > OupOW6xw3kPy;) {
            scanf ("%d%d%d", &eZS17p[OupOW6xw3kPy].ZbAdwaVotG, &eZS17p[OupOW6xw3kPy].RWZLQj3ng, &eZS17p[OupOW6xw3kPy].RHycPNi7A);
            OupOW6xw3kPy = OupOW6xw3kPy +1;
        }
    }
    l = (990 - 990);
    {
        OupOW6xw3kPy = (799 - 799);
        for (; WFuriT > OupOW6xw3kPy;) {
            {
                j = OupOW6xw3kPy +(716 - 715);
                for (; WFuriT > j;) {
                    l++;
                    t[l].tTcVD7Hfob = Ore2DNl1fR (OupOW6xw3kPy, j);
                    t[l].a5ptqc = OupOW6xw3kPy;
                    t[l].SPW5bF2Lzu7I = j;
                    j++;
                }
            }
            OupOW6xw3kPy = OupOW6xw3kPy +1;
        }
    }
    {
        OupOW6xw3kPy = (954 - 953);
        for (; l >= OupOW6xw3kPy;) {
            for (j = OupOW6xw3kPy +1; l >= j; j = j + 1) {
                if (t[OupOW6xw3kPy].tTcVD7Hfob < t[j].tTcVD7Hfob || (t[OupOW6xw3kPy].tTcVD7Hfob == t[j].tTcVD7Hfob && vTIAmvWDqg (OupOW6xw3kPy, j))) {
                    t[(363 - 307)] = t[OupOW6xw3kPy];
                    t[OupOW6xw3kPy] = t[j];
                    t[j] = t[(883 - 827)];
                }
            }
            OupOW6xw3kPy++;
        }
    }
    {
        if ((252 - 252)) {
            return (612 - 612);
        }
    }
    for (OupOW6xw3kPy = 1; OupOW6xw3kPy <= l; OupOW6xw3kPy = OupOW6xw3kPy +1) {
        a = t[OupOW6xw3kPy].a5ptqc;
        b = t[OupOW6xw3kPy].SPW5bF2Lzu7I;
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", eZS17p[a].ZbAdwaVotG, eZS17p[a].RWZLQj3ng, eZS17p[a].RHycPNi7A, eZS17p[b].ZbAdwaVotG, eZS17p[b].RWZLQj3ng, eZS17p[b].RHycPNi7A, t[OupOW6xw3kPy].tTcVD7Hfob);
    }
    return 0;
}

