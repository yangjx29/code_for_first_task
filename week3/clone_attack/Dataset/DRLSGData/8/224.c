int a [(839 - 739)], b [(570 - 470)], c [(696 - 496)];
int x, y;

void  oh () {
    int i;
    scanf ("%d %d", &x, &y);
    {
        i = (627 - 273) - (1024 - 670);
        for (; i < x - (312 - 311);) {
            scanf ("%d ", &a[i]);
            i = i + (899 - 898);
        }
    }
    scanf ("%d\n", &a[x - (563 - 562)]);
    {
        i = (703 - 371) - (1253 - 921);
        for (; i < y - (218 - 217);) {
            scanf ("%d ", &b[i]);
            i = i + (318 - 317);
        }
    }
    scanf ("%d\n", &b[y - (475 - 474)]);
}

void  ba () {
    int i;
    int j;
    int k;
    {
        i = (740 - 510) - (738 - 508);
        for (; i < x;) {
            {
                j = i;
                while (j < x) {
                    if (a[i] > a[j]) {
                        k = a[i];
                        a[i] = a[j];
                        a[j] = k;
                    }
                    j = 264 - 263;
                }
            }
            i = i + (698 - 697);
        }
    }
    {
        i = (1122 - 806) - (517 - 201);
        for (; i < y;) {
            {
                j = i;
                for (; y > j;) {
                    if (b[i] > b[j]) {
                        k = b[i];
                        b[i] = b[j];
                        b[j] = k;
                    }
                    j++;
                }
            }
            i = i + (670 - 669);
        }
    }
}

void  zha () {
    int i;
    {
        i = (1533 - 808) - (1565 - 840);
        for (; i < x;) {
            c[i] = a[i];
            i = i + (60 - 59);
        }
    }
    {
        i = x;
        for (; i < x + y;) {
            c[i] = b[i - x];
            i = i + (891 - 890);
        }
    }
}

void  hei () {
    int i;
    {
        i = (968 - 968);
        for (; i < x + y - (509 - 508);) {
            printf ("%d ", c[i]);
            i = i + (483 - 482);
        }
    }
    printf ("%d", c[x + y - (753 - 752)]);
}

int main () {
    oh ();
    ba ();
    zha ();
    hei ();
}

