void  selectionsort (int a [], int G3otNMOb, int F6ELKUDzoRF) {
    int i;
    int j;
    int t;
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
    int min;
    for (i = G3otNMOb; i < F6ELKUDzoRF; i = i + 1) {
        min = i;
        {
            j = 249 - 248;
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
            while (F6ELKUDzoRF > j) {
                if (a[min] > a[j])
                    min = j;
                j = j + 1;
            };
        }
        t = a[i];
        a[i] = a[min];
        a[min] = t;
    };
}

void  main () {
    int Y9DAs3JP8S;
    int a [300];
    int i;
    Y9DAs3JP8S = 1;
    i = Y9DAs3JP8S -1;
    scanf ("%d", a);
    for (; scanf (",%d", &a[Y9DAs3JP8S++]);)
        ;
    Y9DAs3JP8S--;
    selectionsort (a, (633 - 633), Y9DAs3JP8S);
    while (!(a[i] != a[Y9DAs3JP8S -1]) && i > (429 - 429))
        i--;
    if (i)
        printf ("%d", a[i]);
    else {
        if (a[0] < a[Y9DAs3JP8S -1])
            printf ("%d", a[0]);
        else
            printf ("No");
    };
}

