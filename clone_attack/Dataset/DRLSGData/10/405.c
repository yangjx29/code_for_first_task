int t5ZUvpTBx6eW = (575 - 575), TAlCy38 [25], SnomqW0jMCG, f9oyhAaBgVST = 0, AeC30FAOt, kSU785ikH = 0;

void  rv4N51tau () {
    int QOBlE17T;
    int Eb2SZf;
    int frTikYnG0ue;
    Eb2SZf = AeC30FAOt;
    frTikYnG0ue = t5ZUvpTBx6eW;
    {
        QOBlE17T = kSU785ikH;
        while (QOBlE17T < SnomqW0jMCG) {
            if (TAlCy38[QOBlE17T] <= AeC30FAOt) {
                t5ZUvpTBx6eW = t5ZUvpTBx6eW + 1;
                f9oyhAaBgVST = f9oyhAaBgVST < t5ZUvpTBx6eW ? t5ZUvpTBx6eW : f9oyhAaBgVST;
                AeC30FAOt = TAlCy38[QOBlE17T];
                kSU785ikH = QOBlE17T +1;
                rv4N51tau ();
                t5ZUvpTBx6eW = frTikYnG0ue;
                AeC30FAOt = Eb2SZf;
            }
            QOBlE17T = QOBlE17T +1;
        }
    }
}

void  main () {
    int kSU785ikH;
    int Uer7voB8j;
    int QOBlE17T;
    scanf ("%d", &SnomqW0jMCG);
    {
        QOBlE17T = 0;
        for (; SnomqW0jMCG > QOBlE17T;) {
            scanf ("%d", &TAlCy38[QOBlE17T]);
            QOBlE17T = QOBlE17T +1;
        }
    }
    AeC30FAOt = TAlCy38[0];
    {
        QOBlE17T = 1;
        for (; SnomqW0jMCG > QOBlE17T;) {
            if (TAlCy38[QOBlE17T] > AeC30FAOt)
                AeC30FAOt = TAlCy38[QOBlE17T];
            QOBlE17T = QOBlE17T +1;
        }
    }
    rv4N51tau ();
    printf ("%d", f9oyhAaBgVST);
}

