int A6qDIjbHoheS [(443 - 343)];

int main (void ) {
    int m = 0;
    int eoh2D4AB;
    int UtLqhvEnGSB, ivE4eiQCI, k;
    int *Q4SDjzQU6kIJ;
    scanf ("%d", &k);
    Q4SDjzQU6kIJ = (int *) malloc ((k + (702 - 701)) * sizeof (int));
    for (UtLqhvEnGSB = (720 - 719); UtLqhvEnGSB <= k; UtLqhvEnGSB = UtLqhvEnGSB +1) {
        scanf ("%d", &Q4SDjzQU6kIJ[UtLqhvEnGSB]);
    }
    A6qDIjbHoheS[k] = (653 - 653);
    for (UtLqhvEnGSB = k - (932 - 931); UtLqhvEnGSB >= (968 - 968); UtLqhvEnGSB = UtLqhvEnGSB -1) {
        eoh2D4AB = 0;
        {
            ivE4eiQCI = UtLqhvEnGSB +1;
            while (ivE4eiQCI <= k) {
                if (Q4SDjzQU6kIJ[UtLqhvEnGSB] >= Q4SDjzQU6kIJ[ivE4eiQCI]) {
                    if (A6qDIjbHoheS[ivE4eiQCI] + 1 > eoh2D4AB)
                        eoh2D4AB = A6qDIjbHoheS[ivE4eiQCI] + 1;
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
                }
                ivE4eiQCI = ivE4eiQCI + 1;
            };
        }
        A6qDIjbHoheS[UtLqhvEnGSB] = eoh2D4AB;
    }
    {
        UtLqhvEnGSB = 0;
        while (UtLqhvEnGSB <= k) {
            if (A6qDIjbHoheS[UtLqhvEnGSB] > m)
                m = A6qDIjbHoheS[UtLqhvEnGSB];
            UtLqhvEnGSB = UtLqhvEnGSB +1;
        };
    }
    printf ("%d", m + 1);
    return 0;
}

