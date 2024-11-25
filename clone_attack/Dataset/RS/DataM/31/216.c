struct   student {
    char Ua83gdNO2m [(105 - 85)];
    char b [(610 - 570)];
    char c;
    int QiWEzy;
    float e;
    char z0mgVbZnK [(241 - 221)];
    struct   student *before;
};
int Jt8FmoYPI;

struct   student *hh () {
    struct   student *oQvOWGIhlC, *wHq5a04Cx6, *head;
    head = NULL;
    oQvOWGIhlC = wHq5a04Cx6 = (struct   student *) malloc (LEN);
    scanf ("%s ", &oQvOWGIhlC->Ua83gdNO2m);
    Jt8FmoYPI = 0;
    for (; strcmp (oQvOWGIhlC->Ua83gdNO2m, "end");) {
        Jt8FmoYPI = Jt8FmoYPI +1;
        scanf ("%s %c %d %f %s ", &oQvOWGIhlC->b, &oQvOWGIhlC->c, &oQvOWGIhlC->QiWEzy, &oQvOWGIhlC->e, &oQvOWGIhlC->z0mgVbZnK);
        if (Jt8FmoYPI == 1)
            oQvOWGIhlC->before = NULL;
        else
            oQvOWGIhlC->before = wHq5a04Cx6;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        wHq5a04Cx6 = oQvOWGIhlC;
        oQvOWGIhlC = (struct   student *) malloc (LEN);
        scanf ("%s ", &oQvOWGIhlC->Ua83gdNO2m);
    }
    head = wHq5a04Cx6;
    return (head);
}

void  main () {
    struct   student *JwVdT7nyKjok;
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
    JwVdT7nyKjok = hh ();
    while (JwVdT7nyKjok != NULL) {
        printf ("%s %s %c %d %g %s\n", JwVdT7nyKjok->Ua83gdNO2m, JwVdT7nyKjok->b, JwVdT7nyKjok->c, JwVdT7nyKjok->QiWEzy, JwVdT7nyKjok->e, JwVdT7nyKjok->z0mgVbZnK);
        JwVdT7nyKjok = JwVdT7nyKjok->before;
    };
}

