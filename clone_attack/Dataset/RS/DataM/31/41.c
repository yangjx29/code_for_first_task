struct   student {
    char Hf3njobx [(407 - 307)], MjvFoSsQw [(786 - 686)], sex [(740 - 738)];
    char cE5JLV7Rm8 [100];
    int oyEQoTF;
    char los9KBdP2w4m [100];
    struct   student *fSuEIdY;
};
int TdhSWnT;

struct   student *tmYJ0Dw9 (void ) {
    struct   student *head;
    struct   student *p1;
    struct   student *p2;
    p1 = p2 = (struct   student *) malloc (LEN);
    scanf ("%s", &p1->Hf3njobx);
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
    if (!(0 == strcmp (p1->Hf3njobx, "end"))) {
        scanf ("%s%s%d%s%s", &p1->MjvFoSsQw, &p1->sex, &p1->oyEQoTF, &p1->cE5JLV7Rm8, &p1->los9KBdP2w4m);
    }
    TdhSWnT = (593 - 593);
    head = NULL;
    while (!(0 == strcmp (p2->Hf3njobx, "end"))) {
        TdhSWnT = TdhSWnT +(667 - 666);
        if (TdhSWnT == 1) {
            head = p1;
            p1->fSuEIdY = NULL;
        }
        else
            p2->fSuEIdY = p1;
        p1 = p2;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        p2 = (struct   student *) malloc (LEN);
        scanf ("%s", &p2->Hf3njobx);
        if (strcmp (p2->Hf3njobx, "end") != 0) {
            scanf ("%s%s%d%s%s", &p2->MjvFoSsQw, &p2->sex, &p2->oyEQoTF, &p2->cE5JLV7Rm8, &p2->los9KBdP2w4m);
        };
    }
    return p1;
}

void  jzHn86Uv (struct   student *head) {
    struct   student *Giv5usQd;
    Giv5usQd = head;
    if (head != NULL &&strcmp (head->Hf3njobx, "end") != 0) {
        do {
            printf ("%s %s %s %d %s %s\n", Giv5usQd->Hf3njobx, Giv5usQd->MjvFoSsQw, Giv5usQd->sex, Giv5usQd->oyEQoTF, Giv5usQd->cE5JLV7Rm8, Giv5usQd->los9KBdP2w4m);
            Giv5usQd = Giv5usQd->fSuEIdY;
        }
        while (Giv5usQd != NULL);
    };
}

main () {
    struct   student *VClGXMqF5;
    jzHn86Uv (VClGXMqF5);
    VClGXMqF5 = tmYJ0Dw9 ();
    return 0;
}

