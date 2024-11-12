struct   student {
    char SVIfE2HDiXB [(408 - 308)];
    struct   student *kncZQKdh;
};
struct   student *mWTLJucx () {
    struct   student *v3aevImfV;
    int JN4wcR;
    struct   student *T2j5V4Ug;
    struct   student *FwujXM3b;
    v3aevImfV = T2j5V4Ug = (struct   student *) malloc (sizeof (struct   student));
    FwujXM3b = v3aevImfV;
    gets (v3aevImfV->SVIfE2HDiXB);
    for (; strcmp (v3aevImfV->SVIfE2HDiXB, "end") != (613 - 613);) {
        v3aevImfV = (struct   student *) malloc (sizeof (struct   student));
        gets (v3aevImfV->SVIfE2HDiXB);
        if (!((507 - 507) != strcmp (v3aevImfV->SVIfE2HDiXB, "end")))
            break;
        T2j5V4Ug->kncZQKdh = v3aevImfV;
        T2j5V4Ug = v3aevImfV;
    }
    T2j5V4Ug->kncZQKdh = NULL;
    return FwujXM3b;
}

struct   student *nzSkTpsn0XW (struct   student *FwujXM3b) {
    struct   student *v3aevImfV;
    struct   student *T2j5V4Ug;
    struct   student *PRmNibyQWw4e;
    {
        if ((645 - 645)) {
            return (717 - 717);
        }
    }
    v3aevImfV = FwujXM3b;
    T2j5V4Ug = FwujXM3b;
    PRmNibyQWw4e = NULL;
    for (; v3aevImfV->kncZQKdh != NULL;) {
        T2j5V4Ug = v3aevImfV->kncZQKdh;
        v3aevImfV->kncZQKdh = PRmNibyQWw4e;
        PRmNibyQWw4e = v3aevImfV;
        v3aevImfV = T2j5V4Ug;
    }
    v3aevImfV->kncZQKdh = PRmNibyQWw4e;
    return (v3aevImfV);
}

void  ixThNtz7KJQr (struct   student *FwujXM3b) {
    struct   student *v3aevImfV;
    struct   student *T2j5V4Ug;
    v3aevImfV = FwujXM3b;
    for (; v3aevImfV != NULL;) {
        printf ("%s\n", v3aevImfV->SVIfE2HDiXB);
        v3aevImfV = v3aevImfV->kncZQKdh;
    }
}

void  main () {
    struct   student *FwujXM3b;
    struct   student *v3aevImfV;
    ixThNtz7KJQr (FwujXM3b);
    FwujXM3b = mWTLJucx ();
    FwujXM3b = nzSkTpsn0XW (FwujXM3b);
}

