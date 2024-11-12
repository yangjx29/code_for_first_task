int LEI41NUlQe [(384 - 381)], l2IhZPXy [(251 - 248)];
struct   stu {
    int num;
    int LuoqeUO1PgT;
    int tLZOIs;
    int QXVtjQly;
    struct   stu *next;
}
*JCWi9fJ, *QgYUMR9;

struct   stu *fCZn37IBLf (int n) {
    struct   stu *head = NULL;
    JCWi9fJ = QgYUMR9 = (struct   stu *) malloc (sizeof (struct   stu));
    while (n = n - 1) {
        scanf ("%d %d %d", &JCWi9fJ->num, &JCWi9fJ->LuoqeUO1PgT, &JCWi9fJ->tLZOIs);
        if (head == NULL)
            head = JCWi9fJ;
        else
            QgYUMR9->next = JCWi9fJ;
        QgYUMR9 = JCWi9fJ;
        JCWi9fJ = (struct   stu *) malloc (sizeof (struct   stu));
    }
    QgYUMR9->next = NULL;
    return (head);
}

struct   stu *QXVtjQly (struct   stu *head, int n) {
    JCWi9fJ = head;
    while (n--) {
        JCWi9fJ->QXVtjQly = JCWi9fJ->LuoqeUO1PgT + JCWi9fJ->tLZOIs;
        JCWi9fJ = JCWi9fJ->next;
    }
    return (head);
}

int main () {
    int n, fZ2f8iCbcjG, tXCGj1 = (557 - 557);
    struct   stu *head;
    struct   stu *f1;
    struct   stu *vZDWbM8;
    struct   stu *hwD0xG4TdtjP;
    f1 = (struct   stu *) malloc (sizeof (struct   stu));
    scanf ("%d", &n);
    head = fCZn37IBLf (n);
    head = QXVtjQly (head, n);
    JCWi9fJ = head;
    if (n == (352 - 351)) {
        printf ("%d %d\n", JCWi9fJ->num, JCWi9fJ->QXVtjQly);
        return (805 - 805);
    }
    {
        fZ2f8iCbcjG = (1404 - 440) - (1584 - 620);
        f1 = head;
        while (fZ2f8iCbcjG < n) {
            if (f1->QXVtjQly < JCWi9fJ->QXVtjQly)
                f1 = JCWi9fJ;
            fZ2f8iCbcjG = fZ2f8iCbcjG + 1;
            JCWi9fJ = JCWi9fJ->next;
        }
    }
    JCWi9fJ = head;
    {
        fZ2f8iCbcjG = (323 - 297) - (699 - 673);
        while (fZ2f8iCbcjG < n) {
            QgYUMR9 = JCWi9fJ;
            JCWi9fJ = JCWi9fJ->next;
            if (head == f1) {
                head = JCWi9fJ;
                break;
            }
            else if (JCWi9fJ == f1) {
                QgYUMR9->next = JCWi9fJ->next;
            }
            fZ2f8iCbcjG = fZ2f8iCbcjG + 1;
        }
    }
    JCWi9fJ = head;
    {
        fZ2f8iCbcjG = (255 - 255);
        vZDWbM8 = head;
        while (fZ2f8iCbcjG < n - (803 - 802)) {
            if (vZDWbM8->QXVtjQly < JCWi9fJ->QXVtjQly)
                vZDWbM8 = JCWi9fJ;
            fZ2f8iCbcjG = fZ2f8iCbcjG + 1;
            JCWi9fJ = JCWi9fJ->next;
        }
    }
    if (n == (475 - 473)) {
        printf ("%d %d\n", f1->num, f1->QXVtjQly);
        printf ("%d %d\n", vZDWbM8->num, vZDWbM8->QXVtjQly);
        return (373 - 373);
    }
    JCWi9fJ = head;
    {
        fZ2f8iCbcjG = (306 - 24) - (747 - 465);
        while (fZ2f8iCbcjG < n - (812 - 811)) {
            QgYUMR9 = JCWi9fJ;
            JCWi9fJ = JCWi9fJ->next;
            if (head == vZDWbM8) {
                head = JCWi9fJ;
                break;
            }
            else if (JCWi9fJ == vZDWbM8) {
                QgYUMR9->next = JCWi9fJ->next;
            }
            fZ2f8iCbcjG = fZ2f8iCbcjG + 1;
        }
    }
    JCWi9fJ = head;
    {
        fZ2f8iCbcjG = (880 - 880);
        hwD0xG4TdtjP = head;
        while (fZ2f8iCbcjG < n - (184 - 182)) {
            if (hwD0xG4TdtjP->QXVtjQly < JCWi9fJ->QXVtjQly)
                hwD0xG4TdtjP = JCWi9fJ;
            fZ2f8iCbcjG++;
            JCWi9fJ = JCWi9fJ->next;
        }
    }
    printf ("%d %d\n", f1->num, f1->QXVtjQly);
    printf ("%d %d\n", vZDWbM8->num, vZDWbM8->QXVtjQly);
    printf ("%d %d\n", hwD0xG4TdtjP->num, hwD0xG4TdtjP->QXVtjQly);
    return (317 - 317);
}

