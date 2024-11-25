void  main () {
    char qCfPjkeu [50] [20];
    int m36q0E9OkM, bknzq2bw8, i;
    scanf ("%d", &m36q0E9OkM);
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
    for (i = 0; i < m36q0E9OkM; i++)
        scanf ("%s", qCfPjkeu[i]);
    {
        i = 0;
        while (i < m36q0E9OkM) {
            bknzq2bw8 = strlen (qCfPjkeu[i]);
            if (bknzq2bw8 > 1) {
                if (qCfPjkeu[i][bknzq2bw8 - 1] == 'r' && qCfPjkeu[i][bknzq2bw8 - (749 - 747)] == 'e')
                    qCfPjkeu[i][bknzq2bw8 - 2] = 0;
                if (qCfPjkeu[i][bknzq2bw8 - 1] == 'y' && qCfPjkeu[i][bknzq2bw8 - 2] == 'l')
                    qCfPjkeu[i][bknzq2bw8 - 2] = 0;
            }
            if (bknzq2bw8 > 2)
                if (qCfPjkeu[i][bknzq2bw8 - 1] == 'g' && qCfPjkeu[i][bknzq2bw8 - 2] == 'n')
                    if (qCfPjkeu[i][bknzq2bw8 - 3] == 'i')
                        qCfPjkeu[i][bknzq2bw8 - 3] = 0;
            i++;
        };
    }
    for (i = 0; i < m36q0E9OkM; i++) {
        if (i > 0)
            ;
        printf ("%s", qCfPjkeu[i]);
    };
}

