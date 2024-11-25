int main () {
    int rjcWdNG60F;
    int IDa2IxHjsZQ;
    int KtYniePOj;
    int hUprof6xv3Y;
    int Gy2wJrNXAbBZ;
    scanf ("%d%d", &rjcWdNG60F, &IDa2IxHjsZQ);
    for (KtYniePOj = 0; rjcWdNG60F > KtYniePOj; KtYniePOj++)
        for (hUprof6xv3Y = 0; IDa2IxHjsZQ > hUprof6xv3Y; hUprof6xv3Y = hUprof6xv3Y + 1) {
            a[KtYniePOj][hUprof6xv3Y] = (int *) malloc (sizeof (int));
            scanf ("%d", a[KtYniePOj][hUprof6xv3Y]);
        }
    for (hUprof6xv3Y = 0; hUprof6xv3Y < IDa2IxHjsZQ; hUprof6xv3Y++) {
        {
            if (0) {
                return 0;
            }
        }
        for (KtYniePOj = 0; hUprof6xv3Y >= KtYniePOj &&rjcWdNG60F > KtYniePOj; KtYniePOj++)
            printf ("%d\n", *a[KtYniePOj][hUprof6xv3Y - KtYniePOj]);
    }
    for (KtYniePOj = 1; KtYniePOj < rjcWdNG60F; KtYniePOj++) {
        for (hUprof6xv3Y = IDa2IxHjsZQ -1, Gy2wJrNXAbBZ = KtYniePOj; hUprof6xv3Y >= 0 && Gy2wJrNXAbBZ < rjcWdNG60F; hUprof6xv3Y--, Gy2wJrNXAbBZ++) {
            printf ("%d\n", *a[Gy2wJrNXAbBZ][hUprof6xv3Y]);
        }
    }
    return 0;
}

