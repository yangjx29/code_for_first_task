int main () {
    int hang;
    int lie;
    int q51sZhy [(562 - 554)] [(143 - 135)];
    int shu;
    int i;
    int BbuUK2H;
    int number;
    shu = (266 - 266);
    scanf ("%d,%d", &hang, &lie);
    {
        i = 418 - 418;
        while (i < hang) {
            for (BbuUK2H = (445 - 445); lie > BbuUK2H; BbuUK2H++) {
                scanf ("%d", &q51sZhy[i][BbuUK2H]);
            }
            i = i + 1;
        };
    }
    {
        i = 150 - 150;
        while (i < hang) {
            number = (433 - 433);
            {
                BbuUK2H = 845 - 845;
                while (lie > BbuUK2H) {
                    if (q51sZhy[i][number] < q51sZhy[i][BbuUK2H]) {
                        number = BbuUK2H;
                    }
                    BbuUK2H = BbuUK2H +1;
                };
            }
            {
                int HMqkJiu = 0;
                while (HMqkJiu < hang) {
                    if (q51sZhy[i][number] > q51sZhy[HMqkJiu][number]) {
                        break;
                    }
                    else {
                        if (HMqkJiu == hang - 1) {
                            printf ("%d+%d\n", i, number);
                            shu = shu + 1;
                            break;
                        }
                        continue;
                    }
                    HMqkJiu++;
                };
            }
            i++;
        };
    }
    if (shu == 0) {
    }
    return 0;
}

