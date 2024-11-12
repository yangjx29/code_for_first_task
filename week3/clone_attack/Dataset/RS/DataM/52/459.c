void  main () {
    int *p, *head;
    int x [(732 - 632)];
    int DUh9ZW, ZsavNo6TI, ui5ake6Nrczh;
    scanf ("%d %d", &DUh9ZW, &ZsavNo6TI);
    {
        ui5ake6Nrczh = 0;
        while (DUh9ZW > ui5ake6Nrczh) {
            scanf ("%d", &x[ui5ake6Nrczh]);
            ui5ake6Nrczh = ui5ake6Nrczh + 1;
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
    head = &x[0];
    p = &x[DUh9ZW -ZsavNo6TI];
    for (ui5ake6Nrczh = 0; ZsavNo6TI > ui5ake6Nrczh; ui5ake6Nrczh++, p++)
        printf ("%d ", *p);
    {
        ui5ake6Nrczh = 0;
        while (ui5ake6Nrczh < DUh9ZW -ZsavNo6TI-1) {
            ui5ake6Nrczh++;
            printf ("%d ", *head);
            head++;
        };
    }
    printf ("%d\n", *(head++));
}

