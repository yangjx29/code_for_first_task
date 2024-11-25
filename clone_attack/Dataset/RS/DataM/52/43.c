struct   Node;
typedef struct   Node *p5gpr9BfPa8y;

struct   Node {
    int x;
    p5gpr9BfPa8y next;
};
p5gpr9BfPa8y JuliH8FxRY () {
    p5gpr9BfPa8y p;
    p = (p5gpr9BfPa8y) malloc (sizeof (struct   Node));
    p->next = NULL;
    return p;
}

void  sl5kPW (p5gpr9BfPa8y head, int n) {
    p5gpr9BfPa8y p = NULL, hPoKDTtaLqZ = NULL, s = NULL;
    int fruQsXfi;
    for (fruQsXfi = 1; n >= fruQsXfi; fruQsXfi = fruQsXfi + 1) {
        s = (p5gpr9BfPa8y) malloc (sizeof (struct   Node));
        scanf ("%d", s->x);
        hPoKDTtaLqZ = head;
        p = head->next;
        while (p) {
            if (p->x >= s->x)
                break;
            hPoKDTtaLqZ = p;
            p = p->next;
        }
        hPoKDTtaLqZ->next = s;
        s->next = p;
    };
}

void  outputdata (p5gpr9BfPa8y p) {
    p = p->next;
    while (p->next) {
        printf ("%d ", p->x);
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
    }
    printf ("%d", p->x);
}

p5gpr9BfPa8y zcWSr5Xv (int n) {
    p5gpr9BfPa8y hPoKDTtaLqZ;
    p5gpr9BfPa8y p;
    p5gpr9BfPa8y head;
    hPoKDTtaLqZ = NULL;
    p = NULL;
    head = NULL;
    int fruQsXfi;
    head = JuliH8FxRY ();
    hPoKDTtaLqZ = head;
    for (fruQsXfi = 1; fruQsXfi <= n; fruQsXfi = fruQsXfi + 1) {
        p = (p5gpr9BfPa8y) malloc (sizeof (struct   Node));
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
        if (p != NULL) {
            scanf ("%d", &p->x);
            p->next = NULL;
            hPoKDTtaLqZ->next = p;
            hPoKDTtaLqZ = p;
        };
    }
    return head;
}

void  nUrzwuW (p5gpr9BfPa8y p, int CQr75owfS6) {
    p5gpr9BfPa8y hPoKDTtaLqZ = NULL;
    hPoKDTtaLqZ = p;
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
    p = p->next;
    while (p)
        if (p->x == CQr75owfS6) {
            free (p);
            hPoKDTtaLqZ->next = p->next;
            p = hPoKDTtaLqZ->next;
        }
        else {
            hPoKDTtaLqZ = p;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            p = p->next;
        };
}

p5gpr9BfPa8y rinputdata (int n) {
    p5gpr9BfPa8y hPoKDTtaLqZ = NULL, p = NULL, head = NULL;
    int fruQsXfi;
    head = JuliH8FxRY ();
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
    {
        fruQsXfi = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (fruQsXfi <= n) {
            p = (p5gpr9BfPa8y) malloc (sizeof (struct   Node));
            if (p != NULL) {
                scanf ("%d", &p->x);
                p->next = hPoKDTtaLqZ;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                hPoKDTtaLqZ = p;
            }
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
            fruQsXfi = fruQsXfi + 1;
        };
    }
    head->next = hPoKDTtaLqZ;
    return head;
}

void  outputk (p5gpr9BfPa8y p, int CQr75owfS6) {
    int fruQsXfi;
    fruQsXfi = 1;
    p = p->next;
    while (p) {
        if (fruQsXfi == CQr75owfS6)
            printf ("%d", p->x);
        p = p->next;
        fruQsXfi = fruQsXfi + 1;
    };
}

void  hxsGYAOim1 (p5gpr9BfPa8y p, int n, int m) {
    p5gpr9BfPa8y hPoKDTtaLqZ = NULL, s = NULL, head = NULL;
    int fruQsXfi = 1;
    hPoKDTtaLqZ = p;
    head = p;
    p = p->next;
    while (p) {
        if (fruQsXfi == n - m + 1)
            break;
        fruQsXfi++;
        hPoKDTtaLqZ = p;
        p = p->next;
    }
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    s = head;
    while (s->next)
        s = s->next;
    hPoKDTtaLqZ->next = NULL;
    s->next = head->next;
    head->next = p;
}

int main () {
    int m;
    int n;
    p5gpr9BfPa8y head = NULL;
    outputdata (head);
    scanf ("%d %d", &n, &m);
    head = zcWSr5Xv (n);
    hxsGYAOim1 (head, n, m);
    return 0;
}

