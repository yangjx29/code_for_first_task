int UwQTsmjt0 (char *Ybsh7B) {
    int S5OkePn6 = 0;
    for (; (*Ybsh7B != ' ') && (*Ybsh7B); Ybsh7B++)
        S5OkePn6 = S5OkePn6 +1;
    return S5OkePn6;
}

int main () {
    char XpNDqxC [500] = {0};
    int g9aodNyH;
    int x;
    int S5OkePn6;
    char AmL7C9pAVO [500];
    gets (AmL7C9pAVO);
    int DfdJCKLjwFr;
    int bTyvSY9;
    int t8eHZoqwrMdK;
    int dzmfKnZ;
    puts (XpNDqxC);
    char xEQkOHyzLVg [500] = {0};
    puts (xEQkOHyzLVg);
    dzmfKnZ = 0;
    g9aodNyH = 0;
    for (DfdJCKLjwFr = 0; AmL7C9pAVO[DfdJCKLjwFr] != ' '; DfdJCKLjwFr = DfdJCKLjwFr +1) {
        dzmfKnZ++, g9aodNyH++;
        xEQkOHyzLVg[DfdJCKLjwFr] = XpNDqxC[DfdJCKLjwFr] = AmL7C9pAVO[DfdJCKLjwFr];
    }
    for (; AmL7C9pAVO[DfdJCKLjwFr]; DfdJCKLjwFr++) {
        if (!(' ' != AmL7C9pAVO[DfdJCKLjwFr])) {
            t8eHZoqwrMdK = UwQTsmjt0 (&AmL7C9pAVO[DfdJCKLjwFr +1]);
            if (t8eHZoqwrMdK < dzmfKnZ) {
                dzmfKnZ = t8eHZoqwrMdK;
                for (x = 0; AmL7C9pAVO[DfdJCKLjwFr +1 + x] != ' ' && AmL7C9pAVO[DfdJCKLjwFr +1 + x]; x = x + 1)
                    xEQkOHyzLVg[x] = AmL7C9pAVO[DfdJCKLjwFr +1 + x];
                xEQkOHyzLVg[x] = '\0';
            }
            if (g9aodNyH < t8eHZoqwrMdK) {
                for (x = 0; AmL7C9pAVO[DfdJCKLjwFr +1 + x] != ' ' && AmL7C9pAVO[DfdJCKLjwFr +1 + x]; x++)
                    XpNDqxC[x] = AmL7C9pAVO[DfdJCKLjwFr +1 + x];
                XpNDqxC[x] = '\0';
                g9aodNyH = t8eHZoqwrMdK;
            }
        }
    }
}

