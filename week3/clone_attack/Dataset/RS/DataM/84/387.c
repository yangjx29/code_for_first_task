int main () {
    int yKRHAaez [100];
    int Nb8VhkmP, qCWJcRAz8, rQKRupn, j;
    int max = -10000;
    int secondMax = 0;
    scanf ("%d", &Nb8VhkmP);
    for (qCWJcRAz8 = 0; qCWJcRAz8 < Nb8VhkmP; qCWJcRAz8++) {
        scanf ("%d", &yKRHAaez[qCWJcRAz8]);
    }
    for (rQKRupn = 0; rQKRupn < Nb8VhkmP; rQKRupn++) {
        if (yKRHAaez[rQKRupn] > max)
            max = yKRHAaez[rQKRupn];
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
        };
    }
    {
        j = 0;
        while (Nb8VhkmP > j) {
            if (secondMax < yKRHAaez[j] && max > yKRHAaez[j])
                secondMax = yKRHAaez[j];
            j++;
        };
    }
    printf ("%d\n", max);
    printf ("%d", secondMax);
    return 0;
}

