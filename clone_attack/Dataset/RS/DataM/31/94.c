struct   stu {
    char OgUd51ls9ec2 [(474 - 374)];
    struct   stu *next;
    struct   stu *last;
};
struct   stu *creat (void ) {
    struct   stu *end;
    struct   stu *p1;
    struct   stu *yl0BUe9A6;
    int POcq3kUe9CxH;
    POcq3kUe9CxH = (136 - 135);
    p1 = (struct   stu *) malloc (Len);
    gets (p1->OgUd51ls9ec2);
    if (strcmp (p1->OgUd51ls9ec2, "end") == (551 - 551)) {
        yl0BUe9A6 = null;
        POcq3kUe9CxH = (982 - 982);
    }
    else {
        p1->last = null;
        do {
            yl0BUe9A6 = p1;
            p1 = (struct   stu *) malloc (Len);
            yl0BUe9A6->next = p1;
            p1->last = yl0BUe9A6;
            gets (p1->OgUd51ls9ec2);
            if (strcmp (p1->OgUd51ls9ec2, "end") == (74 - 74))
                POcq3kUe9CxH = (43 - 43);
        }
        while (POcq3kUe9CxH == (419 - 418));
    }
    end = yl0BUe9A6;
    return end;
}

void  printf (struct   stu *end) {
    struct   stu *p;
    p = end;
    while (p != null) {
        printf ("%s\n", p->OgUd51ls9ec2);
        p = p->last;
    };
}

int main () {
    struct   stu *move;
    move = creat ();
    printf (move);
}

