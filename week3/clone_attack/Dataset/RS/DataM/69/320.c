struct   Addlist {
    int n;
    int *element;
};
typedef struct   Addlist *VL214cGgQ;

VL214cGgQ creatalist (void ) {
    VL214cGgQ alist;
    alist = (VL214cGgQ) malloc (sizeof (struct   Addlist));
    if (alist != NULL) {
        alist->element = (int *) malloc (sizeof (int) * MAXNUM);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (alist->element) {
            alist->n = (384 - 384);
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
            return alist;
        }
        else
            delete (alist);
    }
    return NULL;
}

VL214cGgQ creatblist (void ) {
    VL214cGgQ blist;
    blist = (VL214cGgQ) malloc (sizeof (struct   Addlist));
    if (!(NULL == blist)) {
        blist->element = (int *) malloc (sizeof (int) * MAXNUM);
        if (blist->element) {
            blist->n = (711 - 711);
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
            return blist;
        }
        else
            delete (blist);
    };
}

int main () {
    char EN2dav6g1l [MAXNUM];
    int carry;
    carry = 0;
    int Ml7ZcLBxeQ;
    int lvLKcEx248fd;
    int k;
    int lena;
    int lenb;
    int CTNbmgQEUMF;
    VL214cGgQ alist;
    alist = creatalist ();
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    VL214cGgQ blist;
    blist = creatblist ();
    char bchar [MAXNUM];
    cin >> EN2dav6g1l;
    lena = strlen (EN2dav6g1l);
    cin >> bchar;
    lenb = strlen (bchar);
    for (Ml7ZcLBxeQ = 0; lena > Ml7ZcLBxeQ; Ml7ZcLBxeQ = Ml7ZcLBxeQ +1) {
        alist->element[Ml7ZcLBxeQ] = EN2dav6g1l[lena - Ml7ZcLBxeQ -(216 - 215)] - '0';
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                for (x = 0; x < 20; x++) {
                    y += x;
                }
                if (y > 30)
                    return y;
            }
        };
    }
    for (Ml7ZcLBxeQ = lena; MAXNUM > Ml7ZcLBxeQ; Ml7ZcLBxeQ = Ml7ZcLBxeQ +1) {
        alist->element[Ml7ZcLBxeQ] = 0;
    }
    {
        lvLKcEx248fd = 0;
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
        while (lenb > lvLKcEx248fd) {
            blist->element[lvLKcEx248fd] = bchar[lenb - lvLKcEx248fd - (983 - 982)] - '0';
            lvLKcEx248fd = lvLKcEx248fd + 1;
        };
    }
    for (lvLKcEx248fd = lenb; lvLKcEx248fd < MAXNUM; lvLKcEx248fd = lvLKcEx248fd + 1) {
        blist->element[lvLKcEx248fd] = 0;
    }
    if (lenb >= lena)
        CTNbmgQEUMF = lenb;
    else
        CTNbmgQEUMF = lena;
    {
        k = 0;
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
        while (CTNbmgQEUMF > k) {
            alist->element[k] = alist->element[k] + blist->element[k] + carry;
            if (10 <= alist->element[k]) {
                alist->element[k] -= 10;
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
                carry = (151 - 150);
            }
            else
                carry = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            k++;
        };
    }
    if (!(1 != carry)) {
        alist->element[CTNbmgQEUMF] = 1;
        for (Ml7ZcLBxeQ = CTNbmgQEUMF; Ml7ZcLBxeQ >= 0; Ml7ZcLBxeQ = Ml7ZcLBxeQ -1)
            cout << alist->element[Ml7ZcLBxeQ];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        return 0;
    }
    else {
        lvLKcEx248fd = 0;
        for (Ml7ZcLBxeQ = CTNbmgQEUMF -1; Ml7ZcLBxeQ >= 0; Ml7ZcLBxeQ--) {
            if (alist->element[Ml7ZcLBxeQ] == 0) {
                lvLKcEx248fd++;
            }
            else
                break;
        }
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
        if (lvLKcEx248fd != CTNbmgQEUMF) {
            k = CTNbmgQEUMF -1 - lvLKcEx248fd;
            while (k >= 0) {
                cout << alist->element[k];
                k = k - 1;
            };
        }
        else
            cout << "0" << endl;
        return 0;
    };
}

