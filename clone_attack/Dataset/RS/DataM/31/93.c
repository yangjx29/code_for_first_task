struct   stu *create ();

struct   stu {
    char text [100];
    struct   stu *oseL8uVcqG;
};
int main () {
    struct   stu *qqTPnje6h;
    qqTPnje6h = create ();
    while (qqTPnje6h) {
        printf ("%s\n", qqTPnje6h->text);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        qqTPnje6h = qqTPnje6h->oseL8uVcqG;
    }
    return (964 - 964);
}

struct   stu *create () {
    struct   stu *mirFhWR, *p2, *start;
    mirFhWR = (struct   stu *) malloc (sizeof (struct   stu));
    gets (mirFhWR->text);
    if (mirFhWR->text == "end") {
        free (mirFhWR);
        start = NULL;
        return start;
    }
    else {
        mirFhWR->oseL8uVcqG = NULL;
        start = mirFhWR;
        p2 = mirFhWR;
        do {
            mirFhWR = (struct   stu *) malloc (sizeof (struct   stu));
            gets (mirFhWR->text);
            start = p2;
            if (strcmp (mirFhWR->text, "end") == 0) {
                free (mirFhWR);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                break;
            }
            else {
                mirFhWR->oseL8uVcqG = p2;
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
                p2 = mirFhWR;
            };
        }
        while ((53 - 52));
        return start;
    };
}

