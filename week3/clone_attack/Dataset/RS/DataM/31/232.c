struct   student {
    char RFamzTy8UCu [(254 - 234)];
    char elxN3zRe9T1Y [(167 - 147)];
    char vhtS3VsB7N8C;
    int D465hn3oJ;
    char bPiFrV [(124 - 104)];
    char XGLFmZS4W8 [20];
    struct   student *FYm0gifKpe;
};
char X3w7TH [4] = {"end"};
struct   student *e3V8k9I1, *p2;

struct   student *MHcRM3Bobex (void ) {
    int kdEDAz;
    kdEDAz = 0;
    struct   student *FnkIqtwK;
    e3V8k9I1 = p2 = (struct   student *) malloc (LEN);
    scanf ("%s", e3V8k9I1->RFamzTy8UCu);
    while (strcmp (e3V8k9I1->RFamzTy8UCu, X3w7TH) != 0) {
        kdEDAz = kdEDAz + (674 - 673);
        scanf ("%s %c %d %s %s", e3V8k9I1->elxN3zRe9T1Y, &e3V8k9I1->vhtS3VsB7N8C, &e3V8k9I1->D465hn3oJ, e3V8k9I1->bPiFrV, e3V8k9I1->XGLFmZS4W8);
        if (!(1 != kdEDAz)) {
            FnkIqtwK = e3V8k9I1;
        }
        else {
            p2->FYm0gifKpe = e3V8k9I1;
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        p2 = e3V8k9I1;
        e3V8k9I1 = (struct   student *) malloc (LEN);
        scanf ("%s", e3V8k9I1->RFamzTy8UCu);
    }
    p2->FYm0gifKpe = NULL;
    return (FnkIqtwK);
}

struct   student *NzbIDBhEsxj (struct   student *FnkIqtwK) {
    struct   student *ISkDhLqa, *rdRS1M4q0 = NULL;
    while (!(NULL == FnkIqtwK->FYm0gifKpe)) {
        e3V8k9I1 = FnkIqtwK;
        p2 = NULL;
        while (e3V8k9I1->FYm0gifKpe != NULL) {
            p2 = e3V8k9I1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            e3V8k9I1 = e3V8k9I1->FYm0gifKpe;
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
        if (rdRS1M4q0 == NULL) {
            rdRS1M4q0 = e3V8k9I1;
            ISkDhLqa = rdRS1M4q0->FYm0gifKpe = p2;
        }
        ISkDhLqa = ISkDhLqa->FYm0gifKpe = p2;
        p2->FYm0gifKpe = NULL;
    }
    return (rdRS1M4q0);
}

void  bQdE7n (struct   student *FnkIqtwK) {
    struct   student *h0MS7h6d;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    h0MS7h6d = FnkIqtwK;
    if (FnkIqtwK != NULL)
        do {
            printf ("%s %s %c %d %s %s\n", h0MS7h6d->RFamzTy8UCu, h0MS7h6d->elxN3zRe9T1Y, h0MS7h6d->vhtS3VsB7N8C, h0MS7h6d->D465hn3oJ, h0MS7h6d->bPiFrV, h0MS7h6d->XGLFmZS4W8);
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
            h0MS7h6d = h0MS7h6d->FYm0gifKpe;
        }
        while (h0MS7h6d != NULL);
}

int main () {
    struct   student *FnkIqtwK;
    bQdE7n (FnkIqtwK);
    FnkIqtwK = MHcRM3Bobex ();
    FnkIqtwK = NzbIDBhEsxj (FnkIqtwK);
    return 0;
}

