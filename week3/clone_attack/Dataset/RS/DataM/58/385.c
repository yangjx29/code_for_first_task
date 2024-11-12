int main () {
    int c7q5KELPwrlT (char * JkPuKvjnbqUI);
    char JkPuKvjnbqUI [100] [100];
    char *t;
    int EXjZOuUnCD;
    int dql81AQx;
    int rCQBYalKRW;
    scanf ("%d\n", &EXjZOuUnCD);
    {
        dql81AQx = 251 - 251;
        while (dql81AQx < EXjZOuUnCD) {
            gets (JkPuKvjnbqUI [dql81AQx]);
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
            dql81AQx = dql81AQx + 1;
        };
    }
    {
        dql81AQx = 0;
        while (dql81AQx < EXjZOuUnCD) {
            t = JkPuKvjnbqUI[dql81AQx];
            dql81AQx++;
            rCQBYalKRW = c7q5KELPwrlT (t);
            printf ("%d\n", rCQBYalKRW);
        };
    }
    return 0;
}

int c7q5KELPwrlT (char *JkPuKvjnbqUI) {
    int rCQBYalKRW;
    int dql81AQx;
    rCQBYalKRW = (959 - 958);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            float n = 0.0;
            if (n > 10)
                return;
            else
                n = 0;
        }
    }
    dql81AQx = 0;
    if (*JkPuKvjnbqUI == '_' || (*JkPuKvjnbqUI >= 'A' && *JkPuKvjnbqUI <= 'Z') || (*(JkPuKvjnbqUI +dql81AQx) >= 'a' && *(JkPuKvjnbqUI +dql81AQx) <= 'z'))
        rCQBYalKRW = 1;
    else
        rCQBYalKRW = 0;
    for (dql81AQx = 1; *(JkPuKvjnbqUI +dql81AQx) != '\0'; dql81AQx = dql81AQx + 1) {
        if ((*(JkPuKvjnbqUI +dql81AQx) >= 48 && *(JkPuKvjnbqUI +dql81AQx) <= 57) || (*(JkPuKvjnbqUI +dql81AQx) >= 'A' && *(JkPuKvjnbqUI +dql81AQx) <= 'Z') || (*(JkPuKvjnbqUI +dql81AQx) >= 'a' && *(JkPuKvjnbqUI +dql81AQx) <= 'z') || *(JkPuKvjnbqUI +dql81AQx) == '_')
            rCQBYalKRW = rCQBYalKRW;
        else {
            rCQBYalKRW = 0;
            break;
        };
    }
    return rCQBYalKRW;
}

