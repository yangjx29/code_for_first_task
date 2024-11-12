int main () {
    int JECRJN [(945 - 845)];
    int v0HZntep9S, eLzZGOT8ybD, f3sG1lxUzak, OlPB3D, WPGOYoV3vA, T3Mz6q;
    scanf ("%d", &WPGOYoV3vA);
    scanf ("%d\n%d", &v0HZntep9S, &eLzZGOT8ybD);
    if (v0HZntep9S >= eLzZGOT8ybD) {
        f3sG1lxUzak = v0HZntep9S;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        OlPB3D = eLzZGOT8ybD;
    }
    else {
        OlPB3D = v0HZntep9S;
        f3sG1lxUzak = eLzZGOT8ybD;
    }
    for (T3Mz6q = (293 - 291); T3Mz6q < WPGOYoV3vA; T3Mz6q = T3Mz6q +1) {
        scanf ("%d\n", &JECRJN[T3Mz6q]);
        if (JECRJN[T3Mz6q] > f3sG1lxUzak) {
            OlPB3D = f3sG1lxUzak;
            f3sG1lxUzak = JECRJN[T3Mz6q];
        }
        else if (JECRJN[T3Mz6q] < f3sG1lxUzak && JECRJN[T3Mz6q] > OlPB3D) {
            OlPB3D = JECRJN[T3Mz6q];
        };
    }
    printf ("%d\n%d", f3sG1lxUzak, OlPB3D);
    return 0;
}

