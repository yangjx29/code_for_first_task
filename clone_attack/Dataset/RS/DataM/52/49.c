struct   Node;
typedef struct   Node *pNode;

struct   Node {
    int x;
    pNode piBFdwxQA;
};
pNode h3poBLKnky () {
    pNode PvU84ZgdhK;
    PvU84ZgdhK = (pNode) malloc (sizeof (struct   Node));
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
    PvU84ZgdhK->piBFdwxQA = NULL;
    return PvU84ZgdhK;
}

void  sort (pNode head, int rnPQwBG) {
    int i;
    pNode PvU84ZgdhK;
    pNode fnDsZh4I;
    pNode s;
    PvU84ZgdhK = NULL;
    fnDsZh4I = NULL;
    s = NULL;
    for (i = 1; i <= rnPQwBG; i++) {
        fnDsZh4I = head;
        PvU84ZgdhK = head->piBFdwxQA;
        s = (pNode) malloc (sizeof (struct   Node));
        scanf ("%d", &s->x);
        while (PvU84ZgdhK) {
            if (PvU84ZgdhK->x >= s->x)
                break;
            fnDsZh4I = PvU84ZgdhK;
            PvU84ZgdhK = PvU84ZgdhK->piBFdwxQA;
        }
        fnDsZh4I->piBFdwxQA = s;
        s->piBFdwxQA = PvU84ZgdhK;
    };
}

void  B3kIrgalh (pNode PvU84ZgdhK) {
    PvU84ZgdhK = PvU84ZgdhK->piBFdwxQA;
    for (; PvU84ZgdhK->piBFdwxQA;) {
        printf ("%d ", PvU84ZgdhK->x);
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
        PvU84ZgdhK = PvU84ZgdhK->piBFdwxQA;
    }
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    printf ("%d", PvU84ZgdhK->x);
}

pNode BsEN0fg9x (int rnPQwBG) {
    int i;
    pNode fnDsZh4I;
    pNode PvU84ZgdhK;
    pNode head;
    fnDsZh4I = NULL;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    PvU84ZgdhK = NULL;
    head = NULL;
    head = h3poBLKnky ();
    fnDsZh4I = head;
    for (i = 1; i <= rnPQwBG; i++) {
        PvU84ZgdhK = (pNode) malloc (sizeof (struct   Node));
        if (PvU84ZgdhK != NULL) {
            scanf ("%d", &PvU84ZgdhK->x);
            PvU84ZgdhK->piBFdwxQA = NULL;
            fnDsZh4I->piBFdwxQA = PvU84ZgdhK;
            fnDsZh4I = PvU84ZgdhK;
        };
    }
    return head;
}

void  del (pNode PvU84ZgdhK, int k) {
    pNode fnDsZh4I = NULL;
    fnDsZh4I = PvU84ZgdhK;
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
    PvU84ZgdhK = PvU84ZgdhK->piBFdwxQA;
    while (PvU84ZgdhK)
        if (PvU84ZgdhK->x == k) {
            free (PvU84ZgdhK);
            fnDsZh4I->piBFdwxQA = PvU84ZgdhK->piBFdwxQA;
            PvU84ZgdhK = fnDsZh4I->piBFdwxQA;
        }
        else {
            fnDsZh4I = PvU84ZgdhK;
            PvU84ZgdhK = PvU84ZgdhK->piBFdwxQA;
        };
}

pNode rinputdata (int rnPQwBG) {
    int i;
    pNode fnDsZh4I;
    pNode PvU84ZgdhK;
    pNode head;
    fnDsZh4I = NULL;
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
    PvU84ZgdhK = NULL;
    head = NULL;
    head = h3poBLKnky ();
    {
        i = 1;
        while (i <= rnPQwBG) {
            i++;
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
            PvU84ZgdhK = (pNode) malloc (sizeof (struct   Node));
            if (PvU84ZgdhK != NULL) {
                scanf ("%d", &PvU84ZgdhK->x);
                PvU84ZgdhK->piBFdwxQA = fnDsZh4I;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                fnDsZh4I = PvU84ZgdhK;
            };
        };
    }
    head->piBFdwxQA = fnDsZh4I;
    return head;
}

