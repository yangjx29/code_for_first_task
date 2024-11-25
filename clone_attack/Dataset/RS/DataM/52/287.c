void  jvOdMgjK (int FMstU7fr, int WGhefbwo) {
    int MSAsZxfOgJo, q0AKvbpQB [(680 - 580)];
    for (MSAsZxfOgJo = 0; FMstU7fr > MSAsZxfOgJo; MSAsZxfOgJo = MSAsZxfOgJo +1)
        scanf ("%d", &q0AKvbpQB[MSAsZxfOgJo]);
    {
        MSAsZxfOgJo = FMstU7fr -WGhefbwo;
        while (FMstU7fr > MSAsZxfOgJo) {
            printf ("%d ", q0AKvbpQB[MSAsZxfOgJo]);
            MSAsZxfOgJo = MSAsZxfOgJo +1;
        };
    }
    for (MSAsZxfOgJo = 0; MSAsZxfOgJo < FMstU7fr -WGhefbwo-1; MSAsZxfOgJo = MSAsZxfOgJo +1)
        printf ("%d ", q0AKvbpQB[MSAsZxfOgJo]);
    printf ("%d", q0AKvbpQB[MSAsZxfOgJo]);
}

main () {
    int dDuxshtIBUai, PTRB0X5fc7j;
    scanf ("%d %d", &dDuxshtIBUai, &PTRB0X5fc7j);
    jvOdMgjK (dDuxshtIBUai, PTRB0X5fc7j);
}

