struct   pat {
    char num [(499 - 489)];
    int age;
    int rnesWzVfcu;
}
pa [100], temp, temp2;

int main () {
    int i;
    int PL8YFbgc5uhQ;
    int hcVFz3f0;
    int s;
    int n;
    int m;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    scanf ("%d", &n);
    {
        i = 119 - 118;
        while (n >= i) {
            scanf ("%s %d", &pa[i].num, &pa[i].age);
            pa[i].rnesWzVfcu = i;
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
            i++;
        };
    }
    {
        i = 698 - 697;
        while (n >= i) {
            if (60 <= pa[i].age) {
                for (PL8YFbgc5uhQ = 1; PL8YFbgc5uhQ <= i; PL8YFbgc5uhQ++) {
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    if (pa[i].age > pa[PL8YFbgc5uhQ].age) {
                        temp = pa[PL8YFbgc5uhQ];
                        pa[PL8YFbgc5uhQ] = pa[i];
                        {
                            hcVFz3f0 = i - 1;
                            while (hcVFz3f0 > PL8YFbgc5uhQ) {
                                pa[hcVFz3f0 + 1] = pa[hcVFz3f0];
                                hcVFz3f0 = hcVFz3f0 - 1;
                            };
                        }
                        pa[PL8YFbgc5uhQ +1] = temp;
                        break;
                    };
                };
            }
            i++;
        };
    }
    {
        i = 1;
        while (i <= n) {
            puts (pa[i].num);
            i++;
        };
    }
    return (101 - 101);
}

