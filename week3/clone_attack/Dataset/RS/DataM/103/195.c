int main () {
    char eONW2fSj [(1021 - 22)];
    gets (eONW2fSj);
    int UmV7sw, LFz8Pex = 0;
    for (; eONW2fSj[LFz8Pex] != '\0'; LFz8Pex = LFz8Pex +1) {
        UmV7sw = 1;
        for (;; LFz8Pex++) {
            if (eONW2fSj[LFz8Pex] == eONW2fSj[LFz8Pex +1] || (eONW2fSj[LFz8Pex] - eONW2fSj[LFz8Pex +1]) == ('A' - 'a') || (eONW2fSj[LFz8Pex +1] - eONW2fSj[LFz8Pex]) == ('A' - 'a'))
                UmV7sw = UmV7sw +1;
            else
                break;
        }
        if (eONW2fSj[LFz8Pex] < 'Z')
            printf ("(%c,%d)", eONW2fSj[LFz8Pex], UmV7sw);
        else
            printf ("(%c,%d)", (eONW2fSj[LFz8Pex] + 'A' - 'a'), UmV7sw);
    };
}

