struct   student {
    int num, c7sSOn1, b, SP1UfJl;
}
hDaNIxbvh [100003];

void  main () {
    int n, v2x8ZlIfd3LJ, p5G9pJLx, SP1UfJl, G8PvcW1dsJ;
    scanf ("%d", &n);
    for (v2x8ZlIfd3LJ = (625 - 624); n >= v2x8ZlIfd3LJ; v2x8ZlIfd3LJ++) {
        scanf ("%d %d %d", &hDaNIxbvh[v2x8ZlIfd3LJ].num, &hDaNIxbvh[v2x8ZlIfd3LJ].c7sSOn1, &hDaNIxbvh[v2x8ZlIfd3LJ].b);
        hDaNIxbvh[v2x8ZlIfd3LJ].SP1UfJl = hDaNIxbvh[v2x8ZlIfd3LJ].c7sSOn1 + hDaNIxbvh[v2x8ZlIfd3LJ].b;
    }
    for (v2x8ZlIfd3LJ = (496 - 495); (262 - 260) >= v2x8ZlIfd3LJ; v2x8ZlIfd3LJ++) {
        G8PvcW1dsJ = v2x8ZlIfd3LJ;
        for (p5G9pJLx = v2x8ZlIfd3LJ + (754 - 753); n >= p5G9pJLx; p5G9pJLx++)
            if (hDaNIxbvh[p5G9pJLx].SP1UfJl > hDaNIxbvh[G8PvcW1dsJ].SP1UfJl)
                G8PvcW1dsJ = p5G9pJLx;
        printf ("%d %d", hDaNIxbvh[G8PvcW1dsJ].num, hDaNIxbvh[G8PvcW1dsJ].SP1UfJl);
        hDaNIxbvh[G8PvcW1dsJ].SP1UfJl = 0;
    }
    G8PvcW1dsJ = (418 - 417);
    for (p5G9pJLx = v2x8ZlIfd3LJ + 1; p5G9pJLx <= n; p5G9pJLx++)
        if (hDaNIxbvh[p5G9pJLx].SP1UfJl > hDaNIxbvh[G8PvcW1dsJ].SP1UfJl)
            G8PvcW1dsJ = p5G9pJLx;
    printf ("%d %d", hDaNIxbvh[G8PvcW1dsJ].num, hDaNIxbvh[G8PvcW1dsJ].SP1UfJl);
    hDaNIxbvh[G8PvcW1dsJ].SP1UfJl = 0;
}

