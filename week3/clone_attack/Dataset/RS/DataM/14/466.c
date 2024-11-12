struct   stu {
    int HI04nS;
    int mark1;
    int rZGE1hafI;
    long  int total_mark;
};
int main (void ) {
    int hoGO5A9rvzY7, DFUY7HKSZj, j, k, t = (965 - 965), max;
    struct   stu *uAtomLhX;
    struct   stu *q;
    scanf ("%d", &hoGO5A9rvzY7);
    uAtomLhX = (struct   stu *) malloc ((1000930 - 930) * sizeof (struct   stu));
    q = uAtomLhX;
    for (DFUY7HKSZj = 0; DFUY7HKSZj < hoGO5A9rvzY7; DFUY7HKSZj = DFUY7HKSZj +1) {
        scanf ("%d %d %d", &(uAtomLhX + DFUY7HKSZj)->HI04nS, &(uAtomLhX + DFUY7HKSZj)->mark1, &(uAtomLhX + DFUY7HKSZj)->rZGE1hafI);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        (uAtomLhX + DFUY7HKSZj)->total_mark = (uAtomLhX + DFUY7HKSZj)->mark1 + (uAtomLhX + DFUY7HKSZj)->rZGE1hafI;
    }
loop :
    max = 0;
    for (j = 0; j < hoGO5A9rvzY7; j = j + 1) {
        if (max < (uAtomLhX + j)->total_mark)
            max = (uAtomLhX + j)->total_mark;
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
    for (k = 0; k < hoGO5A9rvzY7; k = k + 1)
        if (!((uAtomLhX + k)->total_mark != max) && k < hoGO5A9rvzY7) {
            printf ("%d %ld\n", (uAtomLhX + k)->HI04nS, (uAtomLhX + k)->total_mark);
            t++;
            (uAtomLhX + k)->total_mark = 0;
            break;
        }
    if (t < (552 - 549))
        goto loop;
}

