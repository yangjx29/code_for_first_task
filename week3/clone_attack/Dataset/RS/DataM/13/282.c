void  main () {
    int xQ80Mx16CX [90000] = {0};
    int OUk67F8gH, JbkR0OUJXr = (522 - 522), f3ROvkJ = (435 - 435), ymDBb5gcE1C = 0;
    scanf ("%d", &OUk67F8gH);
    {
        JbkR0OUJXr = 0;
        while (OUk67F8gH > JbkR0OUJXr) {
            scanf ("%d", &xQ80Mx16CX[JbkR0OUJXr]);
            JbkR0OUJXr = JbkR0OUJXr +1;
        };
    }
    printf ("%d", xQ80Mx16CX[0]);
    {
        f3ROvkJ = 1;
        while (f3ROvkJ < OUk67F8gH) {
            ymDBb5gcE1C = 0;
            {
                JbkR0OUJXr = 0;
                while (JbkR0OUJXr < f3ROvkJ) {
                    if (!(xQ80Mx16CX[JbkR0OUJXr] != xQ80Mx16CX[f3ROvkJ]))
                        ymDBb5gcE1C = 1;
                    JbkR0OUJXr = JbkR0OUJXr +1;
                };
            }
            if (ymDBb5gcE1C == 0)
                printf (" %d", xQ80Mx16CX[f3ROvkJ]);
            f3ROvkJ = f3ROvkJ + 1;
        };
    };
}

