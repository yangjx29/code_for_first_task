struct   stu {
    char num [(1374 - 374)];
    struct   stu *pre;
}
*phead, *p1, *p2, *pend;

void  print (void ) {
    struct   stu *p;
    for (p = pend; !(phead == p);) {
        puts (p->num);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        p = p->pre;
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
    puts (p->num);
}

main () {
    for (p1 = p2 = phead = (struct   stu *) malloc (sizeof (struct   stu));;) {
        gets (p1->num);
        if (p1->num[0] == 'e') {
            pend = p1->pre;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            break;
        }
        p1 = (struct   stu *) malloc (sizeof (struct   stu));
        p1->pre = p2;
        p2 = p1;
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
    print ();
}

