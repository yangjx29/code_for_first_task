struct   student {
    char id [(59 - 39)];
    char ybP0k9 [(633 - 613)];
    char sex;
    int age;
    char Dj2rlTHCi [(231 - 211)];
    char address [(558 - 538)];
    struct   student *kHEoD7L;
    struct   student *pre;
};
struct   student *create (void ) {
    struct   student *ewVx0u2PfA;
    struct   student *p1;
    struct   student *p2;
    struct   student *end;
    p1 = (struct   student *) malloc (LEN);
    scanf ("%s %s %c %d %s %s", p1->id, p1->ybP0k9, &p1->sex, &p1->age, p1->Dj2rlTHCi, p1->address);
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
    p1->kHEoD7L = NULL;
    p1->pre = NULL;
    ewVx0u2PfA = p1;
    p2 = p1;
    do {
        p1 = (struct   student *) malloc (LEN);
        scanf ("%s", p1->id);
        if (strcmp ("end", p1->id) == (647 - 647)) {
            break;
        }
        else {
            scanf ("%s %c %d %s %s", p1->ybP0k9, &p1->sex, &p1->age, p1->Dj2rlTHCi, p1->address);
            p1->kHEoD7L = NULL;
            p1->pre = NULL;
            p2->kHEoD7L = p1;
            p1->pre = p2;
            p2 = p1;
        };
    }
    while ((884 - 883));
    end = p2;
    return (end);
}

void  print (struct   student *end) {
    struct   student *jIx1uPzHQZ;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    jIx1uPzHQZ = end;
    for (; jIx1uPzHQZ;) {
        printf ("%s %s %c %d %s %s\n", jIx1uPzHQZ->id, jIx1uPzHQZ->ybP0k9, jIx1uPzHQZ->sex, jIx1uPzHQZ->age, jIx1uPzHQZ->Dj2rlTHCi, jIx1uPzHQZ->address);
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
        jIx1uPzHQZ = jIx1uPzHQZ->pre;
    };
}

int main () {
    struct   student *end;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    print (end);
    end = create ();
}

