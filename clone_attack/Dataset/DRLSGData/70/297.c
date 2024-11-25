main () {
    int n, i, PVL7QG;
    float cYLM5hiCJgy [100] [2];
    float jfrNvo, max = 0;
    scanf ("%d", &n);
    {
        i = 1;
        while (i <= n) {
            scanf ("%f %f", &cYLM5hiCJgy[i][0], &cYLM5hiCJgy[i][1]);
            i++;
        }
    }
    {
        i = 1;
        while (i <= n) {
            {
                PVL7QG = i + 1;
                while (PVL7QG <= n) {
                    if (((cYLM5hiCJgy[i][0] - cYLM5hiCJgy[PVL7QG][0]) * (cYLM5hiCJgy[i][0] - cYLM5hiCJgy[PVL7QG][0]) + (cYLM5hiCJgy[i][1] - cYLM5hiCJgy[PVL7QG][1]) * (cYLM5hiCJgy[i][1] - cYLM5hiCJgy[PVL7QG][1])) > max)
                        max = (cYLM5hiCJgy[i][0] - cYLM5hiCJgy[PVL7QG][0]) * (cYLM5hiCJgy[i][0] - cYLM5hiCJgy[PVL7QG][0]) + (cYLM5hiCJgy[i][1] - cYLM5hiCJgy[PVL7QG][1]) * (cYLM5hiCJgy[i][1] - cYLM5hiCJgy[PVL7QG][1]);
                    PVL7QG++;
                }
            }
            i++;
        }
    }
    jfrNvo = sqrt (max);
    printf ("%0.4f", jfrNvo);
    getchar ();
    getchar ();
    getchar ();
}

