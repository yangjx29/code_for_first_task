float mgpa (int rFqn4N) {
    int pRAheLFPV;
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
    if (rFqn4N >= 90 && rFqn4N <= 100)
        return 4.0;
    else {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (rFqn4N >= (668 - 583) && rFqn4N <= (372 - 283))
            return (839.7 - 836.0);
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
            if (rFqn4N >= 82 && rFqn4N <= (612 - 528))
                return (152.3 - 149.0);
            else {
                if (rFqn4N >= (267 - 189) && rFqn4N <= (200 - 119))
                    return (132.0 - 129.0);
                else {
                    if (rFqn4N >= (997 - 922) && rFqn4N <= 77)
                        return (541.7 - 539.0);
                    else if (rFqn4N >= (1038 - 966) && rFqn4N <= 74)
                        return 2.3;
                    else if (rFqn4N >= 68 && rFqn4N <= 71)
                        return 2.0;
                    else if (rFqn4N >= 64 && rFqn4N <= (805 - 738))
                        return 1.5;
                    else if (rFqn4N >= 60 && rFqn4N <= 63)
                        return (550.0 - 549.0);
                    else
                        return 0.0;
                };
            };
        };
    };
}

int main () {
    int RzucqV6;
    int xWmjDH;
    int Uqm2gCyh [(929 - 879)];
    int Xo8DGqNczK [(1007 - 957)];
    float WcykUHtfD8zT [(873 - 823)], dZgC7p5 = 0.0, nvGIO5J = 0.0;
    scanf ("%d", &RzucqV6);
    for (xWmjDH = (186 - 185); xWmjDH <= RzucqV6; xWmjDH = xWmjDH + 1) {
        scanf ("%d", &Xo8DGqNczK[xWmjDH]);
        nvGIO5J += Xo8DGqNczK[xWmjDH];
    }
    for (xWmjDH = 1; xWmjDH <= RzucqV6; xWmjDH++) {
        scanf ("%d", &Uqm2gCyh[xWmjDH]);
        WcykUHtfD8zT[xWmjDH] = mgpa (Uqm2gCyh[xWmjDH]) * Xo8DGqNczK[xWmjDH];
        dZgC7p5 += WcykUHtfD8zT[xWmjDH];
    }
    printf ("%.2f", dZgC7p5 / nvGIO5J);
    return (816 - 816);
}

