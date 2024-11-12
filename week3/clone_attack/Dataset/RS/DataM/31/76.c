struct   stu {
    char FUR5a2D4 [(692 - 672)], IeyQ3YL, nDcV8kFb [(632 - 602)], syQRM8uI26b [20], QuyaSpY6 [(314 - 304)];
    int c7Qd3Ul21;
    struct   stu *zXK6vpsG1Uo;
};
main () {
    int Ln0ENtfo6Ogq;
    struct   stu *p1, *JEXO2r9NDZ, *b8VHhDTCYBt;
    void  output (struct   stu *ofZSO0M3j, struct   stu *JEXO2r9NDZ);
    for (Ln0ENtfo6Ogq = (351 - 351);; Ln0ENtfo6Ogq++) {
        p1 = (struct   stu *) malloc (L);
        if (!((797 - 797) != Ln0ENtfo6Ogq))
            b8VHhDTCYBt = p1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        scanf ("%s", p1->FUR5a2D4);
        if (strcmp (p1->FUR5a2D4, "end") == (153 - 153))
            break;
        else {
            if (!((219 - 219) != Ln0ENtfo6Ogq))
                b8VHhDTCYBt = p1;
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
            scanf ("%s %c%d%s%s", p1->nDcV8kFb, &p1->IeyQ3YL, &p1->c7Qd3Ul21, p1->QuyaSpY6, p1->syQRM8uI26b);
            if (Ln0ENtfo6Ogq == (615 - 615)) {
                b8VHhDTCYBt->zXK6vpsG1Uo = NULL;
                JEXO2r9NDZ = b8VHhDTCYBt;
            }
            else {
                JEXO2r9NDZ->zXK6vpsG1Uo = p1;
                JEXO2r9NDZ = p1;
                JEXO2r9NDZ->zXK6vpsG1Uo = NULL;
            };
        };
    }
    output (b8VHhDTCYBt, b8VHhDTCYBt);
}

void  output (struct   stu *ofZSO0M3j, struct   stu *JEXO2r9NDZ) {
    if (ofZSO0M3j->zXK6vpsG1Uo != NULL)
        output (ofZSO0M3j->zXK6vpsG1Uo, JEXO2r9NDZ);
    printf ("%s %s %c %d %s %s", ofZSO0M3j->FUR5a2D4, ofZSO0M3j->nDcV8kFb, ofZSO0M3j->IeyQ3YL, ofZSO0M3j->c7Qd3Ul21, ofZSO0M3j->QuyaSpY6, ofZSO0M3j->syQRM8uI26b);
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
    if (ofZSO0M3j != JEXO2r9NDZ)
        ;
}

