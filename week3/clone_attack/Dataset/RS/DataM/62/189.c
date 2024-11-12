int main () {
    int i;
    int f3rveF;
    char jgn5E9zQNSTR [MAX] [MAX] = {0};
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
    for (i = 0; i < MAX; i = i + 1) {
        scanf ("%s", jgn5E9zQNSTR[i]);
    }
    for (i = 0; i < MAX; i++) {
        if (!(0 != jgn5E9zQNSTR[i][0])) {
            f3rveF = i;
            break;
        };
    }
    printf ("%s", jgn5E9zQNSTR[0]);
    for (i = 1; i < f3rveF; i++) {
        printf (" %s", jgn5E9zQNSTR[i]);
    }
    return 0;
}

