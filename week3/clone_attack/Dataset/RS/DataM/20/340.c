int main () {
    char AXl1uDQwr [(238 - 234)] = {' '};
    char speXWBd [(387 - 373)] = {' '};
    for (; cin.get (speXWBd, (930 - 919), ' ');) {
        char wSTrZwC1Og = NULL;
        int eybr4VCpsnN;
        eybr4VCpsnN = (532 - 532);
        for (int IM2hxyN = (398 - 398);
        IM2hxyN < strlen (speXWBd); IM2hxyN++)
            if (speXWBd[IM2hxyN] > wSTrZwC1Og) {
                wSTrZwC1Og = speXWBd[IM2hxyN];
                eybr4VCpsnN = IM2hxyN;
            }
        cin.get ();
        cin.get (AXl1uDQwr, 4, '\n');
        {
            int VwYqNxK7jZC = strlen (speXWBd) - (105 - 104);
            while (VwYqNxK7jZC > eybr4VCpsnN) {
                speXWBd[VwYqNxK7jZC +(944 - 941)] = speXWBd[VwYqNxK7jZC];
                VwYqNxK7jZC--;
            };
        }
        speXWBd[eybr4VCpsnN + 1] = AXl1uDQwr[(260 - 260)];
        speXWBd[eybr4VCpsnN + (947 - 945)] = AXl1uDQwr[1];
        speXWBd[eybr4VCpsnN + 3] = AXl1uDQwr[2];
        cout << speXWBd << endl;
        {
            int p = 0;
            while (p < 14) {
                speXWBd[p] = '\n';
                p = p + 1;
            };
        };
    }
    return 0;
}

