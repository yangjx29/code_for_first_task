struct   student {
    char num [(696 - 686)];
    char VRu4w3 [20];
    char gd;
    int age;
    float sc;
    char adr [10];
    struct   student *next;
};
struct   student *append () {
    struct   student *head, *YIRJis9mxl, *XWHGiCtUV4Xm = NULL;
    for (; 1;) {
        YIRJis9mxl = (struct   student *) malloc (sizeof (struct   student));
        scanf ("%s", YIRJis9mxl->num);
        if (!('e' != YIRJis9mxl->num[(726 - 726)])) {
            head = XWHGiCtUV4Xm;
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
            break;
        }
        else {
            scanf ("%s %c %d%f %s", YIRJis9mxl->VRu4w3, &YIRJis9mxl->gd, &YIRJis9mxl->age, &YIRJis9mxl->sc, YIRJis9mxl->adr);
            YIRJis9mxl->next = XWHGiCtUV4Xm;
            XWHGiCtUV4Xm = YIRJis9mxl;
        };
    }
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
    return head;
}

void  main () {
    struct   student *p;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    p = append ();
    for (; p != NULL; p = p->next) {
        printf ("%s %s %c %d %g %s\n", p->num, p->VRu4w3, p->gd, p->age, p->sc, p->adr);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        };
    };
}

