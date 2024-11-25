struct   node {
    int num;
    char name [26];
    struct   node *next;
};
int n = 1, m;
struct   zuozhe {
    char name;
    int books [300];
    int num;
}
zuozhe [26];

struct   node *getlinked () {
    struct   node *GuIU0vznkYPM, *newnode, *zIzayZ83i2v;
    do {
        newnode = (struct   node *) malloc (sizeof (struct   node));
        if (newnode == NULL) {
            exit (-1);
        }
        scanf ("%d%s", &newnode->num, &newnode->name);
        newnode->next = NULL;
        if (n == 1) {
            zIzayZ83i2v = newnode;
            GuIU0vznkYPM = newnode;
        }
        else {
            zIzayZ83i2v->next = newnode;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        if (n <= m) {
            zIzayZ83i2v = newnode;
            n++;
        };
    }
    while (n <= m);
    return GuIU0vznkYPM;
}

void  tongji (struct   node *tnkgdPAjuZ2q, int n) {
    int cjSGeOCnNsR;
    int j;
    {
        cjSGeOCnNsR = 1;
        while (cjSGeOCnNsR <= n) {
            {
                j = 0;
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
                while (j < strlen (tnkgdPAjuZ2q->name)) {
                    zuozhe[(tnkgdPAjuZ2q->name)[j] - 'A'].books[zuozhe[(tnkgdPAjuZ2q->name)[j] - 'A'].num] = tnkgdPAjuZ2q->num;
                    zuozhe[(tnkgdPAjuZ2q->name)[j] - 'A'].num++;
                    j++;
                };
            }
            tnkgdPAjuZ2q = tnkgdPAjuZ2q->next;
            cjSGeOCnNsR = cjSGeOCnNsR + 1;
        };
    };
}

void  bubble (struct   zuozhe array [], int n) {
    int cjSGeOCnNsR;
    int pass;
    cjSGeOCnNsR = 0;
    struct   zuozhe temp;
    {
        pass = 1;
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
        while (pass <= n) {
            for (cjSGeOCnNsR = 0; cjSGeOCnNsR < n - pass; cjSGeOCnNsR++) {
                if (array[cjSGeOCnNsR].num < array[cjSGeOCnNsR + 1].num) {
                    temp = array[cjSGeOCnNsR];
                    array[cjSGeOCnNsR] = array[cjSGeOCnNsR + 1];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    array[cjSGeOCnNsR + 1] = temp;
                };
            }
            pass = pass + 1;
        };
    }
    return;
}

void  main () {
    struct   node *tnkgdPAjuZ2q;
    int cjSGeOCnNsR;
    {
        cjSGeOCnNsR = 0;
        while (cjSGeOCnNsR < 26) {
            zuozhe[cjSGeOCnNsR].name = 'A' + cjSGeOCnNsR;
            zuozhe[cjSGeOCnNsR].num = 0;
            cjSGeOCnNsR = cjSGeOCnNsR + 1;
        };
    }
    scanf ("%d", &m);
    tnkgdPAjuZ2q = getlinked ();
    tongji (tnkgdPAjuZ2q, m);
    bubble (zuozhe, 26);
    printf ("%c\n%d\n", zuozhe[0].name, zuozhe[0].num);
    {
        cjSGeOCnNsR = 0;
        while (cjSGeOCnNsR < zuozhe[0].num) {
            printf ("%d\n", zuozhe[0].books[cjSGeOCnNsR]);
            cjSGeOCnNsR++;
        };
    };
}

