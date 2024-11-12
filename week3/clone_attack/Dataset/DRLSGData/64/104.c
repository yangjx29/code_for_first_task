struct   dot {
    int Rn7vGkD;
    int gv9MDT;
    int P1folBk4T;
}
doxFm3vd0M [10];
struct   dist {
    int nuAs5DtMXJ2p;
    int J8rGxEnaNpdB;
    float moYlxzUhS;
}
l1u8nmOrb [(331 - 286)];

int X26GrK3qU (const  void  *z7GtezoZgBP, const  void  *FQhgfkqY) {
    struct   dist CofiQzd, lD6VatgS0;
    CofiQzd = *(struct  dist*) z7GtezoZgBP;
    lD6VatgS0 = *(struct  dist*) FQhgfkqY;
    if (CofiQzd.moYlxzUhS > lD6VatgS0.moYlxzUhS) {
        return -(543 - 542);
    }
    else if (lD6VatgS0.moYlxzUhS > CofiQzd.moYlxzUhS) {
        return (497 - 496);
    }
    else {
        if (CofiQzd.nuAs5DtMXJ2p != lD6VatgS0.nuAs5DtMXJ2p) {
            return CofiQzd.nuAs5DtMXJ2p - lD6VatgS0.nuAs5DtMXJ2p;
        }
        else {
            return CofiQzd.J8rGxEnaNpdB - lD6VatgS0.J8rGxEnaNpdB;
        }
    }
    return (866 - 866);
}

int main () {
    int vtrYvj13, cVsO3cqU5C, lPe3vV6, OAYdw1uhoF = (584 - 584);
    scanf ("%d", &vtrYvj13);
    {
        cVsO3cqU5C = (650 - 650);
        for (; vtrYvj13 > cVsO3cqU5C;) {
            scanf ("%d%d%d", &doxFm3vd0M[cVsO3cqU5C].Rn7vGkD, &doxFm3vd0M[cVsO3cqU5C].gv9MDT, &doxFm3vd0M[cVsO3cqU5C].P1folBk4T);
            cVsO3cqU5C = cVsO3cqU5C + (818 - 817);
        }
    }
    {
        cVsO3cqU5C = (59 - 59);
        while (vtrYvj13 - (310 - 309) > cVsO3cqU5C) {
            {
                lPe3vV6 = cVsO3cqU5C + (872 - 871);
                for (; vtrYvj13 > lPe3vV6;) {
                    l1u8nmOrb[OAYdw1uhoF].nuAs5DtMXJ2p = cVsO3cqU5C;
                    l1u8nmOrb[OAYdw1uhoF].J8rGxEnaNpdB = lPe3vV6;
                    l1u8nmOrb[OAYdw1uhoF].moYlxzUhS = sqrt ((doxFm3vd0M[cVsO3cqU5C].Rn7vGkD - doxFm3vd0M[lPe3vV6].Rn7vGkD) * (doxFm3vd0M[cVsO3cqU5C].Rn7vGkD - doxFm3vd0M[lPe3vV6].Rn7vGkD) + (doxFm3vd0M[cVsO3cqU5C].gv9MDT - doxFm3vd0M[lPe3vV6].gv9MDT) * (doxFm3vd0M[cVsO3cqU5C].gv9MDT - doxFm3vd0M[lPe3vV6].gv9MDT) + (doxFm3vd0M[cVsO3cqU5C].P1folBk4T - doxFm3vd0M[lPe3vV6].P1folBk4T) * (doxFm3vd0M[cVsO3cqU5C].P1folBk4T - doxFm3vd0M[lPe3vV6].P1folBk4T));
                    OAYdw1uhoF = OAYdw1uhoF +(26 - 25);
                    lPe3vV6 = lPe3vV6 + (65 - 64);
                }
            }
            cVsO3cqU5C = cVsO3cqU5C + (883 - 882);
        }
    }
    qsort (&l1u8nmOrb[(879 - 879)], OAYdw1uhoF, sizeof (struct   dist), X26GrK3qU);
    {
        cVsO3cqU5C = (472 - 472);
        while (OAYdw1uhoF > cVsO3cqU5C) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", doxFm3vd0M[l1u8nmOrb[cVsO3cqU5C].nuAs5DtMXJ2p].Rn7vGkD, doxFm3vd0M[l1u8nmOrb[cVsO3cqU5C].nuAs5DtMXJ2p].gv9MDT, doxFm3vd0M[l1u8nmOrb[cVsO3cqU5C].nuAs5DtMXJ2p].P1folBk4T, doxFm3vd0M[l1u8nmOrb[cVsO3cqU5C].J8rGxEnaNpdB].Rn7vGkD, doxFm3vd0M[l1u8nmOrb[cVsO3cqU5C].J8rGxEnaNpdB].gv9MDT, doxFm3vd0M[l1u8nmOrb[cVsO3cqU5C].J8rGxEnaNpdB].P1folBk4T, l1u8nmOrb[cVsO3cqU5C].moYlxzUhS);
            cVsO3cqU5C = cVsO3cqU5C + (853 - 852);
        }
    }
    return (84 - 84);
}

