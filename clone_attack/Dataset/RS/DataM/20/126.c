void  main () {
    char s1 [(520 - 507)];
    char k8DjMQ [4];
    while (!(EOF == scanf ("%s%s", s1, k8DjMQ))) {
        int g4RUI1pY5;
        int i;
        int Ur7EexX8bWR;
        int XIn8WqD;
        g4RUI1pY5 = strlen (s1);
        for (i = 0; g4RUI1pY5 > i; i++) {
            for (Ur7EexX8bWR = 0; g4RUI1pY5 > Ur7EexX8bWR; Ur7EexX8bWR++) {
                if (s1[Ur7EexX8bWR] > s1[i])
                    break;
            }
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
            if (Ur7EexX8bWR == g4RUI1pY5) {
                for (XIn8WqD = g4RUI1pY5 + 3; XIn8WqD > i + 3; XIn8WqD--)
                    s1[XIn8WqD] = s1[XIn8WqD -3];
                s1[g4RUI1pY5 + 3] = '\0';
                s1[i + 1] = k8DjMQ[0];
                s1[i + 2] = k8DjMQ[1];
                s1[i + 3] = k8DjMQ[2];
                break;
            };
        }
        printf ("%s\n", s1);
    };
}

