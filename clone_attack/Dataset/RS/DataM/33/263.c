int main () {
    int ERyJepBFj6oT, HSq8Yt, UHb94jvaxmd, A1sjuPxB4Q;
    char glfkU65h [256], *pc;
    scanf ("%d", &UHb94jvaxmd);
    for (ERyJepBFj6oT = 1; ERyJepBFj6oT <= UHb94jvaxmd; ERyJepBFj6oT = ERyJepBFj6oT +1) {
        puts (glfkU65h);
        scanf ("%s", glfkU65h);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        A1sjuPxB4Q = strlen (glfkU65h);
        pc = glfkU65h;
        {
            HSq8Yt = 0;
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
            while (HSq8Yt <= A1sjuPxB4Q -1) {
                switch (*(pc + HSq8Yt)) {
                case 'A' :
                    *(pc + HSq8Yt) = 'T';
                    break;
                case 'T' :
                    *(pc + HSq8Yt) = 'A';
                    break;
                case 'C' :
                    *(pc + HSq8Yt) = 'G';
                    break;
                case 'G' :
                    *(pc + HSq8Yt) = 'C';
                    break;
                }
                HSq8Yt = HSq8Yt +1;
            };
        };
    }
    return 0;
}

