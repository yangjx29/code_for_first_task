int main () {
    int EOY4D2Hn;
    int *KIxnmKArNGY;
    int sum;
    int C4qXlIDLwuMi;
    int A7TYo89M5l;
    int sZY3tpHLXoe2;
    int Pkf3iLmRIJj;
    EOY4D2Hn = 0;
    scanf ("%d", &A7TYo89M5l);
    {
        C4qXlIDLwuMi = 203 - 202;
        while (A7TYo89M5l >= C4qXlIDLwuMi) {
            free (KIxnmKArNGY);
            C4qXlIDLwuMi++;
            scanf ("%d%d", &Pkf3iLmRIJj, &sZY3tpHLXoe2);
            KIxnmKArNGY = (int *) malloc (sizeof (int) * (sZY3tpHLXoe2 * Pkf3iLmRIJj));
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
            sum = 0;
            {
                EOY4D2Hn = 0;
                while (sZY3tpHLXoe2 * Pkf3iLmRIJj > EOY4D2Hn) {
                    scanf ("%d", KIxnmKArNGY +EOY4D2Hn);
                    if ((EOY4D2Hn +1 <= sZY3tpHLXoe2) || (EOY4D2Hn > (sZY3tpHLXoe2 * Pkf3iLmRIJj -sZY3tpHLXoe2 - 1)) || ((EOY4D2Hn +1) % sZY3tpHLXoe2 == 1) || ((EOY4D2Hn +1) % sZY3tpHLXoe2 == 0))
                        sum = sum + *(KIxnmKArNGY +EOY4D2Hn);
                    EOY4D2Hn++;
                };
            }
            printf ("%d\n", sum);
        };
    };
}