void  outputk (pNode PvU84ZgdhK, int k) {
    int i;
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
    i = 1;
    PvU84ZgdhK = PvU84ZgdhK->piBFdwxQA;
    for (; PvU84ZgdhK;) {
        if (i == k)
            printf ("%d", PvU84ZgdhK->x);
        i++;
        PvU84ZgdhK = PvU84ZgdhK->piBFdwxQA;
    };
}

void  F6JciKCo (pNode PvU84ZgdhK, int rnPQwBG, int HjcXnSDsp) {
    pNode fnDsZh4I;
    pNode s;
    pNode head;
    fnDsZh4I = NULL;
    s = NULL;
    head = NULL;
    int i;
    i = 1;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    fnDsZh4I = PvU84ZgdhK;
    head = PvU84ZgdhK;
    PvU84ZgdhK = PvU84ZgdhK->piBFdwxQA;
    for (; PvU84ZgdhK;) {
        if (i == rnPQwBG - HjcXnSDsp +1)
            break;
        fnDsZh4I = PvU84ZgdhK;
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
        PvU84ZgdhK = PvU84ZgdhK->piBFdwxQA;
        i++;
    }
    s = head;
    for (; s->piBFdwxQA;)
        s = s->piBFdwxQA;
    fnDsZh4I->piBFdwxQA = NULL;
    s->piBFdwxQA = head->piBFdwxQA;
    head->piBFdwxQA = PvU84ZgdhK;
}

void  mC7lwVP (pNode PvU84ZgdhK, int k) {
    int ok = 1;
    pNode head;
    head = PvU84ZgdhK;
    PvU84ZgdhK = head->piBFdwxQA;
    while (PvU84ZgdhK) {
        if (k == PvU84ZgdhK->x) {
            ok = 0;
            printf ("%d\n", PvU84ZgdhK->x);
        }
        PvU84ZgdhK = PvU84ZgdhK->piBFdwxQA;
    }
    if (ok)
        printf ("No Found!");
}

pNode arrange (pNode PvU84ZgdhK) {
    pNode fnDsZh4I = NULL, head = NULL, uqrklZ = NULL, headnew = NULL, ppre = NULL, gjSFl06Ww = NULL, s = NULL;
    head = PvU84ZgdhK;
    headnew = h3poBLKnky ();
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
    fnDsZh4I = headnew;
    for (; head->piBFdwxQA;) {
        free (uqrklZ);
        s = (pNode) malloc (sizeof (struct   Node));
        uqrklZ = PvU84ZgdhK = head->piBFdwxQA;
        ppre = gjSFl06Ww = head;
        while (PvU84ZgdhK) {
            if (uqrklZ->x > PvU84ZgdhK->x) {
                gjSFl06Ww = ppre;
                uqrklZ = PvU84ZgdhK;
            }
            ppre = PvU84ZgdhK;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            PvU84ZgdhK = PvU84ZgdhK->piBFdwxQA;
        }
        s->x = uqrklZ->x;
        fnDsZh4I->piBFdwxQA = s;
        s->piBFdwxQA = NULL;
        fnDsZh4I = s;
        gjSFl06Ww->piBFdwxQA = uqrklZ->piBFdwxQA;
    }
    return headnew;
}

int main () {
    pNode head = NULL;
    B3kIrgalh (head);
    int HjcXnSDsp, rnPQwBG;
    scanf ("%d %d", &rnPQwBG, &HjcXnSDsp);
    head = BsEN0fg9x (rnPQwBG);
    F6JciKCo (head, rnPQwBG, HjcXnSDsp);
    return 0;
}

