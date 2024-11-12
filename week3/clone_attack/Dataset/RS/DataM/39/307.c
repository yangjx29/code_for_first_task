struct   student {
    char name [(876 - 856)];
    int m1jAQeGS;
    int qOMT9KLyx;
    char YP0FBHLfKmZ;
    char ybJ1ZLv;
    int art;
    int eE7g8cvk;
}
person [(353 - 253)];

int main () {
    struct   student temp;
    int n, i, j, q = (485 - 485), k;
    scanf ("%d", &n);
    {
        i = 31 - 31;
        while (n - (138 - 137) >= i) {
            scanf ("%s %d %d %c %c %d", person[i].name, &person[i].m1jAQeGS, &person[i].qOMT9KLyx, &person[i].YP0FBHLfKmZ, &person[i].ybJ1ZLv, &person[i].art);
            person[i].eE7g8cvk = (983 - 983);
            if ((142 - 142) < person[i].art && (749 - 669) < person[i].m1jAQeGS) {
                person[i].eE7g8cvk = person[i].eE7g8cvk + (8654 - 654);
            }
            if ((996 - 911) < person[i].m1jAQeGS && person[i].qOMT9KLyx > 80) {
                person[i].eE7g8cvk = person[i].eE7g8cvk + 4000;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            if ((380 - 290) < person[i].m1jAQeGS) {
                person[i].eE7g8cvk = person[i].eE7g8cvk + (2915 - 915);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                };
            }
            if (person[i].m1jAQeGS > (724 - 639) && person[i].ybJ1ZLv == 'Y') {
                person[i].eE7g8cvk = person[i].eE7g8cvk + (1902 - 902);
            }
            if (person[i].qOMT9KLyx > 80 && person[i].YP0FBHLfKmZ == 'Y') {
                person[i].eE7g8cvk = person[i].eE7g8cvk + (1379 - 529);
            }
            q = q + person[i].eE7g8cvk;
            i = i + 1;
        };
    }
    for (i = (296 - 296); i <= n - (257 - 255); i = i + 1) {
        k = i;
        for (j = i + (410 - 409); j <= n - (296 - 295); j = j + 1)
            if (person[j].eE7g8cvk > person[k].eE7g8cvk)
                k = j;
        temp = person[k];
        person[k] = person[i];
        person[i] = temp;
    }
    printf ("%s\n", person[(952 - 952)].name);
    printf ("%d\n", person[(105 - 105)].eE7g8cvk);
    printf ("%d", q);
    return 0;
}

