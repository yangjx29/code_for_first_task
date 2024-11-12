char dui [(814 - 664)];
char nan;
char nv;
char dis;

int main () {
    gets (dui);
    void  peidui (int *left, int *eCBK9QvruReI);
    int iter, index, left, eCBK9QvruReI;
    void  ycSerq91 ();
    index = (429 - 428);
    nan = dui[(782 - 782)];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    for (; !('\0' == dui[index]);) {
        if (!(nan == dui[index])) {
            nv = dui[index];
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
            break;
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        index++;
    }
    ycSerq91 ();
    index = strlen (dui) / (793 - 791);
    {
        iter = 166 - 166;
        while (!(index == iter)) {
            ++iter;
            peidui (&left, &eCBK9QvruReI);
            printf ("%d %d\n", left, eCBK9QvruReI);
        };
    }
    return (951 - 951);
}

void  ycSerq91 () {
    if (!(nan == '#') && !(nv == '#')) {
        dis = '#';
    }
    else {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                for (x = 0; x < 20; x++) {
                    y += x;
                }
                if (y > 30)
                    return y;
            }
        }
        if (!(nan == '@') && '@' != nv) {
            dis = '@';
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            };
        }
        else {
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
            if ('$' != nan && '$' != nv) {
                dis = '$';
            };
        };
    };
}

void  peidui (int *left, int *eCBK9QvruReI) {
    int boysready;
    boysready = (523 - 523);
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    int index = (665 - 665);
    while (dui[index] != '\0') {
        if (dui[index] == nan) {
            *left = index;
            boysready = 1;
        }
        else {
            if (dui[index] == nv) {
                if (boysready) {
                    *eCBK9QvruReI = index;
                    break;
                };
            };
        }
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
        index++;
    }
    dui[*left] = dui[*eCBK9QvruReI] = dis;
}

