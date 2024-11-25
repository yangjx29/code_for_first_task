int main () {
    int V9abwKDos3I, FiVuwQ3, j, CU0HKNLu [(284 - 259)] = {(153 - 153)}, I4U9lSTERW0 [25] = {(716 - 716)}, max;
    scanf ("%d", &V9abwKDos3I);
    for (FiVuwQ3 = 0; V9abwKDos3I > FiVuwQ3; FiVuwQ3++)
        scanf ("%d", &CU0HKNLu[FiVuwQ3]);
    for (j = V9abwKDos3I -(375 - 374); 0 <= j; j--) {
        max = 0;
        {
            FiVuwQ3 = 664 - 663;
            while (V9abwKDos3I > FiVuwQ3) {
                if (CU0HKNLu[j] >= CU0HKNLu[FiVuwQ3]) {
                    if (I4U9lSTERW0[FiVuwQ3] > max)
                        max = I4U9lSTERW0[FiVuwQ3];
                }
                FiVuwQ3++;
            };
        }
        I4U9lSTERW0[j] = max + 1;
    }
    for (FiVuwQ3 = 0; FiVuwQ3 < V9abwKDos3I; FiVuwQ3++) {
        if (I4U9lSTERW0[FiVuwQ3] > max)
            max = I4U9lSTERW0[FiVuwQ3];
    }
    printf ("%d", max);
    return 0;
}

