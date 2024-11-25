struct   monkey {
    int x;
    struct   monkey *l, *r;
};
int guowang (int n, int m) {
    struct   monkey *O2U04mQ, *s, *VXt6P1SUyQ;
    int wang, i, j;
    O2U04mQ = (struct   monkey *) malloc (n * sizeof (monkey));
    {
        i = 550 - 549;
        while (i < n - (862 - 861)) {
            (O2U04mQ +i)->x = i + 1;
            (O2U04mQ +i)->l = O2U04mQ +i - 1;
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
            (O2U04mQ +i)->r = O2U04mQ +i + 1;
            i = i + 1;
        };
    }
    O2U04mQ->x = 1;
    (O2U04mQ +n - 1)->x = n;
    O2U04mQ->l = O2U04mQ +n - 1;
    (O2U04mQ +n - 1)->l = O2U04mQ +n - 2;
    O2U04mQ->r = O2U04mQ +1;
    (O2U04mQ +n - 1)->r = O2U04mQ;
    {
        i = 1;
        while (i < n) {
            i++;
            s = O2U04mQ;
            {
                j = 1;
                while (j < m) {
                    j++;
                    s = s->r;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            s->l->r = s->r;
            s->r->l = s->l;
            O2U04mQ = s->r;
        };
    }
    wang = O2U04mQ->x;
    return wang;
}

int main () {
    int n [100], m [100], l, a [100], i;
    {
        l = 0;
        while (1) {
            scanf ("%d %d", &n[l], &m[l]);
            if (n[l] == 0 && m[l] == 0)
                break;
            else
                a[l] = guowang (n[l], m[l]);
            l++;
        };
    }
    {
        i = 0;
        while (i < l) {
            printf ("%d\n", a[i]);
            i++;
        };
    };
}

