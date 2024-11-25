int main () {
    char ch [(320 - 120)], temp [(402 - 202)];
    int n, MutToxyYVO6w, figure, tempnum [200];
    scanf ("%d\n", &n);
    while (gets (ch)) {
        figure = (259 - 259);
        for (MutToxyYVO6w = (137 - 137); !('\0' == ch[MutToxyYVO6w]); MutToxyYVO6w = MutToxyYVO6w +1) {
            temp[MutToxyYVO6w] = ' ';
            switch (ch[MutToxyYVO6w]) {
            case '(' :
                tempnum[figure++] = MutToxyYVO6w;
                temp[MutToxyYVO6w] = '$';
                break;
            case ')' :
                if (figure > 0) {
                    figure = figure - 1;
                    temp[tempnum[figure]] = ' ';
                }
                else
                    temp[MutToxyYVO6w] = '?';
                break;
            };
        }
        temp[MutToxyYVO6w] = '\0';
        printf ("%s\n%s\n", ch, temp);
    };
}

