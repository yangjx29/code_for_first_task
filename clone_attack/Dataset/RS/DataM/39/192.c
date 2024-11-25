int N;

struct   student {
    char name [20];
    int FiOnLxTt1vmK;
    int DfIJglQsk87;
    char c1;
    char kgDbFn7hlXK;
    int paper;
    int STu6Ojbc;
    struct   student *next;
};
void  UTni1u5Nxw (struct   student *SS4Oix) {
    SS4Oix->STu6Ojbc = 0;
    if ((80 < SS4Oix->FiOnLxTt1vmK) && (1 <= SS4Oix->paper)) {
        SS4Oix->STu6Ojbc = SS4Oix->STu6Ojbc + 8000;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    if ((85 < SS4Oix->FiOnLxTt1vmK) && (80 < SS4Oix->DfIJglQsk87)) {
        SS4Oix->STu6Ojbc += 4000;
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
        };
    }
    if (90 < SS4Oix->FiOnLxTt1vmK) {
        SS4Oix->STu6Ojbc += (2514 - 514);
    }
    if ((SS4Oix->FiOnLxTt1vmK > 85) && (SS4Oix->kgDbFn7hlXK == 'Y')) {
        SS4Oix->STu6Ojbc = SS4Oix->STu6Ojbc + 1000;
    }
    if ((SS4Oix->DfIJglQsk87 > 80) && (SS4Oix->c1 == 'Y')) {
        SS4Oix->STu6Ojbc = SS4Oix->STu6Ojbc + 850;
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
    };
}

struct   student *creat () {
    struct   student *xikT8J;
    struct   student *zEAfkUDtuZMn;
    struct   student *vQs19f4KV;
    int i;
    UTni1u5Nxw (zEAfkUDtuZMn);
    zEAfkUDtuZMn = (struct   student *) malloc (LEN);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    scanf ("%s %d %d %c %c %d", zEAfkUDtuZMn->name, &zEAfkUDtuZMn->FiOnLxTt1vmK, &zEAfkUDtuZMn->DfIJglQsk87, &zEAfkUDtuZMn->c1, &zEAfkUDtuZMn->kgDbFn7hlXK, &zEAfkUDtuZMn->paper);
    zEAfkUDtuZMn->next = NULL;
    xikT8J = zEAfkUDtuZMn;
    vQs19f4KV = zEAfkUDtuZMn;
    {
        i = 1;
        while (i < N) {
            UTni1u5Nxw (zEAfkUDtuZMn);
            zEAfkUDtuZMn = (struct   student *) malloc (LEN);
            scanf ("%s %d %d %c %c %d", zEAfkUDtuZMn->name, &zEAfkUDtuZMn->FiOnLxTt1vmK, &zEAfkUDtuZMn->DfIJglQsk87, &zEAfkUDtuZMn->c1, &zEAfkUDtuZMn->kgDbFn7hlXK, &zEAfkUDtuZMn->paper);
            zEAfkUDtuZMn->next = NULL;
            vQs19f4KV->next = zEAfkUDtuZMn;
            vQs19f4KV = zEAfkUDtuZMn;
            i++;
        };
    }
    return (xikT8J);
}

void  VRispVLYT (struct   student *xikT8J) {
    struct   student *SS4Oix;
    int jLKQTq9YCa7;
    jLKQTq9YCa7 = 0;
    int En7c1QOs;
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
    char name [20];
    En7c1QOs = xikT8J->STu6Ojbc;
    strcpy (name, xikT8J->name);
    {
        SS4Oix = xikT8J;
        while (SS4Oix) {
            jLKQTq9YCa7 = jLKQTq9YCa7 + SS4Oix->STu6Ojbc;
            if (SS4Oix->STu6Ojbc > En7c1QOs) {
                En7c1QOs = SS4Oix->STu6Ojbc;
                strcpy (name, SS4Oix->name);
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            SS4Oix = SS4Oix->next;
        };
    }
    printf ("%s\n%d\n%d\n", name, En7c1QOs, jLKQTq9YCa7);
}

int main () {
    struct   student *xikT8J;
    VRispVLYT (xikT8J);
    xikT8J = creat ();
    scanf ("%d", &N);
}

