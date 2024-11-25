struct   stu {
    char Vdmr49eHabs [(1218 - 718)];
    char name [500];
    char Qd25rsSXR8 [2];
    char age [100];
    char score [100];
    char UzUcVMZ65u [500];
    struct   stu *next;
};
int Tp7uLdnRhT;

struct   stu *tj (void ) {
    struct   stu *head;
    struct   stu *B0jY8L1EciCO;
    struct   stu *l14xH7qM2ep;
    head = NULL;
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
    l14xH7qM2ep = B0jY8L1EciCO = (struct   stu *) malloc (LEN);
    scanf ("%s %s %s %s %s %s", &B0jY8L1EciCO->Vdmr49eHabs, &B0jY8L1EciCO->name, &B0jY8L1EciCO->Qd25rsSXR8, &B0jY8L1EciCO->age, &B0jY8L1EciCO->score, &B0jY8L1EciCO->UzUcVMZ65u);
    Tp7uLdnRhT = 0;
    while ((82 - 81)) {
        Tp7uLdnRhT = Tp7uLdnRhT +1;
        if (!(1 != Tp7uLdnRhT))
            head = B0jY8L1EciCO;
        else
            B0jY8L1EciCO->next = l14xH7qM2ep;
        l14xH7qM2ep = B0jY8L1EciCO;
        B0jY8L1EciCO = (struct   stu *) malloc (LEN);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        scanf ("%s", &B0jY8L1EciCO->Vdmr49eHabs);
        if (strcmp (B0jY8L1EciCO->Vdmr49eHabs, "end") == 0)
            break;
        scanf ("%s %s %s %s %s", &B0jY8L1EciCO->name, &B0jY8L1EciCO->Qd25rsSXR8, &B0jY8L1EciCO->age, &B0jY8L1EciCO->score, &B0jY8L1EciCO->UzUcVMZ65u);
    }
    head = l14xH7qM2ep;
    return (head);
}

void  print (struct   stu *head) {
    struct   stu *UgY2FexSDXt0;
    UgY2FexSDXt0 = head;
    for (; UgY2FexSDXt0 != NULL;) {
        printf ("%s %s %s %s %s %s\n", UgY2FexSDXt0->Vdmr49eHabs, UgY2FexSDXt0->name, UgY2FexSDXt0->Qd25rsSXR8, UgY2FexSDXt0->age, UgY2FexSDXt0->score, UgY2FexSDXt0->UzUcVMZ65u);
        UgY2FexSDXt0 = UgY2FexSDXt0->next;
    };
}

void  main () {
    struct   stu *Glk4j9aX7;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    print (Glk4j9aX7);
    Glk4j9aX7 = tj ();
}

