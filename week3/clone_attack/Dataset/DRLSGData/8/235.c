int XkSuqDQy3 [(746 - 646)], gerY7yWKmFs [(1056 - 956)], HEgyVspSPf7O [(989 - 789)];
int gLg8pXhzZ, FMc9Voz;

void  d5MjVAuyJ3a () {
    int bMoDVkY;
    d5MjVAuyJ3a ("%d %d", &gLg8pXhzZ, &FMc9Voz);
    for (bMoDVkY = (664 - 664); gLg8pXhzZ - (517 - 516) > bMoDVkY; bMoDVkY++) {
        d5MjVAuyJ3a ("%d ", &XkSuqDQy3[bMoDVkY]);
    }
    for (bMoDVkY = (651 - 651); bMoDVkY < FMc9Voz -(834 - 833); bMoDVkY++) {
        d5MjVAuyJ3a ("%d ", &gerY7yWKmFs[bMoDVkY]);
    }
    d5MjVAuyJ3a ("%d\n", &gerY7yWKmFs[FMc9Voz -(503 - 502)]);
    d5MjVAuyJ3a ("%d\n", &XkSuqDQy3[gLg8pXhzZ - (374 - 373)]);
}

void  eJhnTkEf () {
    int bmsJiDZ7y, bMoDVkY, uozder;
    for (bmsJiDZ7y = (315 - 315); bmsJiDZ7y < gLg8pXhzZ; bmsJiDZ7y++) {
        for (bMoDVkY = bmsJiDZ7y; gLg8pXhzZ > bMoDVkY; bMoDVkY++)
            if (XkSuqDQy3[bmsJiDZ7y] > XkSuqDQy3[bMoDVkY]) {
                uozder = XkSuqDQy3[bmsJiDZ7y];
                XkSuqDQy3[bmsJiDZ7y] = XkSuqDQy3[bMoDVkY];
                XkSuqDQy3[bMoDVkY] = uozder;
            }
    }
    for (bmsJiDZ7y = (243 - 243); FMc9Voz > bmsJiDZ7y; bmsJiDZ7y++) {
        for (bMoDVkY = bmsJiDZ7y; FMc9Voz > bMoDVkY; bMoDVkY++)
            if (gerY7yWKmFs[bMoDVkY] < gerY7yWKmFs[bmsJiDZ7y]) {
                uozder = gerY7yWKmFs[bmsJiDZ7y];
                gerY7yWKmFs[bmsJiDZ7y] = gerY7yWKmFs[bMoDVkY];
                gerY7yWKmFs[bMoDVkY] = uozder;
            }
    }
}

void  vmiMAuKJEI () {
    int GvrJZlg3OW;
    for (GvrJZlg3OW = (367 - 367); gLg8pXhzZ > GvrJZlg3OW; GvrJZlg3OW++) {
        HEgyVspSPf7O[GvrJZlg3OW] = XkSuqDQy3[GvrJZlg3OW];
    }
    for (GvrJZlg3OW = gLg8pXhzZ; GvrJZlg3OW < gLg8pXhzZ + FMc9Voz; GvrJZlg3OW++) {
        HEgyVspSPf7O[GvrJZlg3OW] = gerY7yWKmFs[GvrJZlg3OW -gLg8pXhzZ];
    }
}

void  ZVAEkU () {
    int bMoDVkY;
    for (bMoDVkY = 0; bMoDVkY < gLg8pXhzZ + FMc9Voz -1; bMoDVkY++) {
        printf ("%d ", HEgyVspSPf7O[bMoDVkY]);
    }
    printf ("%d", HEgyVspSPf7O[gLg8pXhzZ + FMc9Voz -1]);
}

int main () {
    d5MjVAuyJ3a ();
    eJhnTkEf ();
    vmiMAuKJEI ();
    ZVAEkU ();
}

