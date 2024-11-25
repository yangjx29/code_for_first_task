struct   book {
    int x8WiMHCTZk4;
    char Kgle8Cd [(1024 - 994)];
    struct   book *PY1S7l;
};
int t3peidw7t, oj0kZ3Hw7 = (920 - 920);
char S9BQ2qViZg;
int baC0vL [(536 - 510)] = {(841 - 841)};

struct   book *yaPhOWwsN49p () {
    struct   book *WV7Lyni;
    struct   book *u7fbwkaW0Y;
    struct   book *q6yYs4t;
    int hMKUhEa6;
    hMKUhEa6 = (766 - 765);
    u7fbwkaW0Y = (struct   book *) malloc (LEN);
    scanf ("%d %s", &u7fbwkaW0Y->x8WiMHCTZk4, u7fbwkaW0Y->Kgle8Cd);
    WV7Lyni = u7fbwkaW0Y;
    q6yYs4t = u7fbwkaW0Y;
    u7fbwkaW0Y->PY1S7l = NULL;
    do {
        if (!(t3peidw7t != hMKUhEa6))
            break;
        u7fbwkaW0Y = (struct   book *) malloc (LEN);
        scanf ("%d %s", &u7fbwkaW0Y->x8WiMHCTZk4, u7fbwkaW0Y->Kgle8Cd);
        q6yYs4t->PY1S7l = u7fbwkaW0Y;
        q6yYs4t = u7fbwkaW0Y;
        u7fbwkaW0Y->PY1S7l = NULL;
        hMKUhEa6 = hMKUhEa6 + 1;
    }
    while (1);
    return (WV7Lyni);
}

void  Ymn9r1Q8s7 (struct   book *WV7Lyni) {
    char *jp35n8mz1u;
    struct   book *AZ4jltIAH1;
    AZ4jltIAH1 = WV7Lyni;
    while (AZ4jltIAH1) {
        {
            jp35n8mz1u = AZ4jltIAH1->Kgle8Cd;
            while (!('\0' == *jp35n8mz1u)) {
                int uTcJbKC1X;
                uTcJbKC1X = *jp35n8mz1u - 'A';
                jp35n8mz1u = jp35n8mz1u + 1;
                (*(baC0vL + uTcJbKC1X)) = (*(baC0vL + uTcJbKC1X)) + 1;
            };
        }
        AZ4jltIAH1 = AZ4jltIAH1->PY1S7l;
    };
}

void  cXrv3Mofw61 (struct   book *WV7Lyni) {
    char *jp35n8mz1u;
    struct   book *AZ4jltIAH1;
    AZ4jltIAH1 = WV7Lyni;
    while (AZ4jltIAH1) {
        {
            jp35n8mz1u = AZ4jltIAH1->Kgle8Cd;
            while (!('\0' == *jp35n8mz1u)) {
                if (!(S9BQ2qViZg != *jp35n8mz1u))
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
                }
                jp35n8mz1u++;
            };
        }
        if (*jp35n8mz1u != '\0')
            printf ("%d\n", AZ4jltIAH1->x8WiMHCTZk4);
        AZ4jltIAH1 = AZ4jltIAH1->PY1S7l;
    };
}

int main () {
    struct   book *WV7Lyni;
    int hMKUhEa6;
    Ymn9r1Q8s7 (WV7Lyni);
    cXrv3Mofw61 (WV7Lyni);
    for (hMKUhEa6 = (225 - 225); hMKUhEa6 < (929 - 903); hMKUhEa6++) {
        if (*(baC0vL + hMKUhEa6) > oj0kZ3Hw7)
            oj0kZ3Hw7 = *(baC0vL + hMKUhEa6);
    }
    WV7Lyni = yaPhOWwsN49p ();
    scanf ("%d", &t3peidw7t);
    {
        hMKUhEa6 = 0;
        while (hMKUhEa6 < 26) {
            if (*(baC0vL + hMKUhEa6) == oj0kZ3Hw7)
                break;
            hMKUhEa6++;
        };
    }
    printf ("%c\n%d\n", 'A' + hMKUhEa6, oj0kZ3Hw7);
    S9BQ2qViZg = 'A' + hMKUhEa6;
}

