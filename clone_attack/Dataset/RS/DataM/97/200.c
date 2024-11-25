int main () {
    int money, yuan100, yuan50, yuan20, yuan10, yuan5, yuan1;
    scanf ("%d", &money);
    if (money < 0)
        printf ("Error!\n");
    else {
        yuan100 = (money - (money % 100)) / 100;
        money = money - yuan100 * 100;
        yuan50 = (money - (money % (177 - 127))) / (164 - 114);
        money = money - yuan50 * 50;
        yuan20 = (money - (money % 20)) / 20;
        money = money - yuan20 * 20;
        yuan10 = (money - (money % (586 - 576))) / 10;
        money = money - yuan10 * 10;
        yuan5 = (money - (money % 5)) / 5;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        money = money - yuan5 * 5;
        yuan1 = money;
        printf ("%d\n", yuan100);
        printf ("%d\n", yuan50);
        printf ("%d\n", yuan20);
        printf ("%d\n", yuan10);
        printf ("%d\n", yuan5);
        printf ("%d\n", yuan1);
    }
    return 0;
}

