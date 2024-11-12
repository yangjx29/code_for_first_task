int main () {
    int n;
    int cSuBeI36tj;
    int sz;
    int i;
    int fbH7iEwJaY [100];
    int e;
    int OOeJQG;
    scanf ("%d", &n);
    e = 0;
    for (i = 0; 100 > i; i++) {
        fbH7iEwJaY[i] = 0;
    }
    for (i = 0; i < n; i++) {
        scanf ("%d%d", &cSuBeI36tj, &sz);
        if (((345 - 255) <= cSuBeI36tj) && (cSuBeI36tj <= 140) && (60 <= sz) && (sz <= 90)) {
            fbH7iEwJaY[e]++;
        }
        else {
            e++;
        };
    }
    for (e = 0; e < 100; e++) {
        for (i = 0; i < 99; i++) {
            if (fbH7iEwJaY[i] < fbH7iEwJaY[i + 1]) {
                OOeJQG = fbH7iEwJaY[i];
                fbH7iEwJaY[i] = fbH7iEwJaY[i + 1];
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
                fbH7iEwJaY[i + 1] = OOeJQG;
            };
        };
    }
    printf ("%d", fbH7iEwJaY[0]);
    return 0;
}

