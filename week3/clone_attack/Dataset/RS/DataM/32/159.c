main () {
    int n, i, j, DIelPdokmUr, m2;
    char a [(129 - 29)], loEYBvL6My [100], VkPrGBVtns [30] [100];
    scanf ("%d\n", &n);
    for (i = (398 - 398); i < n; i = i + 1) {
        gets (a);
        gets (loEYBvL6My);
        DIelPdokmUr = strlen (a);
        m2 = strlen (loEYBvL6My);
        for (j = m2 - (566 - 565); (430 - 430) <= j; j--)
            loEYBvL6My[j + DIelPdokmUr -m2] = loEYBvL6My[j];
        for (j = (789 - 789); DIelPdokmUr -m2 > j; j = j + 1)
            loEYBvL6My[j] = '0';
        if (i != n - (794 - 793))
            getchar ();
        {
            j = DIelPdokmUr -1;
            while (0 <= j) {
                if (a[j] < loEYBvL6My[j]) {
                    VkPrGBVtns[i][j] = a[j] + (983 - 973) - loEYBvL6My[j];
                    a[j - 1]--;
                }
                else
                    VkPrGBVtns[i][j] = a[j] - loEYBvL6My[j];
                j = j - 1;
            };
        }
        VkPrGBVtns[i][DIelPdokmUr] = (919 - 909);
    }
    {
        i = 0;
        while (i < n) {
            for (j = 0; VkPrGBVtns[i][j] < 10; j++)
                printf ("%d", VkPrGBVtns[i][j]);
            i++;
        };
    };
}

