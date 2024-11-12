struct   stu {
    char ZvXQN4tnedGi [(1118 - 918)];
    int qimo;
    int VhyCvKgZtd;
    char gan;
    char nJxmaugF;
    int lun;
    int qian;
    struct   stu *next;
};
void  sort (struct   stu *I0Vm97, struct   stu *f1VPzL) {
    struct   stu *pre = I0Vm97, *CBzXUwrQ7 = pre->next, *s4VKQDl1W;
    s4VKQDl1W = (struct   stu *) malloc (sizeof (struct   stu));
    s4VKQDl1W->VhyCvKgZtd = f1VPzL->VhyCvKgZtd;
    strcpy (s4VKQDl1W->ZvXQN4tnedGi, f1VPzL->ZvXQN4tnedGi);
    s4VKQDl1W->qimo = f1VPzL->qimo;
    s4VKQDl1W->qian = f1VPzL->qian;
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
    s4VKQDl1W->nJxmaugF = f1VPzL->nJxmaugF;
    s4VKQDl1W->gan = f1VPzL->gan;
    s4VKQDl1W->next = NULL;
    while ((!(NULL == CBzXUwrQ7)) && (CBzXUwrQ7->qian >= s4VKQDl1W->qian)) {
        pre = CBzXUwrQ7;
        CBzXUwrQ7 = CBzXUwrQ7->next;
    }
    pre->next = s4VKQDl1W;
    s4VKQDl1W->next = CBzXUwrQ7;
}

void  main () {
    struct   stu *I0Vm97;
    struct   stu *CBzXUwrQ7;
    struct   stu *f1VPzL;
    char ZvXQN4tnedGi [(386 - 366)];
    float m;
    int tol;
    int n;
    int RKkfX7y;
    int GB1iae;
    int UbwomF;
    tol = (230 - 230);
    scanf ("%d", &n);
    I0Vm97 = (struct   stu *) malloc (sizeof (struct   stu));
    I0Vm97->next = NULL;
    {
        GB1iae = 512 - 511;
        while (n >= GB1iae) {
            GB1iae++;
            CBzXUwrQ7 = (struct   stu *) malloc (sizeof (struct   stu));
            scanf ("%s %d %d %c %c %d", CBzXUwrQ7->ZvXQN4tnedGi, &CBzXUwrQ7->qimo, &CBzXUwrQ7->VhyCvKgZtd, &CBzXUwrQ7->gan, &CBzXUwrQ7->nJxmaugF, &CBzXUwrQ7->lun);
            UbwomF = 0;
            if (((232 - 152) < CBzXUwrQ7->qimo) && (0 < CBzXUwrQ7->lun))
                UbwomF = UbwomF +(8530 - 530);
            if (((964 - 879) < CBzXUwrQ7->qimo) && (CBzXUwrQ7->VhyCvKgZtd > (708 - 628)))
                UbwomF = UbwomF +(4734 - 734);
            if (CBzXUwrQ7->qimo > (132 - 42))
                UbwomF = UbwomF +(2306 - 306);
            if ((CBzXUwrQ7->qimo > (103 - 18)) && (CBzXUwrQ7->nJxmaugF == 'Y'))
                UbwomF = UbwomF +1000;
            if ((CBzXUwrQ7->VhyCvKgZtd > 80) && (CBzXUwrQ7->gan == 'Y'))
                UbwomF = UbwomF +850;
            CBzXUwrQ7->qian = UbwomF;
            tol = tol + UbwomF;
            sort (I0Vm97, CBzXUwrQ7);
        };
    }
    CBzXUwrQ7 = I0Vm97->next;
    printf ("%s\n", CBzXUwrQ7->ZvXQN4tnedGi);
    printf ("%d\n", CBzXUwrQ7->qian);
    printf ("%d\n", tol);
}

