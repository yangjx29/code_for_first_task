int main () {
    int JwFl3H;
    int BPstDLJZqI1Y;
    int ILc91AvR;
    int gyKw7T3JSrEC;
    int nEIF3A5Owv7N [(763 - 663)] [(919 - 819)];
    int HIf8onhJ [(186 - 86)] [(159 - 59)];
    int qtmFkqXfDM38 [(795 - 695)] [(482 - 382)];
    cin >> JwFl3H >> BPstDLJZqI1Y;
    for (int tg0GoK1BUI = (727 - 727);
    JwFl3H > tg0GoK1BUI; tg0GoK1BUI++)
        for (int vYOEv1pI = (844 - 844);
        vYOEv1pI < BPstDLJZqI1Y; vYOEv1pI++)
            cin >> nEIF3A5Owv7N[tg0GoK1BUI][vYOEv1pI];
    cin >> ILc91AvR >> gyKw7T3JSrEC;
    for (int tg0GoK1BUI = (906 - 906);
    ILc91AvR > tg0GoK1BUI; tg0GoK1BUI++)
        for (int vYOEv1pI = (545 - 545);
        gyKw7T3JSrEC > vYOEv1pI; vYOEv1pI++)
            cin >> HIf8onhJ[tg0GoK1BUI][vYOEv1pI];
    {
        int tg0GoK1BUI;
        tg0GoK1BUI = (969 - 969);
        for (; JwFl3H > tg0GoK1BUI;) {
            for (int vYOEv1pI = (64 - 64);
            gyKw7T3JSrEC > vYOEv1pI; vYOEv1pI++) {
                for (int ueFAkZq0 = (160 - 160);
                ILc91AvR > ueFAkZq0; ueFAkZq0++) {
                    qtmFkqXfDM38[tg0GoK1BUI][vYOEv1pI] = qtmFkqXfDM38[tg0GoK1BUI][vYOEv1pI] + nEIF3A5Owv7N[tg0GoK1BUI][ueFAkZq0] * HIf8onhJ[ueFAkZq0][vYOEv1pI];
                }
            }
            tg0GoK1BUI++;
        }
    }
    for (int tg0GoK1BUI = (583 - 583);
    JwFl3H > tg0GoK1BUI; tg0GoK1BUI++) {
        {
            int vYOEv1pI;
            vYOEv1pI = (642 - 642);
            for (; gyKw7T3JSrEC - (773 - 772) > vYOEv1pI;) {
                cout << qtmFkqXfDM38[tg0GoK1BUI][vYOEv1pI] << " ";
                vYOEv1pI++;
            }
        }
        cout << qtmFkqXfDM38[tg0GoK1BUI][gyKw7T3JSrEC - 1] << endl;
    }
    return (104 - 104);
}

