struct   stu {
    char ruISLgedxVqW [(96 - 81)];
    char JR0KiJhax8D [(825 - 805)];
    char R60NwXM7;
    int KiAtHopubUjL;
    char QR1ELU [(186 - 166)];
    char rEZB7uCQGvgX [(628 - 613)];
    struct   stu *Dl3019;
}
*dPVUSQR3yq, *h238YeGXQbJ, *r78o6NmqI, *EvkQt38pmBM, *OBL9OV;

struct   stu *IDkB1l9Lw (void ) {
    char U3Pe9TjzZcE [(786 - 771)];
    scanf ("%s", &U3Pe9TjzZcE);
    r78o6NmqI = null;
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
    for (; strlen (U3Pe9TjzZcE) != (764 - 761);) {
        dPVUSQR3yq = (struct   stu *) malloc (l);
        strcpy (dPVUSQR3yq->ruISLgedxVqW, U3Pe9TjzZcE);
        scanf ("%s %c %d %s %s", dPVUSQR3yq->JR0KiJhax8D, &dPVUSQR3yq->R60NwXM7, &dPVUSQR3yq->KiAtHopubUjL, dPVUSQR3yq->QR1ELU, dPVUSQR3yq->rEZB7uCQGvgX);
        scanf ("%s", U3Pe9TjzZcE);
        if (!(null != r78o6NmqI))
            h238YeGXQbJ = r78o6NmqI = dPVUSQR3yq;
        else
            h238YeGXQbJ = h238YeGXQbJ->Dl3019 = dPVUSQR3yq;
    }
    h238YeGXQbJ->Dl3019 = null;
    return (r78o6NmqI);
}

struct   stu *ry1u7eVGKU (struct   stu *r78o6NmqI) {
    EvkQt38pmBM = null;
    do {
        dPVUSQR3yq = r78o6NmqI;
        h238YeGXQbJ = null;
        for (; !(null == dPVUSQR3yq->Dl3019);) {
            h238YeGXQbJ = dPVUSQR3yq;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            dPVUSQR3yq = dPVUSQR3yq->Dl3019;
        }
        if (EvkQt38pmBM == null)
            EvkQt38pmBM = dPVUSQR3yq, OBL9OV = EvkQt38pmBM->Dl3019 = h238YeGXQbJ;
        OBL9OV = OBL9OV->Dl3019 = h238YeGXQbJ;
        h238YeGXQbJ->Dl3019 = null;
    }
    while (r78o6NmqI->Dl3019 != null);
    return (EvkQt38pmBM);
}

void  ikDE0goN (struct   stu *EvkQt38pmBM) {
    dPVUSQR3yq = EvkQt38pmBM;
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
    for (; dPVUSQR3yq != null;) {
        printf ("%s %s %c %d %s %s\n", dPVUSQR3yq->ruISLgedxVqW, dPVUSQR3yq->JR0KiJhax8D, dPVUSQR3yq->R60NwXM7, dPVUSQR3yq->KiAtHopubUjL, dPVUSQR3yq->QR1ELU, dPVUSQR3yq->rEZB7uCQGvgX);
        dPVUSQR3yq = dPVUSQR3yq->Dl3019;
    };
}

int main () {
    ikDE0goN (EvkQt38pmBM);
    r78o6NmqI = IDkB1l9Lw ();
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
    EvkQt38pmBM = ry1u7eVGKU (r78o6NmqI);
}

