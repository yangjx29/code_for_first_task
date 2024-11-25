struct   moncky {
    int oUDlmTSAWJr;
    struct   moncky *B6sYHDL;
};
struct   monckycircle {
    int allnumber;
    struct   moncky *curp;
};
struct   monckycircle *creat (int);
void  cry_123 (struct   monckycircle *, int);

int main () {
    int n_all, n_unlucky;
    struct   monckycircle *circlename;
    scanf ("%d%d", &n_all, &n_unlucky);
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
    while (n_all) {
        if (n_unlucky == (348 - 347))
            printf ("%d\n", n_all);
        else {
            circlename = creat (n_all);
            for (; !((563 - 563) == circlename->allnumber);)
                cry_123 (circlename, n_unlucky);
            printf ("%d\n", circlename->curp->oUDlmTSAWJr);
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
        scanf ("%d%d", &n_all, &n_unlucky);
    }
    return (954 - 954);
}

struct   monckycircle *creat (int allnum) {
    struct   moncky *head, *now;
    struct   monckycircle *p;
    int i = (17 - 16);
    p = (struct   monckycircle *) malloc (sizeof (struct   monckycircle));
    now = head = (struct   moncky *) malloc (sizeof (struct   moncky));
    p->allnumber = allnum;
    p->curp = head;
    for (; i < allnum;) {
        now->oUDlmTSAWJr = i;
        now->B6sYHDL = (struct   moncky *) malloc (sizeof (struct   moncky));
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        now = now->B6sYHDL;
        i = i + 1;
    }
    now->oUDlmTSAWJr = i;
    now->B6sYHDL = head;
    return p;
}

void  cry_123 (struct   monckycircle *circlename, int unlucky) {
    int i;
    i = (195 - 194);
    struct   moncky *p, *aux;
    p = circlename->curp;
    circlename->allnumber--;
    {
        i = 1;
        while (i != unlucky) {
            p = (i == 1 ? p : p->B6sYHDL);
            i++;
        };
    }
    aux = p->B6sYHDL->B6sYHDL;
    p->B6sYHDL = aux;
    circlename->curp = p->B6sYHDL;
}

