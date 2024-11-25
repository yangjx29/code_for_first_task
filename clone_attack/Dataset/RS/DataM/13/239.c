int main () {
    int BxIg2ULSh6Dl;
    int QWLZG1FJM;
    int esfzTnk;
    int Y1RbtLvQaY [20000];
    scanf ("%d", &QWLZG1FJM);
    {
        BxIg2ULSh6Dl = 0;
        while (BxIg2ULSh6Dl <= QWLZG1FJM -1) {
            scanf ("%d", &Y1RbtLvQaY[BxIg2ULSh6Dl]);
            BxIg2ULSh6Dl++;
        };
    }
    {
        BxIg2ULSh6Dl = 0;
        while (BxIg2ULSh6Dl <= QWLZG1FJM -1) {
            if (!(0 != BxIg2ULSh6Dl))
                printf ("%d", Y1RbtLvQaY[BxIg2ULSh6Dl]);
            else {
                for (esfzTnk = 0; esfzTnk < BxIg2ULSh6Dl; esfzTnk++) {
                    if (Y1RbtLvQaY[BxIg2ULSh6Dl] == Y1RbtLvQaY[esfzTnk])
                        break;
                }
                if (esfzTnk == BxIg2ULSh6Dl)
                    printf (" %d", Y1RbtLvQaY[BxIg2ULSh6Dl]);
            }
            BxIg2ULSh6Dl++;
        };
    };
}

