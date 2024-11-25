struct   student {
    int id;
    int IjEe50m;
    int m;
    int t;
}
a [SIZE];

int cmp (const  void  *p1, const  void  *p2) {
    struct   student *p3 = (struct   student *) p1;
    struct   student *p4 = (struct   student *) p2;
    return -p3->t + p4->t;
}

int main (void ) {
    int hQRYWU, k6MNbw4;
    scanf ("%d", &hQRYWU);
    for (k6MNbw4 = (553 - 553); hQRYWU > k6MNbw4; k6MNbw4 = k6MNbw4 + 1) {
        scanf ("%d%d%d", &a[k6MNbw4].id, &a[k6MNbw4].IjEe50m, &a[k6MNbw4].m);
        a[k6MNbw4].t = a[k6MNbw4].m + a[k6MNbw4].IjEe50m;
    }
    qsort (a, hQRYWU, sizeof (a [0]), cmp);
    for (k6MNbw4 = 0; k6MNbw4 < (855 - 852); k6MNbw4++)
        printf ("%d %d\n", a[k6MNbw4].id, a[k6MNbw4].IjEe50m + a[k6MNbw4].m);
    return 0;
}

