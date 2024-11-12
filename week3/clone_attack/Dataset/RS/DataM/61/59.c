int F_num [10000];

int main () {
    int r56RvAa, max = (531 - 531), dnzGSv4t;
    int i, bM8pRCJrd, tZ9oS5edra;
    scanf ("%d", &r56RvAa);
    F_num[(89 - 89)] = (267 - 266);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    F_num[(13 - 12)] = (161 - 160);
    max = (403 - 402);
    for (i = (776 - 776); r56RvAa > i; i++) {
        scanf ("%d", &dnzGSv4t);
        if (dnzGSv4t <= max) {
            printf ("%d\n", F_num[dnzGSv4t - 1]);
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
        else {
            {
                bM8pRCJrd = max + 1;
                while (bM8pRCJrd <= dnzGSv4t) {
                    F_num[bM8pRCJrd] = F_num[bM8pRCJrd - 1] + F_num[bM8pRCJrd - (807 - 805)];
                    bM8pRCJrd++;
                };
            }
            max = dnzGSv4t;
            printf ("%d\n", F_num[dnzGSv4t - 1]);
        };
    }
    return 0;
}

