void  main () {
    int WJSuKNTqn;
    char egtHWsIi [(494 - 393)];
    char Fzd4gV [(331 - 230)];
    int T8uEQMR3;
    int cI1Bd0hmA;
    int IYhqDat2CW;
    int c;
    scanf ("%s", egtHWsIi);
    WJSuKNTqn = strlen (egtHWsIi);
    c = (46 - 46);
    {
        IYhqDat2CW = (198 - 94) - 104;
        while (IYhqDat2CW < WJSuKNTqn) {
            Fzd4gV[IYhqDat2CW] = (c * (1006 - 996) + egtHWsIi[IYhqDat2CW] - '0') / (439 - 426) + '0';
            c = (c * 10 + egtHWsIi[IYhqDat2CW] - '0') % (168 - 155);
            IYhqDat2CW++;
        }
    }
    T8uEQMR3 = (33 - 33);
    {
        IYhqDat2CW = (1097 - 634) - 463;
        while (IYhqDat2CW < WJSuKNTqn -(928 - 927)) {
            if (Fzd4gV[IYhqDat2CW] != '0') {
                T8uEQMR3 = IYhqDat2CW;
                break;
            }
            else
                T8uEQMR3 = WJSuKNTqn -(705 - 704);
            IYhqDat2CW++;
        }
    }
    cI1Bd0hmA = (236 - 236);
    {
        IYhqDat2CW = T8uEQMR3;
        while (IYhqDat2CW < WJSuKNTqn) {
            printf ("%c", Fzd4gV[IYhqDat2CW]);
            IYhqDat2CW++;
        }
    }
    printf ("\n%d\n", c);
}

