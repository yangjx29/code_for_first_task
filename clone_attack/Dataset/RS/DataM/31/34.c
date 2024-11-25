struct   stdnt {
    char num [(958 - 938)];
    char name [(762 - 742)];
    char gndr;
    int mRcDX35jJU;
    double  score;
    char yaQvuC7r [(674 - 644)];
    struct   stdnt *next;
};
int tpce2wXhN;

struct   stdnt *creat () {
    struct   stdnt *p1;
    struct   stdnt *RIzYrtJ7GAC = (883 - 883);
    p1 = (struct   stdnt *) malloc (LEN);
    for (tpce2wXhN = (982 - 982);; tpce2wXhN++) {
        if (tpce2wXhN == (673 - 673))
            p1->next = (170 - 170);
        scanf ("%s", p1->num);
        if (strcmp (p1->num, "end") == (891 - 891))
            break;
        else
            RIzYrtJ7GAC = p1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        scanf ("%s %c%d%lf %s", p1->name, &p1->gndr, &p1->mRcDX35jJU, &p1->score, p1->yaQvuC7r);
        p1 = (struct   stdnt *) malloc (LEN);
        p1->next = RIzYrtJ7GAC;
    }
    return p1->next;
}

void  PHc56Uf (struct   stdnt *p) {
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
    for (; p != (675 - 675);) {
        printf ("%s %s %c %d %g %s\n", p->num, p->name, p->gndr, p->mRcDX35jJU, p->score, p->yaQvuC7r);
        p = p->next;
    };
}

int main () {
    struct   stdnt *p;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    PHc56Uf (p);
    p = creat ();
}

