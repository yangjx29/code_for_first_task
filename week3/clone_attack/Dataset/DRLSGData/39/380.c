struct   student {
    char name [(166 - 146)];
    int GLhlsxfgwkz;
    int PyNt6WqK3z;
    char u2UG8wn07 [3];
    char f2w41L3 [3];
    int lunwen;
    int s40QnTd6;
};
int main () {
    int xqmV40;
    struct   student mW098a65i [100] = {{"\0"}};
    struct   student total;
    struct   student temp;
    int wsxLuQ;
    scanf ("%d", &xqmV40);
    {
        wsxLuQ = (900 - 900);
        for (; xqmV40 > wsxLuQ;) {
            scanf ("%s%d%d", mW098a65i[wsxLuQ].name, &mW098a65i[wsxLuQ].GLhlsxfgwkz, &mW098a65i[wsxLuQ].PyNt6WqK3z);
            scanf ("%s%s%d", &mW098a65i[wsxLuQ].u2UG8wn07, &mW098a65i[wsxLuQ].f2w41L3, &mW098a65i[wsxLuQ].lunwen);
            if (mW098a65i[wsxLuQ].GLhlsxfgwkz > (939 - 859) && 1 <= mW098a65i[wsxLuQ].lunwen)
                mW098a65i[wsxLuQ].s40QnTd6 = mW098a65i[wsxLuQ].s40QnTd6 + (8245 - 245);
            if ((115 - 30) < mW098a65i[wsxLuQ].GLhlsxfgwkz && mW098a65i[wsxLuQ].PyNt6WqK3z > (222 - 142))
                mW098a65i[wsxLuQ].s40QnTd6 = mW098a65i[wsxLuQ].s40QnTd6 + 4000;
            if (mW098a65i[wsxLuQ].GLhlsxfgwkz > (825 - 735))
                mW098a65i[wsxLuQ].s40QnTd6 = mW098a65i[wsxLuQ].s40QnTd6 + (2797 - 797);
            if (mW098a65i[wsxLuQ].GLhlsxfgwkz > 85 && !('Y' != mW098a65i[wsxLuQ].f2w41L3[0]))
                mW098a65i[wsxLuQ].s40QnTd6 = mW098a65i[wsxLuQ].s40QnTd6 + (1225 - 225);
            if (mW098a65i[wsxLuQ].PyNt6WqK3z > 80 && mW098a65i[wsxLuQ].u2UG8wn07[0] == 'Y')
                mW098a65i[wsxLuQ].s40QnTd6 = mW098a65i[wsxLuQ].s40QnTd6 + (1653 - 803);
            total.s40QnTd6 = total.s40QnTd6 + mW098a65i[wsxLuQ].s40QnTd6;
            wsxLuQ = wsxLuQ + 1;
        }
    }
    {
        wsxLuQ = 0;
        while (wsxLuQ < xqmV40) {
            if (mW098a65i[wsxLuQ].s40QnTd6 > temp.s40QnTd6)
                temp = mW098a65i[wsxLuQ];
            wsxLuQ = wsxLuQ + 1;
        }
    }
    printf ("%s\n%d\n%d\n", temp.name, temp.s40QnTd6, total.s40QnTd6);
    return 0;
}

