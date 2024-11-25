int Z2074wEbJ, m;
int a [1000], b [1000], c [2000];

void  read () {
    int l17r9S4AdP;
    scanf ("%d%d", &Z2074wEbJ, &m);
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
    for (l17r9S4AdP = 0; Z2074wEbJ > l17r9S4AdP; l17r9S4AdP = l17r9S4AdP + 1)
        scanf ("%d", a + l17r9S4AdP);
    for (l17r9S4AdP = 0; m > l17r9S4AdP; ++l17r9S4AdP)
        scanf ("%d", b + l17r9S4AdP);
}

int YVrbqliW (const  void  *a, const  void  *b) {
    return *((int *) a) - *((int *) b);
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

void  sort () {
    qsort (a, Z2074wEbJ, sizeof (int), YVrbqliW);
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
    qsort (b, m, sizeof (int), YVrbqliW);
}

void  Sx8twIe () {
    int l17r9S4AdP;
    for (l17r9S4AdP = 0; Z2074wEbJ > l17r9S4AdP; ++l17r9S4AdP)
        c[l17r9S4AdP] = a[l17r9S4AdP];
    for (l17r9S4AdP = 0; l17r9S4AdP < m; ++l17r9S4AdP)
        c[Z2074wEbJ +l17r9S4AdP] = b[l17r9S4AdP];
}

void  output () {
    int l17r9S4AdP;
    printf ("%d", c[0]);
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    for (l17r9S4AdP = 1; Z2074wEbJ +m > l17r9S4AdP; ++l17r9S4AdP)
        printf (" %d", c[l17r9S4AdP]);
}

int main () {
    read ();
    sort ();
    Sx8twIe ();
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
    output ();
    return 0;
}

