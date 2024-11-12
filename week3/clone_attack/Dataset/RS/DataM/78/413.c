struct   data;
typedef struct   data *pdata;

struct   data {
    int x;
    pdata zdgfM2;
};
pdata create () {
    pdata pdluXvtx;
    pdluXvtx = (pdata) malloc (sizeof (struct   data));
    pdluXvtx->zdgfM2 = NULL;
    return pdluXvtx;
}

void  EBifnDcIM29h (pdata head, int n) {
    int i;
    pdata pdluXvtx;
    pdata q;
    pdata s;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
    pdluXvtx = NULL;
    q = NULL;
    s = NULL;
    {
        i = 1;
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
        while (n >= i) {
            q = head;
            pdluXvtx = head->zdgfM2;
            s = (pdata) malloc (sizeof (struct   data));
            scanf ("%d", s->x);
            while (pdluXvtx) {
                if (pdluXvtx->x >= s->x)
                    break;
                q = pdluXvtx;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                pdluXvtx = pdluXvtx->zdgfM2;
            }
            i = i + 1;
            q->zdgfM2 = s;
            s->zdgfM2 = pdluXvtx;
        };
    };
}

void  outputdata (pdata pdluXvtx) {
    pdluXvtx = pdluXvtx->zdgfM2;
    for (; pdluXvtx->zdgfM2;) {
        printf ("%d ", pdluXvtx->x);
        pdluXvtx = pdluXvtx->zdgfM2;
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
    printf ("%d", pdluXvtx->x);
}

pdata inputdata (int n) {
    pdata q;
    pdata pdluXvtx;
    pdata head;
    q = NULL;
    pdluXvtx = NULL;
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
    head = NULL;
    int i;
    head = create ();
    q = head;
    for (i = 1; n >= i; i = i + 1) {
        pdluXvtx = (pdata) malloc (sizeof (struct   data));
        if (!(NULL == pdluXvtx)) {
            scanf ("%d", &pdluXvtx->x);
            pdluXvtx->zdgfM2 = NULL;
            q->zdgfM2 = pdluXvtx;
            q = pdluXvtx;
        };
    }
    return head;
}

void  del (pdata pdluXvtx, int k) {
    pdata q;
    q = NULL;
    q = pdluXvtx;
    pdluXvtx = pdluXvtx->zdgfM2;
    while (pdluXvtx)
        if (pdluXvtx->x == k) {
            free (pdluXvtx);
            q->zdgfM2 = pdluXvtx->zdgfM2;
            pdluXvtx = q->zdgfM2;
        }
        else {
            q = pdluXvtx;
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
            pdluXvtx = pdluXvtx->zdgfM2;
        };
}

pdata rinputdata (int n) {
    int i;
    pdata q;
    pdata pdluXvtx;
    pdata head;
    q = NULL;
    pdluXvtx = NULL;
    head = NULL;
    head = create ();
    for (i = 1; i <= n; i = i + 1) {
        pdluXvtx = (pdata) malloc (sizeof (struct   data));
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
        if (pdluXvtx != NULL) {
            scanf ("%d", &pdluXvtx->x);
            pdluXvtx->zdgfM2 = q;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            q = pdluXvtx;
        };
    }
    head->zdgfM2 = q;
    return head;
}

void  outputk (pdata pdluXvtx, int k) {
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
    pdluXvtx = pdluXvtx->zdgfM2;
    while (pdluXvtx) {
        if (i == k)
            printf ("%d", pdluXvtx->x);
        pdluXvtx = pdluXvtx->zdgfM2;
        i = i + 1;
    };
}

void  change (pdata pdluXvtx, int n, int m) {
    int i;
    i = 1;
    pdata q;
    pdata s;
    pdata head;
    q = NULL;
    s = NULL;
    head = NULL;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    q = pdluXvtx;
    head = pdluXvtx;
    pdluXvtx = pdluXvtx->zdgfM2;
    while (pdluXvtx) {
        if (i == n - m + 1)
            break;
        q = pdluXvtx;
        pdluXvtx = pdluXvtx->zdgfM2;
        i = i + 1;
    }
    s = head;
    while (s->zdgfM2)
        s = s->zdgfM2;
    q->zdgfM2 = NULL;
    s->zdgfM2 = head->zdgfM2;
    head->zdgfM2 = pdluXvtx;
}

int main () {
}

