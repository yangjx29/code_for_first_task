struct   stu {
    char RiMjfDkme3a [20];
    char UmxkW5Bq0N [20];
    char QtmFJqD9;
    int lpCjnrkq;
    char score [10];
    char oO6KCxnvm [20];
    struct   stu *next;
};
int main () {
    int n;
    n = (947 - 947);
    int Tk0uzGim;
    struct   stu *O4Rcgvr8KysX;
    struct   stu *hRc21fs, *BF6aeQBCi8b, *iKVrMUYJ1nD0, *FeWAdzyScY1;
    hRc21fs = BF6aeQBCi8b = (struct   stu *) malloc (len);
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
    scanf ("%s %s %c %d %s %s", hRc21fs->RiMjfDkme3a, hRc21fs->UmxkW5Bq0N, &hRc21fs->QtmFJqD9, &hRc21fs->lpCjnrkq, hRc21fs->score, hRc21fs->oO6KCxnvm);
    O4Rcgvr8KysX = null;
    for (Tk0uzGim = 0;; Tk0uzGim = Tk0uzGim +1) {
        n = n + 1;
        if (!(1 != n))
            O4Rcgvr8KysX = hRc21fs;
        else
            BF6aeQBCi8b->next = hRc21fs;
        BF6aeQBCi8b = hRc21fs;
        hRc21fs = (struct   stu *) malloc (len);
        scanf ("%s", hRc21fs->RiMjfDkme3a);
        if (strcmp (hRc21fs->RiMjfDkme3a, "end") == 0) {
            break;
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
        scanf ("%s %c %d %s %s", hRc21fs->UmxkW5Bq0N, &hRc21fs->QtmFJqD9, &hRc21fs->lpCjnrkq, hRc21fs->score, hRc21fs->oO6KCxnvm);
    }
    BF6aeQBCi8b->next = null;
    for (Tk0uzGim = 0; n > Tk0uzGim; Tk0uzGim = Tk0uzGim +1) {
        BF6aeQBCi8b = hRc21fs = O4Rcgvr8KysX;
        while (hRc21fs->next != null) {
            BF6aeQBCi8b = hRc21fs;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            hRc21fs = hRc21fs->next;
        }
        if (Tk0uzGim == 0)
            iKVrMUYJ1nD0 = FeWAdzyScY1 = hRc21fs;
        else
            iKVrMUYJ1nD0 = iKVrMUYJ1nD0->next = hRc21fs;
        BF6aeQBCi8b->next = null;
    }
    hRc21fs = FeWAdzyScY1;
    while (hRc21fs != null) {
        printf ("%s %s %c %d %s %s\n", hRc21fs->RiMjfDkme3a, hRc21fs->UmxkW5Bq0N, hRc21fs->QtmFJqD9, hRc21fs->lpCjnrkq, hRc21fs->score, hRc21fs->oO6KCxnvm);
        hRc21fs = hRc21fs->next;
    }
    return 0;
}

