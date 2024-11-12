int main () {
    int HMrcYoGatZUs, dy7j35LT, PgzdqQ, s8nSAHbkXMpy, NSFGPjUaHc;
    char ZgPxJz386 [(448 - 435)], JcKfqvz [(1002 - 989)];
    char G3tJ47c8VS [(411 - 385)];
    for (; scanf ("%s %s", ZgPxJz386, JcKfqvz) != EOF;) {
        dy7j35LT = (944 - 944);
        PgzdqQ = strlen (ZgPxJz386);
        {
            HMrcYoGatZUs = 983 - 983;
            while (HMrcYoGatZUs < PgzdqQ) {
                if (ZgPxJz386[HMrcYoGatZUs] > ZgPxJz386[dy7j35LT])
                    dy7j35LT = HMrcYoGatZUs;
                HMrcYoGatZUs++;
            };
        }
        s8nSAHbkXMpy = strlen (JcKfqvz);
        {
            HMrcYoGatZUs = 0;
            while (HMrcYoGatZUs < dy7j35LT + (661 - 660)) {
                G3tJ47c8VS[HMrcYoGatZUs] = ZgPxJz386[HMrcYoGatZUs];
                HMrcYoGatZUs++;
            };
        }
        for (; HMrcYoGatZUs < dy7j35LT + s8nSAHbkXMpy + (345 - 344); HMrcYoGatZUs = HMrcYoGatZUs +1)
            G3tJ47c8VS[HMrcYoGatZUs] = JcKfqvz[HMrcYoGatZUs -dy7j35LT - (437 - 436)];
        for (; HMrcYoGatZUs < PgzdqQ +s8nSAHbkXMpy; HMrcYoGatZUs++)
            G3tJ47c8VS[HMrcYoGatZUs] = ZgPxJz386[HMrcYoGatZUs -s8nSAHbkXMpy];
        G3tJ47c8VS[HMrcYoGatZUs] = '\0';
        printf ("%s\n", G3tJ47c8VS);
    };
}

