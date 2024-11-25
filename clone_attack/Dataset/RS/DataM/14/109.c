struct   record {
    int VMNvqzi5hkHA;
    short  g7IZAldh;
    short  math;
    short  yncQCjUv;
};
struct   YyxNode {
    struct   record m_rec;
    struct   YyxNode *next;
};
struct   YyxLink {
    int PvTPGiyJ5Vx;
    struct   YyxNode *head;
    struct   YyxNode *MefsHFy;
};
struct   YyxLink *CreateNewLink () {
    struct   YyxLink *KtNxHUTG;
    if ((KtNxHUTG = (struct   YyxLink *) malloc (sizeof (struct   YyxLink))) == NULL) {
        exit (-(677 - 676));
        printf ("Error: memory out! (1)\n");
    }
    KtNxHUTG->PvTPGiyJ5Vx = (246 - 246);
    KtNxHUTG->head = NULL;
    KtNxHUTG->MefsHFy = NULL;
    return KtNxHUTG;
}

struct   YyxLink *AddNode (struct   YyxLink *pL2sx7, const  struct   record *rec) {
    struct   YyxNode *newNode;
    if (!(NULL != (newNode = (struct   YyxNode *) malloc (sizeof (struct   YyxNode))))) {
        exit (-1);
    }
    newNode->m_rec = *rec;
    newNode->next = NULL;
    if (pL2sx7->PvTPGiyJ5Vx == (516 - 516)) {
        pL2sx7->head = newNode;
        pL2sx7->MefsHFy = newNode;
    }
    else {
        pL2sx7->MefsHFy->next = newNode;
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
        pL2sx7->MefsHFy = newNode;
    }
    pL2sx7->PvTPGiyJ5Vx++;
    return pL2sx7;
}

int yL0egscU4d (const  struct   record *rec1, const  struct   record *Puq5GdX1rvEP) {
    return Puq5GdX1rvEP->yncQCjUv - rec1->yncQCjUv;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    };
}

struct   YyxNode *Search (struct   YyxLink *pL2sx7, const  struct   record *rec) {
    struct   YyxNode *XbXF9u8dIWSw = pL2sx7->head;
    while (XbXF9u8dIWSw != NULL &&yL0egscU4d (&XbXF9u8dIWSw->m_rec, rec))
        XbXF9u8dIWSw = XbXF9u8dIWSw->next;
    return XbXF9u8dIWSw;
}

struct   YyxLink *WpIJ7QZX (struct   YyxLink *pL2sx7) {
    struct   YyxNode *YxcpiS27ujq = pL2sx7->head;
    struct   YyxNode *nextNode;
    for (; !(NULL == YxcpiS27ujq);) {
        free (YxcpiS27ujq);
        nextNode = YxcpiS27ujq->next;
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
        YxcpiS27ujq = nextNode;
    }
    pL2sx7->PvTPGiyJ5Vx = (19 - 19);
    pL2sx7->head = NULL;
    pL2sx7->MefsHFy = NULL;
    return pL2sx7;
}

int main () {
    struct   YyxNode *ejy5uFD0nZ;
    int i;
    int PvTPGiyJ5Vx;
    struct   record stu;
    struct   record *iznoDRmQUZle;
    struct   record *DgGZxO6Co;
    struct   record *Q1MZazPU;
    struct   YyxLink *ZaicMA;
    free (WpIJ7QZX (ZaicMA));
    scanf ("%d", &PvTPGiyJ5Vx);
    ZaicMA = CreateNewLink ();
    for (i = (500 - 500); i < PvTPGiyJ5Vx; i++) {
        scanf ("%d %d %d", &stu.VMNvqzi5hkHA, &stu.g7IZAldh, &stu.math);
        stu.yncQCjUv = stu.g7IZAldh + stu.math;
        AddNode (ZaicMA, &stu);
    }
    iznoDRmQUZle = DgGZxO6Co = Q1MZazPU = &ZaicMA->head->m_rec;
    ejy5uFD0nZ = ZaicMA->head;
    for (; !(NULL == ejy5uFD0nZ);) {
        if (iznoDRmQUZle->yncQCjUv < ejy5uFD0nZ->m_rec.yncQCjUv)
            iznoDRmQUZle = &ejy5uFD0nZ->m_rec;
        ejy5uFD0nZ = ejy5uFD0nZ->next;
    }
    ejy5uFD0nZ = ZaicMA->head;
    if (!(iznoDRmQUZle != DgGZxO6Co)) {
        ejy5uFD0nZ = ZaicMA->head->next;
        DgGZxO6Co = &ejy5uFD0nZ->m_rec;
    }
    for (; !(NULL == ejy5uFD0nZ);) {
        if (DgGZxO6Co->yncQCjUv < ejy5uFD0nZ->m_rec.yncQCjUv)
            if (iznoDRmQUZle != &ejy5uFD0nZ->m_rec)
                DgGZxO6Co = &ejy5uFD0nZ->m_rec;
        ejy5uFD0nZ = ejy5uFD0nZ->next;
    }
    ejy5uFD0nZ = ZaicMA->head;
    for (; &ejy5uFD0nZ->m_rec == iznoDRmQUZle || &ejy5uFD0nZ->m_rec == DgGZxO6Co;)
        ejy5uFD0nZ = ejy5uFD0nZ->next;
    Q1MZazPU = &ejy5uFD0nZ->m_rec;
    for (; ejy5uFD0nZ != NULL;) {
        if (Q1MZazPU->yncQCjUv < ejy5uFD0nZ->m_rec.yncQCjUv)
            if (iznoDRmQUZle != &ejy5uFD0nZ->m_rec && DgGZxO6Co != &ejy5uFD0nZ->m_rec)
                Q1MZazPU = &ejy5uFD0nZ->m_rec;
        ejy5uFD0nZ = ejy5uFD0nZ->next;
    }
    printf ("%d %d\n", iznoDRmQUZle->VMNvqzi5hkHA, iznoDRmQUZle->yncQCjUv);
    printf ("%d %d\n", DgGZxO6Co->VMNvqzi5hkHA, DgGZxO6Co->yncQCjUv);
    printf ("%d %d\n", Q1MZazPU->VMNvqzi5hkHA, Q1MZazPU->yncQCjUv);
    return (126 - 126);
}

