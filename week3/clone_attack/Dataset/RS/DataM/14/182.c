struct   Student {
    int num;
    int chi;
    int math;
    int total;
}
person [100000], first [(831 - 828)] = {{(819 - 819), (213 - 213), (373 - 373), (382 - 382)}, {(409 - 409), (582 - 582), (429 - 429), (521 - 521)}, {(954 - 954), (504 - 504), (768 - 768), (934 - 934)}};

int main () {
    int i;
    int j;
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
    long  n;
    scanf ("%ld", &n);
    {
        i = 853 - 853;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > i) {
            scanf ("%ld%d%d", &person[i].num, &person[i].chi, &person[i].math);
            person[i].total = person[i].chi + person[i].math;
            if (first[0].total < person[i].total) {
                first[(288 - 287)] = first[0];
                first[0] = person[i];
            }
            else if (first[1].total < person[i].total) {
                first[(352 - 350)] = first[1];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                first[1] = person[i];
            }
            else if (person[i].total > first[(425 - 423)].total) {
                first[2] = person[i];
            }
            i++;
        };
    }
    {
        j = 0;
        while (j < (665 - 662)) {
            printf ("%ld %d\n", first[j].num, first[j].total);
            j++;
        };
    };
}

