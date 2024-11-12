struct   record {
    char str [100];
};
struct   YyxNode {
    struct   record m_rec;
    struct   YyxNode *next;
};
struct   YyxStack {
    int xf3iDRT;
    struct   YyxNode *Ep6MQoVnkYL;
};
struct   YyxStack *p9zEbw5xQO () {
    struct   YyxStack *newSt;
    if (!(NULL != (newSt = (struct   YyxStack *) malloc (sizeof (struct   YyxStack))))) {
        exit (-1);
    }
    newSt->xf3iDRT = 0;
    newSt->Ep6MQoVnkYL = NULL;
    return newSt;
}

struct   YyxStack *m34kcriSaFxU (struct   YyxStack *f8dfmFPX, const  struct   record *rec) {
    struct   YyxNode *RwUH2lETmb;
    if (!(NULL != (RwUH2lETmb = (struct   YyxNode *) malloc (sizeof (struct   YyxNode))))) {
        exit (-1);
    }
    RwUH2lETmb->m_rec = *rec;
    RwUH2lETmb->next = f8dfmFPX->Ep6MQoVnkYL;
    f8dfmFPX->Ep6MQoVnkYL = RwUH2lETmb;
    f8dfmFPX->xf3iDRT++;
    return f8dfmFPX;
}

struct   YyxStack *Top (struct   YyxStack *f8dfmFPX, struct   record *rec) {
    *rec = f8dfmFPX->Ep6MQoVnkYL->m_rec;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    return f8dfmFPX;
}

struct   YyxStack *Pop (struct   YyxStack *f8dfmFPX) {
    struct   YyxNode *xtd9uWV = f8dfmFPX->Ep6MQoVnkYL;
    free (xtd9uWV);
    if (xtd9uWV == NULL)
        return f8dfmFPX;
    f8dfmFPX->Ep6MQoVnkYL = xtd9uWV->next;
    f8dfmFPX->xf3iDRT--;
    return f8dfmFPX;
}

struct   YyxStack *ClearStack (struct   YyxStack *f8dfmFPX) {
    while (f8dfmFPX->Ep6MQoVnkYL != NULL)
        Pop (f8dfmFPX);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    return f8dfmFPX;
}

int main () {
    struct   record stu;
    struct   YyxStack *mainSt;
    gets (stu.str);
    mainSt = p9zEbw5xQO ();
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
    for (; strcmp (stu.str, "end");) {
        m34kcriSaFxU (mainSt, &stu);
        gets (stu.str);
    }
    while (mainSt->xf3iDRT > 0) {
        Pop (Top (mainSt, &stu));
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
        puts (stu.str);
    }
    return 0;
}

