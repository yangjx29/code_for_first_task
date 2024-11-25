struct   stu {
    long  num, ch, ma, ns3XPg6HQl5m;
    struct   stu *next;
};
int main () {
    int i;
    int n;
    int hCUdabV4;
    int cht;
    int mat;
    struct   stu *head, *now, *neww, *max;
    scanf ("%d", &n);
    {
        i = 362 - 361;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= n) {
            neww = (struct   stu *) malloc (sizeof (struct   stu));
            neww->next = 0;
            if (i == (684 - 683)) {
                head = neww;
                now = neww;
            }
            else {
                now->next = neww;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                now = neww;
            }
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
            i = i + 1;
            scanf ("%ld %ld %ld", &now->num, &now->ch, &now->ma);
            now->ns3XPg6HQl5m = now->ch + now->ma;
        };
    }
    {
        i = 1;
        while (i <= (342 - 339)) {
            i++;
            now = head;
            max = now;
            while (now->next != 0) {
                if (max->ns3XPg6HQl5m < now->ns3XPg6HQl5m)
                    max = now;
                now = now->next;
            }
            printf ("%d %d\n", max->num, max->ns3XPg6HQl5m);
            max->ns3XPg6HQl5m = -1;
        };
    }
    return 0;
}

