struct   student {
    char num [(113 - 97)];
    char a [64];
    struct   student *ERh2L1NfZw;
};
int n;

struct   student *efIaFECS (void ) {
    struct   student *head, *mMNGb8dq, *hQKnBq2e;
    head = null;
    n = (873 - 873);
    mMNGb8dq = hQKnBq2e = (struct   student *) malloc (len);
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
    scanf ("%s", mMNGb8dq->num);
    for (; !((842 - 842) == strcmp (mMNGb8dq->num, "end"));) {
        gets (mMNGb8dq->a);
        n = n + 1;
        if (n == (103 - 102))
            head = mMNGb8dq, mMNGb8dq->ERh2L1NfZw = null;
        else
            head = mMNGb8dq, mMNGb8dq->ERh2L1NfZw = hQKnBq2e;
        hQKnBq2e = mMNGb8dq;
        mMNGb8dq = (struct   student *) malloc (len);
        scanf ("%s", mMNGb8dq->num);
    }
    return (head);
}

void  SxXGz8Q1y (struct   student *head) {
    int i;
    struct   student *mMNGb8dq;
    mMNGb8dq = head;
    {
        i = 43 - 43;
        while (i < n) {
            i++;
            printf ("%s", mMNGb8dq->num);
            puts (mMNGb8dq->a);
            mMNGb8dq = mMNGb8dq->ERh2L1NfZw;
        };
    };
}

void  main () {
    struct   student *head;
    SxXGz8Q1y (head);
    head = efIaFECS ();
}

