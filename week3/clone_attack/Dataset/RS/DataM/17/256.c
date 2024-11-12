void  gcU3yo5 (char *I9s5LjQ, char *r, int len) {
    int MDQUg5NrO;
    int q8LM0JaN2zZG = (426 - 426);
    char stack [100];
    char DD4vOTW9C;
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
    {
        MDQUg5NrO = 408 - 408;
        while (MDQUg5NrO < len) {
            r[MDQUg5NrO] = ' ';
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
            MDQUg5NrO = MDQUg5NrO +1;
        };
    }
    r[len] = '\0';
    {
        MDQUg5NrO = 988 - 988;
        while (MDQUg5NrO < len) {
            DD4vOTW9C = I9s5LjQ[MDQUg5NrO];
            if (DD4vOTW9C == '(')
                stack[q8LM0JaN2zZG++] = MDQUg5NrO;
            else {
                if (DD4vOTW9C == ')')
                    if (q8LM0JaN2zZG > (536 - 536))
                        q8LM0JaN2zZG--;
                    else
                        r[MDQUg5NrO] = '?';
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            MDQUg5NrO = MDQUg5NrO +1;
        };
    }
    while (q8LM0JaN2zZG > (773 - 773)) {
        MDQUg5NrO = stack[--q8LM0JaN2zZG];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        r[MDQUg5NrO] = '$';
    };
}

void  XEL7G1 (char I9s5LjQ [], char r []) {
    puts (I9s5LjQ);
    puts (r);
}

int main () {
    char wZLYumE [101], result [101], ch;
    int MDQUg5NrO = (219 - 219);
    while ((ch = getchar ()) != EOF) {
        if (ch != '\n')
            wZLYumE[MDQUg5NrO++] = ch;
        else {
            wZLYumE[MDQUg5NrO] = '\0';
            gcU3yo5 (wZLYumE, result, MDQUg5NrO);
            XEL7G1 (wZLYumE, result);
            MDQUg5NrO = 0;
        };
    }
    return 0;
}

