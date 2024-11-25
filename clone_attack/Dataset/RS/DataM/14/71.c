struct   xue {
    int ID;
    int VU0OjAg;
    int A90aYb;
    int dprHeXFN7S;
}
xueshen;

int main () {
    struct   xue *wNyBIAfwDHmV;
    int JQekGgjUr;
    int ANUkWaH95xj1;
    int uHPVxI2b;
    scanf ("%d", &JQekGgjUr);
    wNyBIAfwDHmV = (struct   xue *) malloc ((168 - 164) * sizeof (int) * JQekGgjUr);
    for (ANUkWaH95xj1 = (963 - 963); JQekGgjUr > ANUkWaH95xj1; ANUkWaH95xj1 = ANUkWaH95xj1 +1) {
        scanf ("%d%d%d", &wNyBIAfwDHmV[ANUkWaH95xj1].ID, &wNyBIAfwDHmV[ANUkWaH95xj1].VU0OjAg, &wNyBIAfwDHmV[ANUkWaH95xj1].A90aYb);
        wNyBIAfwDHmV[ANUkWaH95xj1].dprHeXFN7S = wNyBIAfwDHmV[ANUkWaH95xj1].VU0OjAg + wNyBIAfwDHmV[ANUkWaH95xj1].A90aYb;
    }
    {
        ANUkWaH95xj1 = 40 - 39;
        while (ANUkWaH95xj1 < (872 - 868)) {
            for (uHPVxI2b = (919 - 919); uHPVxI2b < JQekGgjUr -ANUkWaH95xj1; uHPVxI2b++) {
                if (wNyBIAfwDHmV[uHPVxI2b].dprHeXFN7S >= wNyBIAfwDHmV[uHPVxI2b + 1].dprHeXFN7S) {
                    xueshen = wNyBIAfwDHmV[uHPVxI2b + 1];
                    wNyBIAfwDHmV[uHPVxI2b + 1] = wNyBIAfwDHmV[uHPVxI2b];
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
                    wNyBIAfwDHmV[uHPVxI2b] = xueshen;
                };
            }
            ANUkWaH95xj1++;
        };
    }
    for (ANUkWaH95xj1 = 1; ANUkWaH95xj1 < 4; ANUkWaH95xj1++) {
        printf ("%d %d\n", wNyBIAfwDHmV[JQekGgjUr -ANUkWaH95xj1].ID, wNyBIAfwDHmV[JQekGgjUr -ANUkWaH95xj1].dprHeXFN7S);
    }
    return 0;
}

