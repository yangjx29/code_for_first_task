int main () {
    int n, Y0SIiL8sPF, k = 0, Rgu1wUkmTM [100], kJZLuj2gF [100], c [100] = {0}, tylekA9vLVd8;
    scanf ("%d", &n);
    {
        Y0SIiL8sPF = 0;
        while (Y0SIiL8sPF < n) {
            scanf ("%d%d", &Rgu1wUkmTM[Y0SIiL8sPF], &kJZLuj2gF[Y0SIiL8sPF]);
            Y0SIiL8sPF = Y0SIiL8sPF +1;
        };
    }
    for (Y0SIiL8sPF = 0; Y0SIiL8sPF < n; Y0SIiL8sPF = Y0SIiL8sPF +1) {
        if (Rgu1wUkmTM[Y0SIiL8sPF] >= 90 && Rgu1wUkmTM[Y0SIiL8sPF] <= 140 && kJZLuj2gF[Y0SIiL8sPF] >= 60 && kJZLuj2gF[Y0SIiL8sPF] <= 90) {
            c[k]++;
        }
        else {
            k = k + 1;
        };
    }
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
    tylekA9vLVd8 = c[0];
    {
        Y0SIiL8sPF = 0;
        while (Y0SIiL8sPF < k + 1) {
            if (tylekA9vLVd8 < c[Y0SIiL8sPF]) {
                tylekA9vLVd8 = c[Y0SIiL8sPF];
            }
            Y0SIiL8sPF = Y0SIiL8sPF +1;
        };
    }
    if (tylekA9vLVd8 == 0) {
        printf ("%d", tylekA9vLVd8);
    }
    else {
        printf ("%d", tylekA9vLVd8);
    }
    return 0;
}

