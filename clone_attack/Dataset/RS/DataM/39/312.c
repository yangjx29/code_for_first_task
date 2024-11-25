struct   student {
    char m1UAl5SWb [25];
    int gJgNfxS, qJZ1lYyfq6, hycg7vIlX, YnyjdIxZ;
    char v14qyBxQvJRd, Kt7ylKW8;
};
int main () {
    int sum;
    int FU8VfYkMqu;
    int LHrbVY3u;
    int OZJtKf2GsU [100] = {0};
    sum = 0;
    FU8VfYkMqu = 0;
    LHrbVY3u = 0;
    struct   student wqn2x1Bd [100];
    int n;
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
    int x6m9U3RAf;
    scanf ("%d", &n);
    for (x6m9U3RAf = 0; x6m9U3RAf < n; x6m9U3RAf = x6m9U3RAf + 1) {
        scanf ("%s %d %d %c %c %d", wqn2x1Bd[x6m9U3RAf].m1UAl5SWb, &wqn2x1Bd[x6m9U3RAf].gJgNfxS, &wqn2x1Bd[x6m9U3RAf].qJZ1lYyfq6, &wqn2x1Bd[x6m9U3RAf].v14qyBxQvJRd, &wqn2x1Bd[x6m9U3RAf].Kt7ylKW8, &wqn2x1Bd[x6m9U3RAf].hycg7vIlX);
        if ((wqn2x1Bd[x6m9U3RAf].gJgNfxS > 80) && (wqn2x1Bd[x6m9U3RAf].hycg7vIlX >= (345 - 344))) {
            OZJtKf2GsU[x6m9U3RAf] = OZJtKf2GsU[x6m9U3RAf] + 8000;
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
        }
        if ((80 < wqn2x1Bd[x6m9U3RAf].qJZ1lYyfq6) && (wqn2x1Bd[x6m9U3RAf].gJgNfxS > 85)) {
            OZJtKf2GsU[x6m9U3RAf] = OZJtKf2GsU[x6m9U3RAf] + 4000;
        }
        if (90 < wqn2x1Bd[x6m9U3RAf].gJgNfxS) {
            OZJtKf2GsU[x6m9U3RAf] += 2000;
        }
        if ((wqn2x1Bd[x6m9U3RAf].gJgNfxS > 85) && (wqn2x1Bd[x6m9U3RAf].Kt7ylKW8 == 'Y')) {
            OZJtKf2GsU[x6m9U3RAf] = OZJtKf2GsU[x6m9U3RAf] + 1000;
        }
        if ((wqn2x1Bd[x6m9U3RAf].qJZ1lYyfq6 > 80) && (wqn2x1Bd[x6m9U3RAf].v14qyBxQvJRd == 'Y')) {
            OZJtKf2GsU[x6m9U3RAf] += 850;
        }
        wqn2x1Bd[x6m9U3RAf].YnyjdIxZ = OZJtKf2GsU[x6m9U3RAf];
    }
    OZJtKf2GsU[0] = FU8VfYkMqu = wqn2x1Bd[0].YnyjdIxZ;
    LHrbVY3u = 0;
    for (x6m9U3RAf = 0; x6m9U3RAf < n; x6m9U3RAf = x6m9U3RAf + 1) {
        sum = sum + OZJtKf2GsU[x6m9U3RAf];
        if (wqn2x1Bd[x6m9U3RAf].YnyjdIxZ > FU8VfYkMqu) {
            FU8VfYkMqu = wqn2x1Bd[x6m9U3RAf].YnyjdIxZ;
            LHrbVY3u = x6m9U3RAf;
        };
    }
    printf ("%s\n", wqn2x1Bd[LHrbVY3u].m1UAl5SWb);
    printf ("%d\n", OZJtKf2GsU[LHrbVY3u]);
    printf ("%d\n", sum);
    return 0;
}

