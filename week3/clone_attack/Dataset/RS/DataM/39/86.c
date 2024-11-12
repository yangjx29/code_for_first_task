struct   stu {
    char name [20];
    int final;
    int rate;
    char leader;
    char west;
    int DKS1RyN;
    int xUmjax;
    struct   stu *AbHypRBQ5zgf;
};
struct   stu *max;
struct   stu *n8R2SwWa, *p2, *Pwib7WcDIEr;

int eMA0Rac9PlJ (struct   stu *p) {
    p->xUmjax = (792 - 792);
    if (80 < p->final && 0 < p->DKS1RyN)
        p->xUmjax = p->xUmjax + 8000;
    if ((389 - 304) < p->final && 80 < p->rate)
        p->xUmjax = p->xUmjax + (4079 - 79);
    if (90 < p->final)
        p->xUmjax = p->xUmjax + 2000;
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
    if (85 < p->final && p->west == 'Y')
        p->xUmjax = p->xUmjax + 1000;
    if (p->rate > 80 && p->leader == 'Y')
        p->xUmjax += 850;
    return (p->xUmjax);
}

struct   stu *create (int n) {
    int vo7cUD;
    vo7cUD = 0;
    Pwib7WcDIEr = 0;
    n8R2SwWa = p2 = (struct   stu *) malloc (sizeof (struct   stu));
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    max = p2;
    while (vo7cUD < n) {
        if (vo7cUD == 0)
            Pwib7WcDIEr = n8R2SwWa;
        else
            p2->AbHypRBQ5zgf = n8R2SwWa;
        vo7cUD++;
        p2 = n8R2SwWa;
        scanf ("%s %d %d %c %c %d", p2->name, &p2->final, &p2->rate, &p2->leader, &p2->west, &p2->DKS1RyN);
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
        p2->xUmjax = eMA0Rac9PlJ (p2);
        n8R2SwWa = (struct   stu *) malloc (sizeof (struct   stu));
        if (p2->xUmjax > max->xUmjax)
            max = p2;
    }
    p2->AbHypRBQ5zgf = 0;
    return (Pwib7WcDIEr);
}

int sum (struct   stu *Pwib7WcDIEr) {
    int sum;
    struct   stu *p;
    p = Pwib7WcDIEr;
    sum = p->xUmjax;
    for (; p->AbHypRBQ5zgf != 0;) {
        p = p->AbHypRBQ5zgf;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        sum = sum + p->xUmjax;
    }
    return (sum);
}

void  main () {
    int n;
    printf ("%s\n%d\n", max->name, max->xUmjax);
    scanf ("%d", &n);
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
    n8R2SwWa = create (n);
    printf ("%d", sum (n8R2SwWa));
}

