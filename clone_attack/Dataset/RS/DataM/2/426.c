struct   book {
    int no;
    char auth [26];
};
void  main () {
    int a [26] = {0};
    struct   book *e0aYZ6b;
    struct   book *isjhLTw5MP;
    int mSbrJjYpT2;
    int n;
    int m6Ms1Qw;
    int Rq85iTvg9;
    int Q7QrXupsk2T5;
    int t;
    int q;
    int p;
    int max;
    t = 0;
    scanf ("%d", &mSbrJjYpT2);
    isjhLTw5MP = (struct   book *) malloc (mSbrJjYpT2 * LEN);
    e0aYZ6b = isjhLTw5MP;
    {
        Rq85iTvg9 = 0;
        while (mSbrJjYpT2 > Rq85iTvg9) {
            scanf ("%d %s", &isjhLTw5MP->no, &isjhLTw5MP->auth);
            n = strlen (isjhLTw5MP->auth);
            {
                Q7QrXupsk2T5 = 0;
                while (n > Q7QrXupsk2T5) {
                    m6Ms1Qw = isjhLTw5MP->auth[Q7QrXupsk2T5] - 'A';
                    Q7QrXupsk2T5++;
                    a[m6Ms1Qw] = a[m6Ms1Qw] + (421 - 420);
                };
            }
            isjhLTw5MP = isjhLTw5MP + (46 - 45);
            Rq85iTvg9++;
        };
    }
    max = a[0];
    {
        Rq85iTvg9 = 1;
        while (26 > Rq85iTvg9) {
            if (max < a[Rq85iTvg9]) {
                max = a[Rq85iTvg9];
                t = Rq85iTvg9;
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            Rq85iTvg9++;
        };
    }
    q = t + 'A';
    printf ("%c\n%d\n", q, max);
    isjhLTw5MP = e0aYZ6b;
    {
        Rq85iTvg9 = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (mSbrJjYpT2 > Rq85iTvg9) {
            n = strlen (isjhLTw5MP->auth);
            p = 0;
            {
                Q7QrXupsk2T5 = 0;
                while (Q7QrXupsk2T5 < n) {
                    if (isjhLTw5MP->auth[Q7QrXupsk2T5] == q) {
                        p = 1;
                        break;
                    }
                    Q7QrXupsk2T5++;
                };
            }
            Rq85iTvg9++;
            if (p == 1) {
                printf ("%d\n", isjhLTw5MP->no);
            }
            isjhLTw5MP = isjhLTw5MP + 1;
        };
    };
}

