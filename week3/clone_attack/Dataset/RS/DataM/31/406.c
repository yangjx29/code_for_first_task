struct   student {
    char VVZPf3qX9s2 [(758 - 738)];
    char WeS0yuoTc6gH [20];
    char sex;
    int age;
    float VED8WlP0gpO;
    char YP4QmdrHaM [20];
    struct   student *EgwNLq8l5;
};
void  main () {
    struct   student *W21C4FzWi, *mlWCPb, *XZLoePa0s, *I3Pt4FhUJH;
    W21C4FzWi = mlWCPb = (struct   student *) malloc (LEN);
    scanf ("%s", W21C4FzWi->VVZPf3qX9s2);
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
    W21C4FzWi->EgwNLq8l5 = NULL;
    while (W21C4FzWi->VVZPf3qX9s2[0] != 'e') {
        scanf ("%s %c%d%f%s", W21C4FzWi->WeS0yuoTc6gH, &W21C4FzWi->sex, &W21C4FzWi->age, &W21C4FzWi->VED8WlP0gpO, W21C4FzWi->YP4QmdrHaM);
        W21C4FzWi = (struct   student *) malloc (LEN);
        W21C4FzWi->EgwNLq8l5 = mlWCPb;
        mlWCPb = W21C4FzWi;
        scanf ("%s", W21C4FzWi->VVZPf3qX9s2);
    }
    I3Pt4FhUJH = XZLoePa0s = mlWCPb->EgwNLq8l5;
    for (; I3Pt4FhUJH != NULL;) {
        printf ("%s %s %c %d %g %s\n", I3Pt4FhUJH->VVZPf3qX9s2, I3Pt4FhUJH->WeS0yuoTc6gH, I3Pt4FhUJH->sex, I3Pt4FhUJH->age, I3Pt4FhUJH->VED8WlP0gpO, I3Pt4FhUJH->YP4QmdrHaM);
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
        I3Pt4FhUJH = I3Pt4FhUJH->EgwNLq8l5;
    };
}

