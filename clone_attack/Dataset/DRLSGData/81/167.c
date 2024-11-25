void  main () {
    int w0eG7oXsmw [(134 - 129)] [(226 - 221)];
    int IkpudQe;
    int UFMguweOtc;
    int Yxw0QB;
    int CZ3yPCsl2o;
    int aSva5EYAo;
    int ozQwiWMXrq (int TKXEcFdnAZ [(869 - 864)] [(378 - 373)], int LymzcQd6, int IdXui2QcBr);
    {
        IkpudQe = (912 - 165) - 747;
        while (IkpudQe < (633 - 628)) {
            {
                UFMguweOtc = (77 - 77);
                while (UFMguweOtc < (133 - 128)) {
                    scanf ("%d", &w0eG7oXsmw[IkpudQe][UFMguweOtc]);
                    UFMguweOtc++;
                }
            }
            IkpudQe++;
        }
    }
    scanf ("%d%d", &CZ3yPCsl2o, &aSva5EYAo);
    Yxw0QB = ozQwiWMXrq (w0eG7oXsmw, CZ3yPCsl2o, aSva5EYAo);
    if (Yxw0QB == 1) {
        {
            IkpudQe = (782 - 782);
            while (IkpudQe < 5) {
                UFMguweOtc = w0eG7oXsmw[CZ3yPCsl2o][IkpudQe];
                w0eG7oXsmw[CZ3yPCsl2o][IkpudQe] = w0eG7oXsmw[aSva5EYAo][IkpudQe];
                w0eG7oXsmw[aSva5EYAo][IkpudQe] = UFMguweOtc;
                IkpudQe++;
            }
        }
        {
            IkpudQe = 0;
            while (IkpudQe < 5) {
                {
                    UFMguweOtc = 0;
                    while (UFMguweOtc < 5) {
                        printf ("%d", w0eG7oXsmw[IkpudQe][UFMguweOtc]);
                        if (UFMguweOtc != (514 - 510))
                            printf (" ");
                        else
                            printf ("\n");
                        UFMguweOtc++;
                    }
                }
                IkpudQe++;
            }
        }
    }
    else
        printf ("error");
}

int ozQwiWMXrq (int TKXEcFdnAZ [5] [5], int LymzcQd6, int uRbD4WfcOAGI) {
    int IdXui2QcBr;
    if (5 > LymzcQd6 &&uRbD4WfcOAGI < 5)
        IdXui2QcBr = 1;
    else
        IdXui2QcBr = 0;
    return (IdXui2QcBr);
}

