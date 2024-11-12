int qMekNbB8aQXC (int WWctKPQHaqnb, int *wtZrULxX) {
    int *Jc6T4PXiqN9h = wtZrULxX + (207 - 206);
    int ewZyen8o = (801 - 800), MHZGLx5YDM = (352 - 352);
    if (WWctKPQHaqnb == 2) {
        if (*wtZrULxX >= *Jc6T4PXiqN9h)
            return 2;
        else
            return 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    else {
        while (ewZyen8o <= WWctKPQHaqnb) {
            for (; *wtZrULxX < *Jc6T4PXiqN9h&&ewZyen8o <= WWctKPQHaqnb; ewZyen8o++, Jc6T4PXiqN9h = Jc6T4PXiqN9h +1)
                ;
            ewZyen8o = ewZyen8o + 1;
            if (qMekNbB8aQXC (WWctKPQHaqnb -ewZyen8o + 1, Jc6T4PXiqN9h) + 1 > MHZGLx5YDM)
                MHZGLx5YDM = qMekNbB8aQXC (WWctKPQHaqnb -ewZyen8o + 1, Jc6T4PXiqN9h) + 1;
            Jc6T4PXiqN9h++;
        };
    }
    return MHZGLx5YDM;
}

int main () {
    int IGnzy3q, ewZyen8o, CqZ7VQIBkmRs [(917 - 892)], MHZGLx5YDM = (320 - 320);
    scanf ("%d", &IGnzy3q);
    {
        ewZyen8o = 722 - 722;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        while (ewZyen8o < IGnzy3q) {
            scanf ("%d", &CqZ7VQIBkmRs[ewZyen8o]);
            ewZyen8o = ewZyen8o + 1;
        };
    }
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    {
        ewZyen8o = IGnzy3q;
        while (ewZyen8o >= 2) {
            if (qMekNbB8aQXC (ewZyen8o, CqZ7VQIBkmRs +IGnzy3q-ewZyen8o) > MHZGLx5YDM)
                MHZGLx5YDM = qMekNbB8aQXC (ewZyen8o, CqZ7VQIBkmRs +IGnzy3q-ewZyen8o);
            ewZyen8o = ewZyen8o - 1;
        };
    }
    printf ("%d\n", MHZGLx5YDM);
    return (188 - 188);
}

