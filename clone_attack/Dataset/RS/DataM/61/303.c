int f (int qqGp0rF6Y) {
    int Jd2FwEmK;
    if (qqGp0rF6Y == 1 || qqGp0rF6Y == 2)
        Jd2FwEmK = 1;
    else
        Jd2FwEmK = f (qqGp0rF6Y - 1) + f (qqGp0rF6Y - 2);
    return Jd2FwEmK;
}

main () {
    int Jd2FwEmK;
    int qqGp0rF6Y;
    int i;
    int ikKXZGI;
    scanf ("%d", &Jd2FwEmK);
    for (i = 0; i < Jd2FwEmK; i++) {
        scanf ("%d", &qqGp0rF6Y);
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
        printf ("%d\n", f (qqGp0rF6Y));
    };
}

