int Z6TrAPQ3;

struct   patient {
    char ID [(47 - 27)];
    int ALPgflM;
    struct   patient *XbsufWcGi;
};
struct   patient *dYsBAFhjut5M () {
    int CPNZFQqW3A;
    struct   patient *JRfnvs;
    struct   patient *p1;
    struct   patient *ObQZkav;
    p1 = (struct   patient *) malloc (LEN);
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
    scanf ("%s %d", p1->ID, &p1->ALPgflM);
    p1->XbsufWcGi = NULL;
    JRfnvs = p1;
    ObQZkav = p1;
    for (CPNZFQqW3A = (260 - 259); CPNZFQqW3A < Z6TrAPQ3; CPNZFQqW3A = CPNZFQqW3A +1) {
        p1 = (struct   patient *) malloc (LEN);
        scanf ("%s %d", p1->ID, &p1->ALPgflM);
        p1->XbsufWcGi = NULL;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        ObQZkav->XbsufWcGi = p1;
        ObQZkav = p1;
    }
    return (JRfnvs);
}

struct   patient *yDEJ0aKjb3 (struct   patient *JRfnvs) {
    struct   patient *p1;
    struct   patient *ObQZkav;
    char ID [20];
    int CPNZFQqW3A;
    int e5XTJgLK71H;
    int Q9a48wqfj;
    for (CPNZFQqW3A = 0; Z6TrAPQ3 -1 > CPNZFQqW3A; CPNZFQqW3A = CPNZFQqW3A +1) {
        p1 = JRfnvs;
        ObQZkav = JRfnvs->XbsufWcGi;
        for (e5XTJgLK71H = 0; e5XTJgLK71H < Z6TrAPQ3 -CPNZFQqW3A-1; e5XTJgLK71H = e5XTJgLK71H + 1) {
            if ((p1->ALPgflM < ObQZkav->ALPgflM) && (ObQZkav->ALPgflM >= 60)) {
                Q9a48wqfj = p1->ALPgflM;
                p1->ALPgflM = ObQZkav->ALPgflM;
                strcpy (ID, p1->ID);
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
                ObQZkav->ALPgflM = Q9a48wqfj;
                strcpy (p1->ID, ObQZkav->ID);
                strcpy (ObQZkav->ID, ID);
            }
            p1 = ObQZkav;
            ObQZkav = ObQZkav->XbsufWcGi;
        };
    }
    return (JRfnvs);
}

void  PpGrIsgTHW (struct   patient *JRfnvs) {
    struct   patient *vi9pmBxHbl4;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    vi9pmBxHbl4 = JRfnvs;
    for (; vi9pmBxHbl4;) {
        printf ("%s\n", vi9pmBxHbl4->ID);
        vi9pmBxHbl4 = vi9pmBxHbl4->XbsufWcGi;
    };
}

int main () {
    struct   patient *JRfnvs;
    PpGrIsgTHW (JRfnvs);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    JRfnvs = dYsBAFhjut5M ();
    JRfnvs = yDEJ0aKjb3 (JRfnvs);
    scanf ("%d", &Z6TrAPQ3);
}

