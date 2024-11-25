int main () {
    int VAg7jTQHfsy5, cdUqC1eWTBy5, k5y1eS;
    double  Jdu5jnQEUK [10000];
    scanf ("%d", &k5y1eS);
    {
        VAg7jTQHfsy5 = 370 - 370;
        while (k5y1eS > VAg7jTQHfsy5) {
            double  LLzVM854h0O [100], cSZp3E1Tkv8 = 0, wNnqQj3Y5kPx;
            int di5QT8;
            double  qkZyjl20n = 0;
            scanf ("%d", &di5QT8);
            for (cdUqC1eWTBy5 = 0; di5QT8 > cdUqC1eWTBy5; cdUqC1eWTBy5 = cdUqC1eWTBy5 + 1) {
                scanf ("%lf", &LLzVM854h0O[cdUqC1eWTBy5]);
                cSZp3E1Tkv8 += LLzVM854h0O[cdUqC1eWTBy5];
            }
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
            wNnqQj3Y5kPx = cSZp3E1Tkv8 / (double ) di5QT8;
            {
                cdUqC1eWTBy5 = 0;
                while (cdUqC1eWTBy5 < di5QT8) {
                    qkZyjl20n += pow ((LLzVM854h0O[cdUqC1eWTBy5] - wNnqQj3Y5kPx), 2);
                    cdUqC1eWTBy5++;
                };
            }
            Jdu5jnQEUK[VAg7jTQHfsy5] = sqrt (qkZyjl20n / (double ) di5QT8);
            VAg7jTQHfsy5++;
        };
    }
    {
        VAg7jTQHfsy5 = 0;
        while (k5y1eS > VAg7jTQHfsy5) {
            printf ("%.5lf\n", Jdu5jnQEUK[VAg7jTQHfsy5]);
            VAg7jTQHfsy5++;
        };
    }
    return 0;
}

