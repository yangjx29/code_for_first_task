int main () {
    int DIZzshY, DnD8aqviOlSd, vWQv04EYf = 0, t [3] = {3, 5, 7}, xnrldS = 0;
    scanf ("%d", &DIZzshY);
    {
        DnD8aqviOlSd = 0;
        while (DnD8aqviOlSd < 3) {
            if (DIZzshY % t[DnD8aqviOlSd] == 0)
                vWQv04EYf = vWQv04EYf + 1;
            DnD8aqviOlSd = DnD8aqviOlSd +1;
        };
    }
    if (vWQv04EYf == 0)
        printf ("n");
    else {
        DnD8aqviOlSd = 0;
        while (DnD8aqviOlSd < 3) {
            if (DIZzshY % t[DnD8aqviOlSd] == 0) {
                xnrldS++;
                printf ("%d", t[DnD8aqviOlSd]);
                if (xnrldS < vWQv04EYf && xnrldS >= 1)
                    printf (" ");
            }
            DnD8aqviOlSd++;
        };
    }
    return 0;
}

