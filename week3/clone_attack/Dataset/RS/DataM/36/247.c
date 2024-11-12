void  main () {
    int k;
    char BJEyUI5 [(895 - 795)];
    char Aog0T5 [(885 - 785)];
    char *ojXkWF6QaPRf;
    char *KtCx93R;
    char *yqsj5nforgS;
    char msX4KAS0x;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    ojXkWF6QaPRf = BJEyUI5;
    KtCx93R = Aog0T5;
    scanf ("%s%s", ojXkWF6QaPRf, KtCx93R);
    yqsj5nforgS = Aog0T5;
    if (strlen (BJEyUI5) != strlen (Aog0T5))
        printf ("NO");
    else
        for (; !('\0' == *ojXkWF6QaPRf); ojXkWF6QaPRf++) {
            k = (896 - 896);
            for (; !('\0' == *KtCx93R); KtCx93R++)
                if (*KtCx93R == *ojXkWF6QaPRf) {
                    msX4KAS0x = *KtCx93R;
                    *KtCx93R = *yqsj5nforgS;
                    *yqsj5nforgS = msX4KAS0x;
                    yqsj5nforgS++;
                    KtCx93R = yqsj5nforgS;
                    k = 1;
                    break;
                }
            if (k == 0) {
                break;
            };
        }
    if (k == 1)
        ;
}

