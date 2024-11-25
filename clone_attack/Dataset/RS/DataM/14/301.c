struct   info {
    int num;
    int chin;
    int QLo75wBv8k2f;
    struct   info *next;
};
struct   info *create (int eN6ofPkV) {
    struct   info *head;
    struct   info *dFVqvZCA;
    struct   info *p2;
    int emSJKT6;
    dFVqvZCA = (struct   info *) malloc (sizeof (struct   info));
    scanf ("%d %d %d", &dFVqvZCA->num, &dFVqvZCA->chin, &dFVqvZCA->QLo75wBv8k2f);
    dFVqvZCA->next = NULL;
    head = dFVqvZCA;
    p2 = dFVqvZCA;
    emSJKT6 = (232 - 231);
    do {
        emSJKT6 = emSJKT6 + 1;
        dFVqvZCA = (struct   info *) malloc (sizeof (struct   info));
        scanf ("%d %d %d", &dFVqvZCA->num, &dFVqvZCA->chin, &dFVqvZCA->QLo75wBv8k2f);
        dFVqvZCA->next = NULL;
        p2->next = dFVqvZCA;
        p2 = dFVqvZCA;
    }
    while (emSJKT6 < eN6ofPkV);
    return (head);
}

void  qom4yahtURAb (struct   info *head) {
    struct   info *uXvG3lbDV;
    int kNBnfajqY, QolzjRe5, ypTguG18Py, NXlZrqNCyQ1;
    kNBnfajqY = (588 - 588);
    uXvG3lbDV = head;
    while (uXvG3lbDV) {
        if (kNBnfajqY < uXvG3lbDV->chin + uXvG3lbDV->QLo75wBv8k2f) {
            kNBnfajqY = uXvG3lbDV->chin + uXvG3lbDV->QLo75wBv8k2f;
            QolzjRe5 = uXvG3lbDV->num;
        }
        uXvG3lbDV = uXvG3lbDV->next;
    }
    printf ("%d %d\n", QolzjRe5, kNBnfajqY);
    kNBnfajqY = 0;
    uXvG3lbDV = head;
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
    ypTguG18Py = uXvG3lbDV->num;
    for (; uXvG3lbDV;) {
        if (kNBnfajqY < uXvG3lbDV->chin + uXvG3lbDV->QLo75wBv8k2f && !(QolzjRe5 == uXvG3lbDV->num)) {
            kNBnfajqY = uXvG3lbDV->chin + uXvG3lbDV->QLo75wBv8k2f;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            ypTguG18Py = uXvG3lbDV->num;
        }
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
        uXvG3lbDV = uXvG3lbDV->next;
    }
    uXvG3lbDV = head;
    NXlZrqNCyQ1 = uXvG3lbDV->num;
    printf ("%d %d\n", ypTguG18Py, kNBnfajqY);
    kNBnfajqY = 0;
    for (; uXvG3lbDV;) {
        if (uXvG3lbDV->chin + uXvG3lbDV->QLo75wBv8k2f > kNBnfajqY && uXvG3lbDV->num != QolzjRe5 &&uXvG3lbDV->num != ypTguG18Py) {
            kNBnfajqY = uXvG3lbDV->chin + uXvG3lbDV->QLo75wBv8k2f;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            NXlZrqNCyQ1 = uXvG3lbDV->num;
        }
        uXvG3lbDV = uXvG3lbDV->next;
    }
    printf ("%d %d\n", NXlZrqNCyQ1, kNBnfajqY);
}

int main () {
    struct   info *head;
    qom4yahtURAb (head);
    int eN6ofPkV;
    scanf ("%d", &eN6ofPkV);
    head = create (eN6ofPkV);
}

