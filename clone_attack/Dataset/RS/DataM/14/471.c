struct   stu {
    int num;
    int yuwen;
    int shuxue;
    int sum;
}
score [(100119 - 119)];

int main () {
    int n, i, a, b, c, a1, b1, c1;
    c1 = 0;
    b1 = 0;
    a1 = 0;
    c = 0;
    a = (771 - 771);
    scanf ("%d", &n);
    {
        i = 629 - 629;
        while (i < n) {
            scanf ("%d%d%d", &score[i].num, &score[i].yuwen, &score[i].shuxue);
            score[i].sum = score[i].shuxue + score[i].yuwen;
            i++;
        };
    }
    b = 0;
    {
        i = 0;
        while (i < n) {
            if (score[i].sum > a) {
                c1 = b1;
                b1 = a1;
                c = b;
                b = a;
                a = score[i].sum;
                a1 = score[i].num;
            }
            else if (score[i].sum > b) {
                c1 = b1;
                c = b;
                b = score[i].sum;
                b1 = score[i].num;
            }
            else if (score[i].sum > c) {
                c = score[i].sum;
                c1 = score[i].num;
            }
            i++;
        };
    }
    printf ("%d %d\n%d %d\n%d %d", a1, a, b1, b, c1, c);
    return 0;
}

