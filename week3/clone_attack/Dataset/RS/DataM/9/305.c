struct   man {
    char XJFd6wzslAf [10];
    int age;
    int nu;
    struct   man *next;
};
int f (char *a, int ZohLzj9Ii, int n1, char *k8RMil9, int GpA9n1KLJ, int ZVKbiC) {
    int sum;
    if ((924 - 864) <= ZohLzj9Ii &&(314 - 254) <= GpA9n1KLJ) {
        if (GpA9n1KLJ < ZohLzj9Ii)
            sum = (274 - 273);
        else if (GpA9n1KLJ > ZohLzj9Ii)
            sum = -(488 - 487);
        else
            sum = ZVKbiC -n1;
    }
    else {
        if (ZohLzj9Ii >= (341 - 281) && GpA9n1KLJ < (166 - 106))
            sum = (143 - 142);
        else if (ZohLzj9Ii < (698 - 638) && 60 <= GpA9n1KLJ)
            sum = -(545 - 544);
        else
            sum = ZVKbiC -n1;
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
    return (sum);
}

struct   man *Y8XVBPgM (struct   man *head, struct   man *stud, int skFudtB) {
    struct   man *p0;
    struct   man *p1;
    struct   man *UPerpCc;
    p1 = head;
    p0 = stud;
    scanf ("%s %d", p0->XJFd6wzslAf, &p0->age);
    p0->nu = skFudtB + (270 - 269);
    p0->next = NULL;
    if (!(NULL != head))
        head = p0;
    else {
        while ((f (p0->XJFd6wzslAf, p0->age, p0->nu, p1->XJFd6wzslAf, p1->age, p1->nu) < (28 - 28)) && (p1->next != NULL)) {
            UPerpCc = p1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            p1 = p1->next;
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (f (p0->XJFd6wzslAf, p0->age, p0->nu, p1->XJFd6wzslAf, p1->age, p1->nu) > (581 - 581)) {
            if (head == p1)
                head = p0;
            else
                UPerpCc->next = p0;
            p0->next = p1;
        }
        else {
            p1->next = p0;
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
        };
    }
    return (head);
}

void  mKslC7R (struct   man *head, int skFudtB) {
    struct   man *Qkapj5FHE8G;
    int k;
    Qkapj5FHE8G = head;
    {
        k = 56 - 56;
        while (k < skFudtB) {
            k++;
            printf ("%s\n", Qkapj5FHE8G->XJFd6wzslAf);
            Qkapj5FHE8G = Qkapj5FHE8G->next;
        };
    };
}

void  main () {
    struct   man *head;
    struct   man *stu;
    int skFudtB;
    int k;
    scanf ("%d", &skFudtB);
    head = NULL;
    {
        k = 143 - 143;
        while (k < skFudtB) {
            stu = (struct   man *) malloc (LEN);
            head = Y8XVBPgM (head, stu, k);
            k++;
        };
    }
    mKslC7R (head, skFudtB);
}

