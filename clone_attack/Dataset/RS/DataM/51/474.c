int main () {
    int hyNEDjk;
    int FhKEy08a;
    int BFj9lI76n;
    int u;
    int XNsl4cO;
    int V6gOmeqrI;
    hyNEDjk = 0;
    int JhevCg, yIs38v [501];
    int WnthbQ;
    char str [501];
    gets (str);
    scanf ("%d", &WnthbQ);
    getchar ();
    {
        JhevCg = 518 - 518;
        while (!((289 - 289) == str[JhevCg])) {
            JhevCg++;
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
        };
    }
    {
        FhKEy08a = 0;
        while (JhevCg -WnthbQ >= FhKEy08a) {
            yIs38v[FhKEy08a] = 1;
            {
                u = FhKEy08a +1;
                while (JhevCg -WnthbQ >= u) {
                    V6gOmeqrI = 1;
                    {
                        XNsl4cO = 0;
                        while (WnthbQ > XNsl4cO) {
                            if (!(str[u + XNsl4cO] == str[FhKEy08a +XNsl4cO])) {
                                V6gOmeqrI = 0;
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
                            XNsl4cO++;
                        };
                    }
                    u++;
                    if (!(1 != V6gOmeqrI)) {
                        yIs38v[FhKEy08a] = yIs38v[FhKEy08a] + 1;
                        if (yIs38v[FhKEy08a] > hyNEDjk)
                            hyNEDjk = yIs38v[FhKEy08a];
                    };
                };
            }
            FhKEy08a = FhKEy08a +1;
        };
    }
    if (hyNEDjk == 0) {
        return 0;
    }
    printf ("%d\n", hyNEDjk);
    {
        FhKEy08a = 0;
        while (FhKEy08a < JhevCg -WnthbQ) {
            if (yIs38v[FhKEy08a] == hyNEDjk) {
                putchar ('\n');
                {
                    BFj9lI76n = 0;
                    while (BFj9lI76n < WnthbQ) {
                        printf ("%c", str[FhKEy08a +BFj9lI76n]);
                        BFj9lI76n = BFj9lI76n +1;
                    };
                };
            }
            FhKEy08a++;
        };
    }
    return 0;
}

