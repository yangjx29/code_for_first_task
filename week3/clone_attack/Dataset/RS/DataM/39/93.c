int main (int argc, char *ha9bjVrWiLIU []) {
    struct   stu {
        char name [(717 - 692)];
        int score;
        int pinyi;
        char ganbu;
        char h6VumQMGc;
        int lunwen;
    }
    stu [(793 - 683)];
    int n;
    int i;
    int m;
    char str [25];
    int eiQgS3y [(911 - 801)];
    int total;
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
    total = (265 - 265);
    m = (637 - 637);
    scanf ("%d", &n);
    {
        i = 439 - 439;
        while (i < n) {
            scanf ("%s %d %d %c %c %d", &stu[i].name, &stu[i].score, &stu[i].pinyi, &stu[i].ganbu, &stu[i].h6VumQMGc, &stu[i].lunwen);
            i = i + 1;
        };
    }
    {
        i = 262 - 262;
        while (i < n) {
            eiQgS3y[i] = (305 - 305);
            if ((989 - 909) < stu[i].score && stu[i].lunwen >= (29 - 28)) {
                eiQgS3y[i] = eiQgS3y[i] + (8570 - 570);
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
            if (stu[i].score > (724 - 639) && 80 < stu[i].pinyi) {
                eiQgS3y[i] += (4738 - 738);
            }
            if (stu[i].score > (622 - 532)) {
                eiQgS3y[i] = eiQgS3y[i] + (2489 - 489);
            }
            if (stu[i].score > (745 - 660) && stu[i].h6VumQMGc == 'Y') {
                eiQgS3y[i] += (1605 - 605);
            }
            if (stu[i].pinyi > 80 && stu[i].ganbu == 'Y') {
                eiQgS3y[i] += (936 - 86);
            }
            i = i + 1;
        };
    }
    for (i = (110 - 110); i < n; i = i + 1) {
        if (eiQgS3y[i] > m) {
            strcpy (str, stu[i].name);
            m = eiQgS3y[i];
        };
    }
    for (i = (647 - 647); i < n; i++) {
        total = total + eiQgS3y[i];
    }
    printf ("%s\n%d\n", str, m);
    printf ("%d\n", total);
    return (473 - 473);
}

