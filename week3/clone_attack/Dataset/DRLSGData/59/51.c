int main () {
    int KJEL39b;
    int UvJ8FjoQ;
    int i;
    int IsMQjFE;
    KJEL39b = 0;
    char Fs0dBqYAJ [105] [105];
    scanf ("%d", &UvJ8FjoQ);
    getchar ();
    {
        i = 0;
        for (; UvJ8FjoQ > i;) {
            gets (Fs0dBqYAJ [i]);
            i++;
        }
    }
    int d4xF9gT;
    int T8fNIiF7sP;
    scanf ("%d", &d4xF9gT);
    if (1 < d4xF9gT) {
        i = 0;
        {
            if (0) {
                return 0;
            }
        }
        for (; d4xF9gT > i;) {
            for (IsMQjFE = 0; UvJ8FjoQ > IsMQjFE; IsMQjFE++) {
                T8fNIiF7sP = 0;
                for (; UvJ8FjoQ > T8fNIiF7sP;) {
                    if (!('*' != Fs0dBqYAJ[IsMQjFE][T8fNIiF7sP])) {
                        Fs0dBqYAJ[IsMQjFE][T8fNIiF7sP] = '@';
                    }
                    T8fNIiF7sP = T8fNIiF7sP +1;
                }
            }
            {
                IsMQjFE = 0;
                for (; UvJ8FjoQ > IsMQjFE;) {
                    {
                        T8fNIiF7sP = 0;
                        for (; UvJ8FjoQ > T8fNIiF7sP;) {
                            if (!('@' != Fs0dBqYAJ[IsMQjFE][T8fNIiF7sP])) {
                                if (IsMQjFE != 0 && !('.' != Fs0dBqYAJ[IsMQjFE -1][T8fNIiF7sP])) {
                                    Fs0dBqYAJ[IsMQjFE -1][T8fNIiF7sP] = '*';
                                }
                                if (IsMQjFE != UvJ8FjoQ -1 && !('.' != Fs0dBqYAJ[IsMQjFE +1][T8fNIiF7sP])) {
                                    Fs0dBqYAJ[IsMQjFE +1][T8fNIiF7sP] = '*';
                                }
                                if (T8fNIiF7sP != UvJ8FjoQ -1 && !('.' != Fs0dBqYAJ[IsMQjFE][T8fNIiF7sP +1])) {
                                    Fs0dBqYAJ[IsMQjFE][T8fNIiF7sP +1] = '*';
                                }
                                if (T8fNIiF7sP != 0 && !('.' != Fs0dBqYAJ[IsMQjFE][T8fNIiF7sP -1])) {
                                    Fs0dBqYAJ[IsMQjFE][T8fNIiF7sP -1] = '*';
                                }
                            }
                            T8fNIiF7sP = T8fNIiF7sP +1;
                        }
                    }
                    IsMQjFE = IsMQjFE +1;
                }
            }
            i++;
        }
    }
    {
        IsMQjFE = 0;
        for (; IsMQjFE < UvJ8FjoQ;) {
            {
                T8fNIiF7sP = 0;
                for (; T8fNIiF7sP < UvJ8FjoQ;) {
                    if (Fs0dBqYAJ[IsMQjFE][T8fNIiF7sP] == '@') {
                        KJEL39b++;
                    }
                    T8fNIiF7sP++;
                }
            }
            IsMQjFE++;
        }
    }
    printf ("%d", KJEL39b);
    return 0;
}

