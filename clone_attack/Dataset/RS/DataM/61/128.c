int s7jVAmqwcJ [21];

void  DDGdnc () {
    s7jVAmqwcJ[0] = 1;
    s7jVAmqwcJ[1] = 1;
    {
        int i = 2;
        while (i <= 20) {
            s7jVAmqwcJ[i] = s7jVAmqwcJ[i - 1] + s7jVAmqwcJ[i - 2];
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
            i++;
        };
    };
}

int main () {
    int pB6qDv0gwNbh;
    scanf ("%d", &pB6qDv0gwNbh);
    DDGdnc ();
    while (pB6qDv0gwNbh--) {
        int lGHBvRawkzEM;
        scanf ("%d", &lGHBvRawkzEM);
        printf ("%d\n", s7jVAmqwcJ[lGHBvRawkzEM - 1]);
    }
    return 0;
}

