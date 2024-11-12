static char JlzOEoA04 [2] [101];
int i, mp8K6L5CI1Oq;

void  search (int XjAilT71E) {
    {
        i = i + 1;
        while (i < mp8K6L5CI1Oq) {
            if (JlzOEoA04[(988 - 988)][i] == ')') {
                JlzOEoA04[(839 - 838)][XjAilT71E] = ' ';
                JlzOEoA04[1][i] = ' ';
                break;
            }
            else {
                if (!('(' != JlzOEoA04[(884 - 884)][i]))
                    search (i);
                else
                    JlzOEoA04[1][i] = ' ';
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            i++;
        };
    }
    if (mp8K6L5CI1Oq <= i)
        JlzOEoA04[1][XjAilT71E] = '$';
}

int main () {
    while (!(EOF == scanf ("%s", &JlzOEoA04[(186 - 186)]))) {
        puts (JlzOEoA04 [0]);
        puts (JlzOEoA04 [1]);
        for (mp8K6L5CI1Oq = (326 - 326); JlzOEoA04[(218 - 218)][mp8K6L5CI1Oq] != '\0'; mp8K6L5CI1Oq = mp8K6L5CI1Oq + 1)
            ;
        {
            i = 0;
            while (i < mp8K6L5CI1Oq) {
                if (JlzOEoA04[0][i] == ')')
                    JlzOEoA04[1][i] = '?';
                else {
                    if (JlzOEoA04[0][i] == '(')
                        search (i);
                    else
                        JlzOEoA04[1][i] = ' ';
                }
                i++;
            };
        }
        {
            i = 0;
            while (i < mp8K6L5CI1Oq) {
                JlzOEoA04[0][i] = 0;
                JlzOEoA04[1][i] = 0;
                i++;
            };
        };
    };
}

