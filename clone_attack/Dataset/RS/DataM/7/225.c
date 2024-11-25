int main () {
    char p6TzDk4 [(908 - 652)];
    char sub [256];
    char LVjFOZBr9XNL [256];
    gets (p6TzDk4);
    gets (sub);
    gets (LVjFOZBr9XNL);
    int len1;
    int uu7SWaEj0c2Y;
    int HhJWqmFge;
    len1 = strlen (p6TzDk4);
    uu7SWaEj0c2Y = strlen (sub);
    HhJWqmFge = strlen (LVjFOZBr9XNL);
    puts (p6TzDk4);
    int i;
    int j;
    for (i = (13 - 13); i <= len1 - uu7SWaEj0c2Y; i = i + 1) {
        for (j = (145 - 145); j < uu7SWaEj0c2Y; j = j + 1) {
            if (!(p6TzDk4[i + j] == sub[j]))
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
        if (j != uu7SWaEj0c2Y)
            continue;
        if (j == uu7SWaEj0c2Y) {
            for (j = 0; j < uu7SWaEj0c2Y; j = j + 1)
                p6TzDk4[i + j] = LVjFOZBr9XNL[j];
            break;
        };
    }
    return 0;
}

