int main () {
    int i, a = (749 - 749), b = (752 - 752), c = (225 - 225), numa = (973 - 973), numb = (197 - 197), numc = (286 - 286);
    int n;
    struct   student {
        int num;
        int chi;
        int math;
        int sum;
    };
    struct   student *fig;
    scanf ("%d", &n);
    fig = (struct   student *) malloc (sizeof (student) * n);
    for (i = 0; n > i; i = i + 1) {
        scanf ("%d%d%d", &(fig + i)->num, &(fig + i)->chi, &(fig + i)->math);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        (fig + i)->sum = (fig + i)->chi + (fig + i)->math;
        if (a < (fig + i)->sum) {
            c = b;
            numc = numb;
            numb = numa;
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
            b = a;
            a = (fig + i)->sum;
            numa = (fig + i)->num;
        }
        else if ((fig + i)->sum > b) {
            numc = numb;
            c = b;
            b = (fig + i)->sum;
            numb = (fig + i)->num;
        }
        else if ((fig + i)->sum > c) {
            c = (fig + i)->sum;
            numc = (fig + i)->num;
        };
    }
    printf ("%d %d\n%d %d\n%d %d\n", numa, a, numb, b, numc, c);
    return 0;
}

