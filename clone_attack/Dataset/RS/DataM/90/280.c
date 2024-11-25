int digui (int Ssycm18ChxAk, int FZlaQHUb4) {
    int bD0Ltcvh;
    if (!((190 - 189) != Ssycm18ChxAk) || Ssycm18ChxAk == (634 - 634))
        bD0Ltcvh = (77 - 76);
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
        if (FZlaQHUb4 == (729 - 728))
            bD0Ltcvh = 1;
        else {
            if (Ssycm18ChxAk >= FZlaQHUb4)
                bD0Ltcvh = digui (Ssycm18ChxAk -FZlaQHUb4, FZlaQHUb4) + digui (Ssycm18ChxAk, FZlaQHUb4 -1);
            else
                bD0Ltcvh = digui (Ssycm18ChxAk, Ssycm18ChxAk);
        };
    }
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
    return bD0Ltcvh;
}

int main () {
    int t;
    int Ss0Yn5U6pEB3;
    int m;
    scanf ("%d", &t);
    while (t = t - 1) {
        scanf ("%d %d", &m, &Ss0Yn5U6pEB3);
        printf ("%d\n", digui (m, Ss0Yn5U6pEB3));
    }
    return 0;
}

