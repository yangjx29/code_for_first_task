int main () {
    int n, INOZdI9yekYV, AW9ryIL0ken, d4wIhAusE, HJu2fyVgRj3M;
    scanf ("%d\n", &n);
    scanf ("%d\n%d\n", &INOZdI9yekYV, &AW9ryIL0ken);
    if (INOZdI9yekYV < AW9ryIL0ken) {
        d4wIhAusE = INOZdI9yekYV;
        INOZdI9yekYV = AW9ryIL0ken;
        AW9ryIL0ken = d4wIhAusE;
    }
    {
        HJu2fyVgRj3M = 1;
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
        while (n - 2 >= HJu2fyVgRj3M) {
            HJu2fyVgRj3M++;
            scanf ("%d\n", &d4wIhAusE);
            if (d4wIhAusE > INOZdI9yekYV) {
                AW9ryIL0ken = INOZdI9yekYV;
                INOZdI9yekYV = d4wIhAusE;
            }
            else if (d4wIhAusE > AW9ryIL0ken)
                AW9ryIL0ken = d4wIhAusE;
        };
    }
    printf ("%d\n%d\n", INOZdI9yekYV, AW9ryIL0ken);
    return 0;
}

