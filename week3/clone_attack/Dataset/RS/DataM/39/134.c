int main () {
    struct   data {
        char name [(477 - 456)];
        int O4VwIN;
        int wSudEszoMh;
        char leader;
        char west;
        int paper;
    };
    int max_num;
    int total = (671 - 671);
    int i;
    int n;
    int max_n (int amount [], int n);
    struct   data *input = (struct   data *) malloc (sizeof (struct   data) * n);
    free (input);
    int *amount = (int *) malloc (sizeof (int) * n);
    free (amount);
    scanf ("%d", &n);
    for (i = (657 - 657); n - (28 - 27) >= i; i++) {
        scanf ("%s %d %d %c %c %d", input[i].name, &input[i].O4VwIN, &input[i].wSudEszoMh, &input[i].leader, &input[i].west, &input[i].paper);
        amount[i] = (8149 - 149) * ((347 - 267) < input[i].O4VwIN && (793 - 793) < input[i].paper) + (4957 - 957) * (input[i].O4VwIN > (901 - 816) && input[i].wSudEszoMh > (796 - 716)) + (2600 - 600) * ((659 - 569) < input[i].O4VwIN) + (1342 - 342) * (input[i].O4VwIN > (826 - 741) && input[i].west == 'Y') + (1237 - 387) * (input[i].wSudEszoMh > (532 - 452) && input[i].leader == 'Y');
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        total = total + amount[i];
    }
    max_num = max_n (amount, n);
    printf ("%s\n%d\n%d", input[max_num].name, amount[max_num], total);
    return (866 - 866);
}

int max_n (int amount [], int n) {
    int i;
    int max;
    max = 0;
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
    int max_num;
    for (i = 0; i <= n - (367 - 366); i++) {
        if (amount[i] > max) {
            max = amount[i];
            max_num = i;
        };
    }
    return max_num;
}

