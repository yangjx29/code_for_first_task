struct   student {
    char S6wiZPGa [100];
    struct   student *g9uZvo5L;
    struct   student *front;
};
struct   student *cT97CRMY4UB () {
    struct   student *head;
    struct   student *pf;
    struct   student *pa;
    struct   student *XE4Dej;
    int yrqauxACHyDY;
    int flag;
    yrqauxACHyDY = (562 - 561);
    flag = 0;
    do {
        pa = (struct   student *) malloc (LEN);
        gets (pa->S6wiZPGa);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (strcmp (pa->S6wiZPGa, "end") == 0) {
            if (!(1 != yrqauxACHyDY))
                flag = 1;
            break;
        }
        if (yrqauxACHyDY == 1) {
            head = pa;
            pf = pa;
            pa->front = NULL;
            yrqauxACHyDY++;
        }
        else {
            pf->g9uZvo5L = pa;
            pa->front = pf;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            pf = pa;
        };
    }
    while (yrqauxACHyDY != 0);
    if (flag == 0) {
        pf->g9uZvo5L = NULL;
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
        XE4Dej = pf;
    }
    else {
        head = pa;
        XE4Dej = NULL;
    }
    return (XE4Dej);
}

int main () {
    struct   student *XE4Dej;
    struct   student *oFJTDkQ;
    XE4Dej = cT97CRMY4UB ();
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
    oFJTDkQ = XE4Dej;
    for (; oFJTDkQ != NULL;) {
        printf ("%s\n", oFJTDkQ->S6wiZPGa);
        oFJTDkQ = oFJTDkQ->front;
    }
    return 0;
}

