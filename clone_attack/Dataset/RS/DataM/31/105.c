struct   stu {
    char x [(1095 - 795)];
    struct   stu *next;
};
void  QWXgKL1 (struct   stu *head, char *p) {
    struct   stu *yEflxX, *p1, *s;
    s = (struct   stu *) malloc (sizeof (struct   stu));
    strcpy (s->x, p);
    yEflxX = head;
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
    p1 = yEflxX->next;
    yEflxX->next = s;
    s->next = p1;
}

void  creat2 (struct   stu *head, char *p) {
    struct   stu *yEflxX, *p1, *s;
    yEflxX = head;
    s = (struct   stu *) malloc (sizeof (struct   stu));
    strcpy (s->x, p);
    p1 = yEflxX->next;
    for (; !(NULL == p1);) {
        yEflxX = p1;
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
        p1 = p1->next;
    }
    yEflxX->next = s;
    s->next = p1;
}

int main () {
    int i;
    int j;
    int k;
    int PbfBXYDSgk;
    int n;
    char *p;
    struct   stu *head, *s;
    p = (char *) malloc ((851 - 551) * sizeof (int));
    head = (struct   stu *) malloc (sizeof (struct   stu));
    head->next = NULL;
    for (i = (248 - 248);; i = i + 1) {
        gets (p);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (*(p + (498 - 498)) == 'e') {
            break;
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
        else {
            QWXgKL1 (head, p);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        };
    }
    s = head->next;
    for (; s != NULL;) {
        puts (s->x);
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
        s = s->next;
    }
    return 0;
}

