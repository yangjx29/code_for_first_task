struct   stu {
    char id [(709 - 699)];
    char name [20];
    char sex;
    int age;
    char score [10];
    char addr [20];
    struct   stu *next;
};
int main () {
    struct   stu *creat (void );
    void  output (struct   stu *head);
    struct   stu *head;
    struct   stu *p;
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
    output (head);
    head = NULL;
    head = creat ();
    p = head;
}

struct   stu *creat (void ) {
    int i;
    struct   stu *p1, *p2, *p3, *head;
    p1 = (struct   stu *) malloc (LEN);
    head = NULL;
    if (head == NULL)
        head = p2 = p3 = p1;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    p1->next = NULL;
    scanf ("%s", p1->id);
    while (p1->id[0] != 'e') {
        scanf (" %s %c %d %s %s", p1->name, &p1->sex, &p1->age, p1->score, p1->addr);
        p3 = p2;
        p1 = (struct   stu *) malloc (LEN);
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
        p1->next = p2;
        p2 = p1;
        scanf ("%s", p1->id);
    }
    head = p3;
    return head;
}

void  output (struct   stu *head) {
    struct   stu *p1, *p2;
    p1 = head;
    while (p1 != NULL) {
        printf ("%s %s %c %d %s %s\n", p1->id, p1->name, p1->sex, p1->age, p1->score, p1->addr);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        p1 = p1->next;
    };
}

