int main () {
    int IYuGnWz5ji;
    int y;
    int a;
    int fxNKYUeJ6X;
    a = (495 - 495);
    fxNKYUeJ6X = 0;
    int S3pVioutsS1a;
    int MVYpriwOTs;
    scanf ("%d\n", &S3pVioutsS1a);
    for (MVYpriwOTs = 0; MVYpriwOTs < S3pVioutsS1a; MVYpriwOTs = MVYpriwOTs +1) {
        scanf ("%d %d\n", &IYuGnWz5ji, &y);
        if (IYuGnWz5ji == y) {
            fxNKYUeJ6X = fxNKYUeJ6X + 1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            a = a + 1;
        }
        else {
            if (IYuGnWz5ji -y == -1 || IYuGnWz5ji -y == 2)
                a = a + 1;
            else
                fxNKYUeJ6X = fxNKYUeJ6X + 1;
        };
    }
    if (a == fxNKYUeJ6X)
        printf ("Tie");
    else if (a > fxNKYUeJ6X)
        printf ("A");
    else
        printf ("B");
}

