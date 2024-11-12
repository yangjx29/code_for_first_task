main () {
    char PMYgexjhaI [1000];
    int Cf5adyRnSF, j, a = 1;
    scanf ("%s", PMYgexjhaI);
    Cf5adyRnSF = strlen (PMYgexjhaI);
    for (int agZcMnk = 0;
    agZcMnk < Cf5adyRnSF; agZcMnk = agZcMnk + a) {
        a = 1;
        for (j = agZcMnk; Cf5adyRnSF > j; j++) {
            if (!(PMYgexjhaI[j + 1] != PMYgexjhaI[j]) || !(PMYgexjhaI[j + 1] - 'a' + 'A' != PMYgexjhaI[j]) || PMYgexjhaI[j + 1] == PMYgexjhaI[j] - 'a' + 'A')
                a++;
            else
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
        if (PMYgexjhaI[agZcMnk] >= 'a' && PMYgexjhaI[agZcMnk] <= 'z')
            PMYgexjhaI[agZcMnk] = PMYgexjhaI[agZcMnk] - 'a' + 'A';
        printf ("(%c,%d)", PMYgexjhaI[agZcMnk], a);
    };
}

