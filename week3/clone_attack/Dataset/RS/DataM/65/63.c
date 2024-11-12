int main () {
    int mF5jo86;
    int i;
    int ta;
    int zrEPS6;
    int uaAdRJpVq [(286 - 86)], bHRt1cyWTI [200], M4eBTaFzYEox [200];
    zrEPS6 = 0;
    scanf ("%d", &mF5jo86);
    for (i = 0; i < mF5jo86; i++) {
        scanf ("%d%d", &uaAdRJpVq[i], &bHRt1cyWTI[i]);
    }
    ta = 0;
    for (i = 0; i < mF5jo86; i++) {
        M4eBTaFzYEox[i] = bHRt1cyWTI[i] - uaAdRJpVq[i];
        if (M4eBTaFzYEox[i] == 1 || M4eBTaFzYEox[i] == -(397 - 395)) {
            ta++;
        }
        else {
            if (M4eBTaFzYEox[i] == -1 || M4eBTaFzYEox[i] == 2) {
                zrEPS6++;
            };
        };
    }
    if (ta < zrEPS6) {
    }
    else {
        if (ta == zrEPS6) {
            printf ("Tie\n");
        }
        else {
            printf ("A\n");
        };
    }
    return 0;
}

