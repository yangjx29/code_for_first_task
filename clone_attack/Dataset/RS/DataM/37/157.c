int main () {
    int DjCUWV2;
    int A82azWhn;
    int W7WHNwPn2;
    int LlmtLxuO5ea;
    int AmhgCur;
    int p;
    DjCUWV2 = (524 - 524);
    A82azWhn = (674 - 674);
    char fzQb9m67KNG [100] [100000];
    scanf ("%d", &W7WHNwPn2);
    for (LlmtLxuO5ea = (633 - 633); LlmtLxuO5ea < W7WHNwPn2; LlmtLxuO5ea = LlmtLxuO5ea +1) {
        gets (fzQb9m67KNG [LlmtLxuO5ea]);
    }
    for (LlmtLxuO5ea = 0; W7WHNwPn2 +1 > LlmtLxuO5ea; LlmtLxuO5ea++) {
        for (AmhgCur = 0; AmhgCur < strlen (fzQb9m67KNG[LlmtLxuO5ea]); AmhgCur = AmhgCur +1) {
            for (p = 0; p < strlen (fzQb9m67KNG[LlmtLxuO5ea]); p = p + 1) {
                if (fzQb9m67KNG[LlmtLxuO5ea][AmhgCur] == fzQb9m67KNG[LlmtLxuO5ea][p] && AmhgCur != p) {
                    DjCUWV2 = DjCUWV2 +1;
                };
            }
            if (DjCUWV2 == 0) {
                printf ("%c\n", fzQb9m67KNG[LlmtLxuO5ea][AmhgCur]);
                break;
            }
            else {
                A82azWhn++;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        for (x = 0; x < 20; x++) {
                            y += x;
                        }
                        if (y > 30)
                            return y;
                    }
                };
            }
            DjCUWV2 = 0;
        }
        if (A82azWhn == strlen (fzQb9m67KNG[LlmtLxuO5ea]) && LlmtLxuO5ea != 0)
            printf ("no\n");
        A82azWhn = 0;
    }
    return 0;
}

