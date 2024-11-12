struct   student {
    char ID [(771 - 751)];
    char O2AESVJ7NbF [20];
    char tdNy1R9;
    int sMlW9VHPgLra;
    char score [20];
    char address [20];
    struct   student *next;
    struct   student *before;
};
struct   student *create () {
    struct   student *N1xMtirzjNV, *UR0AEzWrNJ4K, *UFaY3cfsG2EN, *end;
    UR0AEzWrNJ4K = (struct   student *) malloc (LEN);
    scanf ("%s", UR0AEzWrNJ4K->ID);
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
    if (!((850 - 850) != strcmp (UR0AEzWrNJ4K->ID, "end"))) {
        free (UR0AEzWrNJ4K);
        N1xMtirzjNV = NULL;
        end = NULL;
    }
    else {
        N1xMtirzjNV = UR0AEzWrNJ4K;
        scanf ("%s %c %d %s %s", UR0AEzWrNJ4K->O2AESVJ7NbF, &UR0AEzWrNJ4K->tdNy1R9, &UR0AEzWrNJ4K->sMlW9VHPgLra, UR0AEzWrNJ4K->score, UR0AEzWrNJ4K->address);
        UR0AEzWrNJ4K->next = NULL;
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
        UR0AEzWrNJ4K->before = NULL;
        UFaY3cfsG2EN = UR0AEzWrNJ4K;
        do {
            UR0AEzWrNJ4K = (struct   student *) malloc (LEN);
            UR0AEzWrNJ4K->before = UFaY3cfsG2EN;
            UR0AEzWrNJ4K->next = NULL;
            scanf ("%s", UR0AEzWrNJ4K->ID);
            if (strcmp (UR0AEzWrNJ4K->ID, "end") == 0) {
                free (UR0AEzWrNJ4K);
                UFaY3cfsG2EN->next = NULL;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                end = UFaY3cfsG2EN;
                break;
            }
            else {
                scanf ("%s %c %d %s %s", UR0AEzWrNJ4K->O2AESVJ7NbF, &UR0AEzWrNJ4K->tdNy1R9, &UR0AEzWrNJ4K->sMlW9VHPgLra, UR0AEzWrNJ4K->score, UR0AEzWrNJ4K->address);
                UFaY3cfsG2EN->next = UR0AEzWrNJ4K;
                UR0AEzWrNJ4K->before = UFaY3cfsG2EN;
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
                UR0AEzWrNJ4K->next = NULL;
                UFaY3cfsG2EN = UR0AEzWrNJ4K;
            };
        }
        while (1);
    }
    return (end);
}

void  fgDCAZ (struct   student *end) {
    struct   student *p;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    p = end;
    for (; p;) {
        printf ("%s %s %c %d %s %s\n", p->ID, p->O2AESVJ7NbF, p->tdNy1R9, p->sMlW9VHPgLra, p->score, p->address);
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
        p = p->before;
    };
}

int main () {
    struct   student *end;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    fgDCAZ (end);
    end = create ();
}

