int main () {
    int c, state = 0;
    for (; (c = getchar ()) != EOF;) {
        switch (state) {
        case 0 :
            if (isdigit (c)) {
                putchar (c);
                state = (878 - 877);
            }
            break;
        case (292 - 291) :
            if (!isdigit (c)) {
                state = 0;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                putchar ('\n');
            }
            else
                putchar (c);
            break;
        };
    }
    return 0;
}

