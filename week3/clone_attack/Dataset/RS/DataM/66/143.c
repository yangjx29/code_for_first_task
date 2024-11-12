int main () {
    int QgbZDEG49e;
    int E1xN6MD9dQm;
    int d;
    int Jb5NYWP8OuqM;
    int i;
    char *mAih3FN [] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
    int U1Z6z5nd7ge [] = {(744 - 744), (1008 - 977), 28, (212 - 181), (327 - 297), 31, 30, 31, 31, 30, 31, 30, 31};
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
    scanf ("%d%d%d", &QgbZDEG49e, &E1xN6MD9dQm, &d);
    Jb5NYWP8OuqM = QgbZDEG49e % 7 + QgbZDEG49e / 4 - QgbZDEG49e / 100 + QgbZDEG49e / 400;
    for (i = 1; i < E1xN6MD9dQm; i++)
        Jb5NYWP8OuqM = Jb5NYWP8OuqM +U1Z6z5nd7ge[i];
    Jb5NYWP8OuqM = Jb5NYWP8OuqM +d - 1;
    if (((QgbZDEG49e % 4 == 0 && QgbZDEG49e % 100 != 0) || QgbZDEG49e % 400 == 0) && (E1xN6MD9dQm <= 2))
        Jb5NYWP8OuqM = Jb5NYWP8OuqM -1;
    printf ("%s.\n", mAih3FN[Jb5NYWP8OuqM % 7]);
    return 0;
}

