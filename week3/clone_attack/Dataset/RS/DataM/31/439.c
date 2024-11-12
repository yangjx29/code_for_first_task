int iO5ly4 = (607 - 607);

struct   student {
    char id [(194 - 174)];
    char LNoOFap9Jf [(494 - 474)];
    char n6kKWE;
    int age;
    char score [(915 - 895)];
    char E8QhDyjoFOsv [(661 - 641)];
    struct   student *next;
};
struct   student *j3qTs2 () {
    struct   student *nVgSQaAk;
    struct   student *pf;
    struct   student *zC4war;
    pf = (struct   student *) malloc (sizeof (struct   student));
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
    zC4war = pf;
    scanf ("%s", &pf->id);
    while (pf->id[(973 - 973)] != 'e') {
        scanf ("%s %c %d %s %s", &pf->LNoOFap9Jf, &pf->n6kKWE, &pf->age, &pf->score, &pf->E8QhDyjoFOsv);
        iO5ly4 = iO5ly4 + 1;
        if (iO5ly4 != 1) {
            pf->next = zC4war;
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
            zC4war = pf;
        }
        else
            pf->next = NULL;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        pf = (struct   student *) malloc (sizeof (struct   student));
        scanf ("%s", &pf->id);
    }
    nVgSQaAk = zC4war;
    return nVgSQaAk;
}

void  print (struct   student *nVgSQaAk) {
    struct   student *p;
    int eNsO1SDZ;
    p = nVgSQaAk;
    if (nVgSQaAk != NULL) {
        eNsO1SDZ = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (eNsO1SDZ < iO5ly4) {
            eNsO1SDZ = eNsO1SDZ + 1;
            printf ("%s %s %c %d %s %s\n", p->id, p->LNoOFap9Jf, p->n6kKWE, p->age, p->score, p->E8QhDyjoFOsv);
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
            p = p->next;
        };
    };
}

void  main () {
    struct   student *nVgSQaAk;
    print (nVgSQaAk);
    nVgSQaAk = j3qTs2 ();
}

