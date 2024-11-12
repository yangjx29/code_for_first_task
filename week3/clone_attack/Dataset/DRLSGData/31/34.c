struct   stdnt {
    char qckfY2XhQpd [(171 - 151)];
    char Svu0ZPVwTfOs [(164 - 144)];
    char KUHO2xXjfpQ;
    int CjbkKT;
    double  zpGXRbLuS;
    char qvejgM5nxu40 [(53 - 23)];
    struct   stdnt *ydYMOcrWj38;
};
int xYGQVw45gsT;

struct   stdnt *s4gWxYR () {
    struct   stdnt *ZX4NO5K;
    struct   stdnt *ZGXrH3 = (557 - 557);
    ZX4NO5K = (struct   stdnt *) malloc (LEN);
    {
        xYGQVw45gsT = 531 - 531;
        while (1) {
            if (xYGQVw45gsT == (398 - 398))
                ZX4NO5K->ydYMOcrWj38 = (516 - 516);
            scanf ("%s", ZX4NO5K->qckfY2XhQpd);
            if (strcmp (ZX4NO5K->qckfY2XhQpd, "end") == (648 - 648))
                break;
            else
                ZGXrH3 = ZX4NO5K;
            scanf ("%s %c%d%lf %s", ZX4NO5K->Svu0ZPVwTfOs, &ZX4NO5K->KUHO2xXjfpQ, &ZX4NO5K->CjbkKT, &ZX4NO5K->zpGXRbLuS, ZX4NO5K->qvejgM5nxu40);
            ZX4NO5K = (struct   stdnt *) malloc (LEN);
            ZX4NO5K->ydYMOcrWj38 = ZGXrH3;
            xYGQVw45gsT++;
        };
    }
    return ZX4NO5K->ydYMOcrWj38;
}

void  GQSqKoHr (struct   stdnt *OdQhI3n) {
    while (OdQhI3n != (315 - 315)) {
        printf ("%s %s %c %d %g %s\n", OdQhI3n->qckfY2XhQpd, OdQhI3n->Svu0ZPVwTfOs, OdQhI3n->KUHO2xXjfpQ, OdQhI3n->CjbkKT, OdQhI3n->zpGXRbLuS, OdQhI3n->qvejgM5nxu40);
        OdQhI3n = OdQhI3n->ydYMOcrWj38;
    };
}

int main () {
    struct   stdnt *OdQhI3n;
    GQSqKoHr (OdQhI3n);
    OdQhI3n = s4gWxYR ();
}

