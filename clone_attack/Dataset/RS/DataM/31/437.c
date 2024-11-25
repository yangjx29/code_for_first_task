struct   student {
    char iK21Z5sV [20];
    char name [20];
    char ilTCtOy;
    int age;
    char mark [20];
    char add [20];
    struct   student *next;
};
void  main () {
    struct   student *creat (void );
    struct   student *vRpK3stV1;
    int ppSRVUg = 0;
    vRpK3stV1 = creat ();
    while (!(NULL == vRpK3stV1)) {
        printf ("%s %s %c %d %s %s\n", (*vRpK3stV1).iK21Z5sV, (*vRpK3stV1).name, (*vRpK3stV1).ilTCtOy, (*vRpK3stV1).age, (*vRpK3stV1).mark, (*vRpK3stV1).add);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        vRpK3stV1 = (*vRpK3stV1).next;
    };
}

int n;

struct   student *creat (void ) {
    int cEnmWP7HtcAD;
    struct   student *head, *Y8YHrK, *IaXGtK8uIxMk;
    n = 0;
    IaXGtK8uIxMk = Y8YHrK = (struct   student *) malloc (sizeof (struct   student));
    scanf ("%s%s %c%d%s%s", (*Y8YHrK).iK21Z5sV, (*Y8YHrK).name, &(*Y8YHrK).ilTCtOy, &(*Y8YHrK).age, (*Y8YHrK).mark, (*Y8YHrK).add);
    while (!(NULL == IaXGtK8uIxMk)) {
        n = n + 1;
        if (n == 1) {
            (*IaXGtK8uIxMk).next = NULL;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        else {
            (*Y8YHrK).next = IaXGtK8uIxMk;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            };
        }
        IaXGtK8uIxMk = Y8YHrK;
        Y8YHrK = (struct   student *) malloc (sizeof (struct   student));
        scanf ("%s", (*Y8YHrK).iK21Z5sV);
        cEnmWP7HtcAD = strcmp ((*Y8YHrK).iK21Z5sV, "end");
        if (cEnmWP7HtcAD == 0) {
            break;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        }
        else {
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
            if (cEnmWP7HtcAD != 0) {
                scanf ("%s %c%d%s%s", (*Y8YHrK).name, &(*Y8YHrK).ilTCtOy, &(*Y8YHrK).age, (*Y8YHrK).mark, (*Y8YHrK).add);
            };
        };
    }
    return (IaXGtK8uIxMk);
}

