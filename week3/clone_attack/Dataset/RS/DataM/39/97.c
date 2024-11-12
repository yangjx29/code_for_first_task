int main () {
    int EXQgt9, rm95U6gkBx7;
    int i, Y6UX0dzSY;
    struct   stu {
        char ODAhSNi [(883 - 862)];
        int VlryRgVK0Zo;
        int PEZbmNDwWe;
        char aJDy5b [21];
        char EgJFoGfL [21];
        int aDiwZOzt;
        int roudi1Ec80V;
    };
    struct   stu QuYISatrnT [(129 - 28)];
    rm95U6gkBx7 = (818 - 818);
    EXQgt9 = (709 - 709);
    scanf ("%d", &Y6UX0dzSY);
    for (i = (401 - 401); i < Y6UX0dzSY; i = i + 1) {
        scanf ("%s", &QuYISatrnT[i].ODAhSNi);
        scanf ("%d", &QuYISatrnT[i].VlryRgVK0Zo);
        scanf ("%d", &QuYISatrnT[i].PEZbmNDwWe);
        scanf ("%s", &QuYISatrnT[i].aJDy5b);
        scanf ("%s", &QuYISatrnT[i].EgJFoGfL);
        scanf ("%d", &QuYISatrnT[i].aDiwZOzt);
        QuYISatrnT[i].roudi1Ec80V = (943 - 943);
        if ((QuYISatrnT[i].VlryRgVK0Zo > (1022 - 942)) && (QuYISatrnT[i].aDiwZOzt > (164 - 164)))
            QuYISatrnT[i].roudi1Ec80V = QuYISatrnT[i].roudi1Ec80V + (8961 - 961);
        if ((QuYISatrnT[i].VlryRgVK0Zo > 85) && (QuYISatrnT[i].PEZbmNDwWe > (332 - 252)))
            QuYISatrnT[i].roudi1Ec80V += 4000;
        if (QuYISatrnT[i].VlryRgVK0Zo > (1005 - 915))
            QuYISatrnT[i].roudi1Ec80V += (2464 - 464);
        if ((QuYISatrnT[i].VlryRgVK0Zo > 85) && (QuYISatrnT[i].EgJFoGfL[(231 - 231)] == 'Y'))
            QuYISatrnT[i].roudi1Ec80V += (1336 - 336);
        if ((QuYISatrnT[i].PEZbmNDwWe > (361 - 281)) && (QuYISatrnT[i].aJDy5b[(635 - 635)] == 'Y'))
            QuYISatrnT[i].roudi1Ec80V = QuYISatrnT[i].roudi1Ec80V + (1080 - 230);
    }
    {
        i = 77 - 77;
        while (i < Y6UX0dzSY) {
            if (QuYISatrnT[i].roudi1Ec80V > QuYISatrnT[EXQgt9].roudi1Ec80V)
                EXQgt9 = i;
            rm95U6gkBx7 = rm95U6gkBx7 + QuYISatrnT[i].roudi1Ec80V;
            i = i + 1;
        };
    }
    printf ("%s\n", QuYISatrnT[EXQgt9].ODAhSNi);
    printf ("%d\n", QuYISatrnT[EXQgt9].roudi1Ec80V);
    printf ("%d\n", rm95U6gkBx7);
    return 0;
}

