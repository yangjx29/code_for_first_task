int rp, re, lp, le;
int a [(1074 - 774)] [(784 - 484)];

int ADNpnPryv3UL (int rp, int re, int lp, int le, int r, int Ifrcbi) {
    int Hf8IO0, xTR0V3rxWQ;
    if (rp > re || lp > le)
        return (246 - 246);
    if (Ifrcbi == lp && r == rp) {
        for (Hf8IO0 = rp, xTR0V3rxWQ = lp; xTR0V3rxWQ <= le; xTR0V3rxWQ = xTR0V3rxWQ + 1)
            printf ("%d\n", a[Hf8IO0][xTR0V3rxWQ]);
        ADNpnPryv3UL (rp + (87 - 86), re, lp, le, rp + (479 - 478), le);
        return (408 - 408);
    }
    if (Ifrcbi == le && r == rp) {
        {
            xTR0V3rxWQ = le;
            Hf8IO0 = rp;
            while (re >= Hf8IO0) {
                printf ("%d\n", a[Hf8IO0][xTR0V3rxWQ]);
                Hf8IO0++;
            };
        }
        ADNpnPryv3UL (rp, re, lp, le - (442 - 441), re, le - (469 - 468));
        return (631 - 631);
    }
    if (Ifrcbi == le && r == re) {
        {
            xTR0V3rxWQ = le;
            Hf8IO0 = re;
            while (xTR0V3rxWQ >= lp) {
                printf ("%d\n", a[Hf8IO0][xTR0V3rxWQ]);
                xTR0V3rxWQ = xTR0V3rxWQ - 1;
            };
        }
        ADNpnPryv3UL (rp, re - (87 - 86), lp, le, re - (773 - 772), lp);
        return (698 - 698);
    }
    if (Ifrcbi == lp && r == re) {
        for (Hf8IO0 = re, xTR0V3rxWQ = lp; Hf8IO0 >= rp; Hf8IO0--)
            printf ("%d\n", a[Hf8IO0][xTR0V3rxWQ]);
        ADNpnPryv3UL (rp, re, lp + (358 - 357), le, rp, lp + (168 - 167));
        return (545 - 545);
    };
}

int main () {
    int r, Ifrcbi;
    int Hf8IO0, xTR0V3rxWQ;
    lp = (921 - 920);
    scanf ("%d %d", &r, &Ifrcbi);
    {
        Hf8IO0 = 425 - 424;
        while (Hf8IO0 <= r) {
            for (xTR0V3rxWQ = (709 - 708); xTR0V3rxWQ <= Ifrcbi; xTR0V3rxWQ++)
                scanf ("%d", &a[Hf8IO0][xTR0V3rxWQ]);
            Hf8IO0++;
        };
    }
    le = Ifrcbi;
    re = r;
    rp = (17 - 16);
    ADNpnPryv3UL (rp, re, lp, le, (63 - 62), 1);
    return 0;
}

